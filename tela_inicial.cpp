#include "tela_inicial.h"
#include "ui_tela_inicial.h"

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
    //cadastro c= new cadastro();
    //c.show(true)
}

void Tela_Inicial::on_BuscarButton_clicked()
{
    //buscar_cliente b= new buscar_cliente();
    //b.show(true)
}
