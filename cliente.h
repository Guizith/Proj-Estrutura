#ifndef CLIENTE_H
#define CLIENTE_H

#include <QDialog>

namespace Ui {
class cliente;
}

class cliente : public QDialog
{
    Q_OBJECT

public:
    explicit cliente(QWidget *parent = nullptr, QString nome =0,QString cpf= 0,QString tel= 0,QString checkin= 0,QString quarto= 0);
    ~cliente();

private slots:
    void on_voltarButton_clicked();

private:
    Ui::cliente *ui;
};

#endif // CLIENTE_H
