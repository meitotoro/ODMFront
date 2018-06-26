#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "replytimeout.h"
#include "sendfiles.h"
#include <QFileDialog>
#include <QDebug>
#include <QStringList>
#include <QProcess>
#include <QMessageBox>
#include <QDialog>
#include <QDateTime>
#include <QUrlQuery>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFileInfoList>
#include <QFileInfo>
#include <memory>
#include <QTimer>
#include <QJsonObject>
#include <QJsonDocument>
#include "docker.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    num(5)
{
    ui->setupUi(this);
    manager=new QNetworkAccessManager(this);
    timer = new QTimer(this);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete manager;
    delete timer;
}

void MainWindow::on_inputButton_clicked()
{
    QString filePath = QFileDialog::getExistingDirectory(this, tr("Open Image"), "../",
                                                         QFileDialog::ShowDirsOnly
                                                         | QFileDialog::DontResolveSymlinks);
    input_path=filePath;

    ui->inputFilePath->setText(filePath);
    QDir dir(filePath);

    QStringList filters;
    filters << "*.png" << "*.jpg" << "*.bmp";
    QStringList list=dir.entryList(filters);
    ui->imageList->clear();
    ui->imageList->addItems(list);
    QFileInfoList absoluteList=dir.entryInfoList(filters);
    fileList.clear();
    for(int i=0;i<absoluteList.size();i++){
        fileList.append(absoluteList.at(i).filePath());
    }
}

void MainWindow::get_resultFiles(){
    QString path =input_path+"/1.zip";
    QDir dir(input_path);
    if(!dir.exists(path))
    {
        dir.mkpath(input_path);
        qDebug()<<"directory now exists";

    }
    auto file = std::make_shared<QFile>(path);
    //QFile *file1=new QFile(path);
    file->open(QIODevice::ReadWrite);
    QUrl url("http://192.168.188.10:9000/orthomap");
    QNetworkRequest request(url);
    auto reply=manager->get(request);
    connect(reply, QNetworkReply::readyRead,
            [=](){
        std::vector<char> buffer(4096);
        qint64 bytesRead;
        while ((bytesRead=reply->read(&buffer[0],buffer.size()))>0){
            file->write(&buffer[0],bytesRead);
        }

    });
    connect(reply, QNetworkReply::finished,
            [=](){
        file->close();
        reply->deleteLater();
        QMessageBox::information(this,"提示","后台文件返回成功",QMessageBox::Ok);
    });

}

void MainWindow::httpConnectTest(){
    QUrl url("http://192.168.188.10:9000/httpTest");
    QNetworkRequest request(url);
    auto reply=manager->get(request);
    auto docker = std::make_shared<Docker>(batchName,input_path,this->window());
    connect(reply,QNetworkReply::finished,[=](){
        QNetworkReply::NetworkError code=reply->error();
        //        QString errorString=reply->errorString();
        //        qDebug()<<errorString;
        if(code==QNetworkReply::ConnectionRefusedError){
            QMessageBox::information(this,"提示","服务器链接不成功，请检查服务器状态",QMessageBox::Ok);
            reply->abort();
        }else
        {
            //服务器连接成功，用户可以重新选择图片，拼接正射影像
            QString newButtonText="重新选择图片";
            ui->inputButton->setText(newButtonText);
            SendFiles files(manager,fileList, batchName);
            ui->progress_label->setText("开始传输图片..");
            //向服务器发送传输文件
            files.send(manager);
            //运行docker请求
            //如果之前有正在运行的docker，停掉，运行新的docker
            docker->stop(manager);
            docker->run(manager);
            //docker开始运行了，发回信号，开始拿后台的progress
            //connect(timer,QTimer::timeout,this,this->getProgress());
            connect(timer,QTimer::timeout,this,[=](){
                docker->get_progress(manager,0,110);
                int progress=docker->get_curProgress();
                qDebug()<<progress;
                ui->progressBar->setValue(progress);
            });
            connect(docker.get(),Docker::dockerRun,[=](){
                ui->progress_label->setText("start run docker..");
                timer->start(2000);
            });
            connect(docker.get(),Docker::littleImage,[=](){
               timer->disconnect();
            });
            connect(docker.get(),Docker::resultReady,[=](){
                get_resultFiles();
            });
        }
        reply->deleteLater();

    });
}

void MainWindow::on_startButton_clicked()
{
    QString address=ui->lineEdit->text();
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy.MM.dd");
    batchName=address+"-"+current_date;
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(110);
    ui->progressBar->setValue(0);
    httpConnectTest();

}

//void MainWindow::getProgress()
//{

//    docker->get_progress(manager,0,110);
//    int progress=docker->get_curProgress();
//    qDebug()<<progress;
//    ui->progressBar->setValue(progress);

//}

void MainWindow::on_stop_clicked()
{
    auto docker = std::make_shared<Docker>(batchName,input_path,this->window());
    docker->stop(manager);
    timer->stop();
    timer->disconnect();
    ui->progressBar->setValue(0);
    ui->progress_label->setText("后台停止运行");
    //QMessageBox::information(this,"提示","后台停止运行",QMessageBox::Ok);
}


