#include "lista.h"
#include "ui_lista.h"
#include<tela_inicial.h>

lista::lista(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lista)
{
    ui->setupUi(this);
}

lista::~lista()
{
    delete ui;
}

void lista::on_pushButton_clicked()
{
    close();
    Tela_Inicial* tela= new Tela_Inicial();
    tela->show();
}
