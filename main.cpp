#include <QApplication>
#include <mypainter.h>

int main(int argc,char** argv)
{
    QApplication a(argc,argv);
    mypainter w(0);
    w.show();
    return a.exec();
}
