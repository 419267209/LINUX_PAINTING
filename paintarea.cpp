#include "paintarea.h"
#include <QPainter>
/*利用Qt里QPainter库里函数，加入QPainter头文件*/

/*初始化*/
PaintArea::PaintArea()
{
    image = QImage(450,300,QImage::Format_RGB32);//定义画布初始大小，使用32位颜色
    background_color = qRgb(255,255,255);//背景颜色为白色
    image.fill(background_color);
}
/*重绘函数*/
void PaintArea::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawImage(0,0,image);//坐标，对象
}
