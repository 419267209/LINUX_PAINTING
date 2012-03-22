#include "mypainter.h"
#include <QString>
#include <QMessageBox>
#include <QPainter>
#include <QPen>
#include <QMouseEvent>


mypainter::mypainter(QWidget *parent)
{
    setMinimumSize(240,120);
    setMaximumSize(480,240);
    this->setMouseTracking(true);
    this->IsPressed = false;
}

mypainter::~mypainter()
{

}

void mypainter::paintEvent(QPaintEvent *p)
{
    QPainter painter(this);
    QPen pen;
    pen.setColor(Qt::darkGreen);
    pen.setWidth(5);
    painter.setPen(pen);

    for(int i=0;i<lines.size();i++)
    {
        myline* pline = lines[i];
        painter.drawLine(pline->startPoint,pline->endPoint);
    }
}

void mypainter::mousePressEvent(QMouseEvent *e)
{
    setCursor(Qt::PointingHandCursor);
    startPoint = e->pos();
    endPoint = e->pos();
    this->IsPressed = true;
}

void mypainter::mouseMoveEvent(QMouseEvent *e)
{
    if(this->IsPressed)
    {
        endPoint = e->pos();

        myline* line = new myline;
        line->startPoint = startPoint;
        line->endPoint = endPoint;
        this->lines.push_back(line);

        update();
        startPoint = endPoint;
    }
}

void mypainter::mouseReleaseEvent(QMouseEvent *e)
{
    setCursor(Qt::ArrowCursor);
    this->IsPressed = false;
}
