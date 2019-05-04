#include "cliente.h"
#include "ui_cliente.h"
#include<tela_inicial.h>
#include<checkout.h>

cliente::cliente(QWidget *parent, QString nome,QString cpf,QString tel,QString checkin,QString quarto) :
    QDialog(parent),
    ui(new Ui::cliente)
{
    ui->setupUi(this);

    ui->nomeText->setText(nome);

    ui->cpfText->setText(cpf);
    ui->telefoneText->setText(tel);
    ui->checkinText->setText(checkin);
    ui->quartoText->setText(quarto);
}

cliente::~cliente()
{
    delete ui;
}

void cliente::on_voltarButton_clicked()
{
    close();
    Tela_Inicial* tela= new Tela_Inicial();
    tela->show();
}

void cliente::on_checkoutButton_clicked()
{
    close();
    checkout* t= new checkout();
    t->show();
}

void cliente::on_salvarButton_clicked()
{
    //salvar e fechar
    close();
    Tela_Inicial* tela= new Tela_Inicial();
    tela->show();
}
