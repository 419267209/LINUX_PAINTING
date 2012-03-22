#ifndef MYPAINTER_H
#define MYPAINTER_H

#include <QWidget>
#include <QPoint>
#include <vector>

using namespace std;

//线段
typedef struct myline{
 QPoint startPoint;
 QPoint endPoint;
}myline;

class mypainter:public QWidget
{
public:
    mypainter(QWidget* parent);
    ~mypainter();
    //继承
    void paintEvent(QPaintEvent* p);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

    QPoint startPoint; //起点
    QPoint endPoint;    //终点
    bool IsPressed;     //鼠标是否按下

    vector<myline*>lines;   //存放所有线段
};

#endif // MYPAINTER_H
