#ifndef BUSCAR_CLIENTE_H
#define BUSCAR_CLIENTE_H

#include <QDialog>
#include<cliente.h>

namespace Ui {
class Buscar_cliente;
}

class Buscar_cliente : public QDialog
{
    Q_OBJECT

public:
    explicit Buscar_cliente(QWidget *parent = nullptr);
    ~Buscar_cliente();

private slots:
    void on_SalvarButton_clicked();

private:
    Ui::Buscar_cliente *ui;
};

#endif // BUSCAR_CLIENTE_H
