#include "buscar_cliente.h"
#include "ui_buscar_cliente.h"

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
    //faz a busca
    cliente c;
    c.setModal(true);
    c.exec();
}
