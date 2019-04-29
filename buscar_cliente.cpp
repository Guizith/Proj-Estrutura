#include "buscar_cliente.h"
#include "ui_buscar_cliente.h"
#include<tela_inicial.h>

Buscar_cliente::Buscar_cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Buscar_cliente)
{
    ui->setupUi(this);
}

Buscar_cliente::~Buscar_cliente()
{
    delete ui;
}

void Buscar_cliente::on_SalvarButton_clicked()
{
    close();
    //faz a busca
    //chamda da tela cliente com os campos preenchidos com o resultado da busca>> cliente* c = new cliente(this,nomeprocurdo,cpf,tel,checkin,quarto);


    //modo teste
    cliente c;
    c.setModal(true);
    c.exec();





}
