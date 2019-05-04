#include "tela_inicial.h"
#include "ui_tela_inicial.h"
#include<lista.h>
#include<registros.h>


Tela_Inicial::Tela_Inicial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tela_Inicial)
{
    ui->setupUi(this);
}

Tela_Inicial::~Tela_Inicial()
{
    delete ui;
}

void Tela_Inicial::on_Btn_LimpaDados_clicked()
{

}

void Tela_Inicial::on_novaReservaButton_clicked()
{
    close();
    cadastro c;
    c.setModal(true);
    c.exec();
}

void Tela_Inicial::on_BuscarButton_clicked()
{
    close();
    Buscar_cliente b;
    b.setModal(true);
    b.exec();


}

void Tela_Inicial::on_CheckoutButton_clicked()
{
    close();
    checkout co;
    co.setModal(true);
    co.exec();

}

void Tela_Inicial::on_actionSair_triggered()
{
    close();
}

void Tela_Inicial::on_ListaButton_clicked()
{
    close();
    lista l;
    l.setModal(true);
    l.exec();
}

void Tela_Inicial::on_actionLista_de_Registros_triggered()
{
    close();
    registros r;
    r.setModal(true);
    r.exec();
}
