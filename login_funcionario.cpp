#include "login_funcionario.h"
#include "ui_login_funcionario.h"
#include "tela_inicial.h"
#include <QMessageBox>
#include<les_users.h>


LES* l = new LES();
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
    QString username = ui->usuarioText->text();
    QString senha = ui->senhaText->text();

    for(int i = 0;i<l->n;i++){

        //algum erro na comparação, usuario admin 1234 esta funcionando,porem os cadastrados só funcionam depois de 2 ou mais cadastros
        if(username.toStdString() == l->user[i] & senha.toStdString() == l->password[i]){
            this->close();
            tela = new Tela_Inicial(this);
            tela->show();

        }else {
            QMessageBox::information(this, tr("Erro"),tr("Usuario não encontrado"));
    }
}

}

void login_funcionario::on_cadastrarButton_clicked()
{

    QString username = ui->usuarioText->text();
    QString senha = ui->senhaText->text();

    l->insereUser(username.toStdString());
    l->inserePassword(senha.toStdString());
}
