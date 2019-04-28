#ifndef TELA_INICIAL_H
#define TELA_INICIAL_H

#include <QMainWindow>

namespace Ui {
class Tela_Inicial;
}

class Tela_Inicial : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tela_Inicial(QWidget *parent = nullptr);
    ~Tela_Inicial();

private:
    Ui::Tela_Inicial *ui;
};

#endif // TELA_INICIAL_H
