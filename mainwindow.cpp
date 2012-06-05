#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(750,500);//主窗口大小
    area = new PaintArea;
    scrollArea = new QScrollArea;
    scrollArea->setBackgroundRole(QPalette::Dark);//scrollArea背景颜色为黑色
    scrollArea->setWidget(area);//添加画布
    scrollArea->widget()->setMinimumSize(800,600);//scrollArea初始大小
    setCentralWidget(scrollArea);//置scrollArea于主窗口中心
}

MainWindow::~MainWindow()
{
    delete ui;
}
