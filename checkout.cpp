#include "checkout.h"
#include "ui_checkout.h"
#include<tela_inicial.h>

checkout::checkout(QWidget *parent,QString id, QString nome,QString cpf,QString tel,QString checkin,QString quarto) :
    QDialog(parent),
    ui(new Ui::checkout)
{
    ui->setupUi(this);
    ui->idText->setText(id);
   ui->nomeText->setText(nome);

   ui->cpfText->setText(cpf);
   ui->telefoneText->setText(tel);
   ui->checkinText->setText(checkin);
   ui->quartoText->setText(quarto);
}

checkout::~checkout()
{
    delete ui;
}

void checkout::on_pushButton_clicked()
{
    //lde_reg r;
    //r.insere(cliente);

    //retorno para tela inicial
    close();
    Tela_Inicial* tela= new Tela_Inicial();
    tela->show();
}
