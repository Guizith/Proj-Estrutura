#ifndef TELA_INICIAL_H
#define TELA_INICIAL_H

#include <QMainWindow>
#include<buscar_cliente.h>
#include<cadastro.h>
#include<cliente.h>
#include<checkout.h>

namespace Ui {
class Tela_Inicial;
}

class Tela_Inicial : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tela_Inicial(QWidget *parent = nullptr);
    ~Tela_Inicial();

private slots:
    void on_Btn_LimpaDados_clicked();
    
    void on_novaReservaButton_clicked();

    void on_CheckoutButton_clicked();

    void on_BuscarButton_clicked();

    void on_actionSair_triggered();

    void on_ListaButton_clicked();

private:
    Ui::Tela_Inicial *ui;
};

#endif // TELA_INICIAL_H
