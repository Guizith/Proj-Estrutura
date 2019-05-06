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
    explicit cliente(QWidget *parent = nullptr);
    ~cliente();

private:
    Ui::cliente *ui;
};

#endif // CLIENTE_H
