#include "testthread.h"

testThread::testThread(QObject *parent) : QThread(parent)
{

}

void testThread::run()
{
    int time = 10;
    QString txt = "result : ";

    qTime.start();
    int _time = qTime.elapsed();
    while(time > 0){

        while((qTime.elapsed()-_time) < 500){

        }
        _time = qTime.elapsed();

        qDebug(txt.toLatin1()+"%d",time);

        emit testSignal(time);

        time--;
    }
}
