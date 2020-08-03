#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "testthread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void init();

private slots:
    void on_thread_finish(const int value);

private:
    Ui::MainWindow *ui;
    testThread *m_thread;
    QString str1;
    QString str2;
};
#endif // MAINWINDOW_H
