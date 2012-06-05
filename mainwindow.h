#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <paintarea.h>
#include <QScrollArea>

/*添加painterarea到主界面*/
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

    PaintArea *area;//定义area
    QScrollArea *scrollArea;//滚动条
};

#endif // MAINWINDOW_H
