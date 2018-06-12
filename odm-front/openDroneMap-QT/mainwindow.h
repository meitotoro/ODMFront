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

    void on_back_clicked();
    void waitForAllReplies(QNetworkReply* reply);

private:
    void httpRequest(QString batchName, QStringList fileList, int step);
    void transferFinished();

private:
    Ui::MainWindow *ui;
    int files_sent = 0;
    QStringList fileList;
    QSemaphore num;
    QMap<QString, bool> map;
    QNetworkAccessManager *manager;
    QString batchName;
};

#endif // MAINWINDOW_H
