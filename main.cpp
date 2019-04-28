#include "tela_inicial.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tela_Inicial w;
    w.show();

    return a.exec();
}
