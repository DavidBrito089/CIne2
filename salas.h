#ifndef SALAS_H
#define SALAS_H

#include <QMainWindow>

namespace Ui {
class Salas;
}

class Salas : public QMainWindow
{
    Q_OBJECT

public:
    explicit Salas(QWidget *parent = nullptr);
    ~Salas();

private slots:

void on_Butaca_clicked();

private:
    Ui::Salas *ui;
    void estado();
};

#endif // SALAS_H
