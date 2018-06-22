#ifndef DOCKER_H
#define DOCKER_H
#include <QObject>
#include <QString>

class QNetworkAccessManager;
class Docker:public QObject
{
    Q_OBJECT
public:
    Docker(QString &batchName,QString &inputPath,QWidget *parent);
    ~Docker();
    void run(QNetworkAccessManager* netman);
    void stop(QNetworkAccessManager *netman);
    int get_progress(QNetworkAccessManager *netman,int min_progress,int max_progress);
    void get_resulteFiles();
    int get_curProgress();

signals:
    void dockerRun();
    void resultReady();

private:
    QString _batchName;
    QString _inputPath;
    QWidget* _parent;
    int _curProgress=0;
};

#endif // DOCKER_H
