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
    bool t = 0;

    for(int i = 0;i<l->n;i++){
        if(username.toStdString() == l->user[i] && senha.toStdString() == l->password[i]){
            this->close();
            tela = new Tela_Inicial(this);
            tela->show();
            //break n funcionou, entao foi utilizado uma variavel bool para validar a criação da tela e não fazer o chamado da mensagem de erro
            t=1;
        }
    }
    if(t!=1){
       QMessageBox::information(this, tr("Erro"),tr("Usuario não encontrado"));
    }
}

void login_funcionario::on_cadastrarButton_clicked()
{

    QString username = ui->usuarioText->text();
    QString senha = ui->senhaText->text();


    //Verificação de preenchimento dos campos para cadastro
    if(username == "" && senha == "" ){
        QMessageBox::information(this, tr("Erro"),tr("Os campos não foram preenchidos corretamente"));
    }else {

        std::cout<<"usuario== " + username.toStdString() <<endl;
        std::cout<<"senha== " + senha.toStdString() <<endl;

        l->inserePassword(senha.toStdString());
        l->insereUser(username.toStdString());
    }

}
