#include "registros.h"
#include "ui_registros.h"
#include<tela_inicial.h>

registros::registros(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registros)
{
    ui->setupUi(this);
}

registros::~registros()
{
    delete ui;
}

void registros::on_voltarButton_clicked()
{
    close();
    Tela_Inicial* tela= new Tela_Inicial();
    tela->show();
}
