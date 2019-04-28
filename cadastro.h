#ifndef CADASTRO_H
#define CADASTRO_H

#include <QDialog>

namespace Ui {
class cadastro;
}

class cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit cadastro(QWidget *parent = nullptr);
    ~cadastro();

private slots:
    void on_SalvarButton_clicked();

private:
    Ui::cadastro *ui;
};

#endif // CADASTRO_H
