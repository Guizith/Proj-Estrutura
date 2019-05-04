#ifndef LISTA_H
#define LISTA_H

#include <QDialog>

namespace Ui {
class lista;
}

class lista : public QDialog
{
    Q_OBJECT

public:
    explicit lista(QWidget *parent = nullptr);
    ~lista();

private slots:
    void on_pushButton_clicked();

private:
    Ui::lista *ui;
};

#endif // LISTA_H
