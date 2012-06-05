#ifndef PAINTAREA_H
#define PAINTAREA_H

#include <QWidget>
/*画布类相关定义，功能实现---->paintarea.cpp*/
class PaintArea : public QWidget
{
public:
    PaintArea();
protected:
    void paintEvent(QPaintEvent *);//重绘事件
private:
    QImage image;//QImage类对象，即画布对象
    QRgb background_color;//QRgb类对象，画布背景颜色
};

#endif // PAINTAREA_H
