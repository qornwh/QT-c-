#ifndef TESTTHREAD_H
#define TESTTHREAD_H

#include <QThread>
#include <QObject>
#include <QTime>

class testThread : public QThread
{
    Q_OBJECT // 시그널이나 슬롯을 사용할때에 Q_OBJECT을 명시해주어야 한다.
public:
    explicit testThread(QObject *parent = 0); // 형변환을 막기 위해 explicit 사용

private:
    void run();

signals:
    void testSignal(const int value);

public slots:

private:
    QTime qTime;
};

#endif // TESTTHREAD_H
