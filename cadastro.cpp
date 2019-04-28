#include "cadastro.h"
#include "ui_cadastro.h"
#include<cliente.h>

cadastro::cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro)
{
    ui->setupUi(this);
}

cadastro::~cadastro()
{
    delete ui;
}

void cadastro::on_SalvarButton_clicked()
{
    close();
    QString nome= ui->nomeText->text();
    QString cpf= ui->cpfText->text();
    QString tel= ui->telefoneText->text();
    QString checkin= ui->checkinText->text();
    QString quarto= ui->quartoText->text();

    cliente* c = new cliente(this,nome,cpf,tel,checkin,quarto);
    c->exec();
}
