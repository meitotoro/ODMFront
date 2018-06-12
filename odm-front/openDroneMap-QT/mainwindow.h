#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QSemaphore>
#include <QMap>

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

private:
    Ui::MainWindow *ui;
    int file_number=0;
    void httpRequest(QString batchName, QStringList fileList, int step);
    QStringList fileList;
    QSemaphore num;
    QMap<QString, bool> map;
};

#endif // MAINWINDOW_H
