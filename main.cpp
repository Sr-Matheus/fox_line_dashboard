#include "fm_dashboard.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fm_dashboard w;
    w.show();
    return a.exec();
}
