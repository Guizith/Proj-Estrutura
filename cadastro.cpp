#include "cadastro.h"
#include "ui_cadastro.h"
#include<cliente.h>
#include <ldde_quartos.h>
#include <QMessageBox>
#include <tela_inicial.h>

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
    //close();
    QString id= ui->idText->text();
    QString nome= ui->nomeText->text();
    QString cpf= ui->cpfText->text();
    QString tel= ui->telefoneText->text();
    QString checkin= ui->checkinText->text();
    QString quarto= ui->quartoText->text();


    LDDE l;
    for (int i=0;i<10;i++) { //-> aqui vamos ocupar os quartos
        if(l.busca(quarto.toInt())->valor == true){
            QMessageBox::information(this, tr("Erro"),tr("Quarto ocupado"));
        }else {
            l.insere(quarto.toInt());
        }
    }

    cliente* c = new cliente(this,id ,nome,cpf,tel,checkin,quarto);
    c->exec();

    id = "";
    nome = "";
    cpf = "";
    tel = "";
    checkin = "";
    quarto = "";

    Tela_Inicial *t = new Tela_Inicial();
    t->show();

}
