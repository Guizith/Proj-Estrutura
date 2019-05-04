#ifndef REGISTROS_H
#define REGISTROS_H

#include <QDialog>

namespace Ui {
class registros;
}

class registros : public QDialog
{
    Q_OBJECT

public:
    explicit registros(QWidget *parent = nullptr);
    ~registros();

private slots:
    void on_voltarButton_clicked();

private:
    Ui::registros *ui;
};

#endif // REGISTROS_H
