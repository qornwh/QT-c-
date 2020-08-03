#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    m_thread = new testThread(this);
    connect(m_thread, SIGNAL(testSignal(int)), this, SLOT(on_thread_finish(int)));
    str1 = "background-color : rgba(0  ,   0, 255, 0.5);";
    str2 = "background-color : rgba(255, 255, 255, 0.5);";
    m_thread->start();
}

void MainWindow::on_thread_finish(const int value)
{
    if(value % 2 == 1)
    {
        ui->label->setStyleSheet(str1);
    }
    else
    {
        ui->label->setStyleSheet(str2);
    }
}
