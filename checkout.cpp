#include "checkout.h"
#include "ui_checkout.h"
#include<tela_inicial.h>

checkout::checkout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkout)
{
    ui->setupUi(this);
}

checkout::~checkout()
{
    delete ui;
}

void checkout::on_pushButton_clicked()
{

    //retorno para tela inicial
    close();
    Tela_Inicial* tela= new Tela_Inicial();
    tela->show();
}
