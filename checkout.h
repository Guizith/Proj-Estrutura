#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QDialog>

namespace Ui {
class checkout;
}

class checkout : public QDialog
{
    Q_OBJECT

public:
    explicit checkout(QWidget *parent = nullptr,QString id=0, QString nome =0,QString cpf= 0,QString tel= 0,QString checkin= 0,QString quarto= 0);
    ~checkout();

private slots:
    void on_pushButton_clicked();

private:
    Ui::checkout *ui;
};

#endif // CHECKOUT_H
