#ifndef LOGIN_FUNCIONARIO_H
#define LOGIN_FUNCIONARIO_H

#include <QDialog>
#include "tela_inicial.h"



namespace Ui {
class login_funcionario;
}

class login_funcionario : public QDialog
{
    Q_OBJECT

public:
    explicit login_funcionario(QWidget *parent = nullptr);
    ~login_funcionario();

private slots:
    void on_pushButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::login_funcionario *ui;
    Tela_Inicial *tela;
};

#endif // LOGIN_FUNCIONARIO_H
