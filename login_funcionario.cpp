#include "login_funcionario.h"
#include "ui_login_funcionario.h"
#include "tela_inicial.h"
#include <QMessageBox>



login_funcionario::login_funcionario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login_funcionario)
{
    ui->setupUi(this);
}

login_funcionario::~login_funcionario()
{
    delete ui;
}

void login_funcionario::on_pushButton_clicked()
{

}

void login_funcionario::on_loginButton_clicked()
{
    //comparação usuarioText e senhaText com admin

    //p.setModal(true), porem fechar a tela de login
    //p.show();
    QString username = ui->usuarioText->text();
    QString senha = ui->senhaText->text();

    if(username == "matheus" & senha == "1234"){
        tela = new Tela_Inicial(this);
        tela->show();
    }else {
        QMessageBox::information(this, tr("Erro"),tr("Usuario não encontrado"));
}

}
