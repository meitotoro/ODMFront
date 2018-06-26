#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QSemaphore>
#include <QMap>
#include <QNetworkAccessManager>

class QNetworkReply;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    QString input_path;
    QString Output_path;

private slots:
    void on_inputButton_clicked();
    
    void on_startButton_clicked();

    void on_stop_clicked();

//slots:
//    void getProgress();
private:
    void httpRequest(QString batchName, QStringList fileList);
    void transferFinished();
    void get_progress();
    void get_resultFiles();
    void stopDocker();
    void runDocker();

private:
    Ui::MainWindow *ui;
    int files_sent = 0;
    QStringList fileList;
    QSemaphore num;
    QMap<QString, bool> map;
    QNetworkAccessManager *manager;
    QString batchName;
    void httpConnectTest();
    QTimer *timer;
};

#endif // MAINWINDOW_H
