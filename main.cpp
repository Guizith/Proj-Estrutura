#include "login_funcionario.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login_funcionario w;
    w.show();

    return a.exec();
}
