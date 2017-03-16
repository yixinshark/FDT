#include <QApplication>
#include "userinterface/navigationwiget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    NavigationWiget w;
    w.setFixedWidth(230);
    //w.resize();
    w.show();

    a.exec();
    return 0;
}
