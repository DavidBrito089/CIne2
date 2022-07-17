#include "salas.h"
#include "ui_salas.h"

Salas::Salas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Salas)
{
    ui->setupUi(this);
}

Salas::~Salas()
{
    delete ui;
}

void Salas::estado()
{
    int Boletos=ui->Nboletos->value();
    if(Boletos>0 && Boletos<25){
        ui->Butaca->animateClick();
        ui->Butaca->setDefault(false);
    }
}

void Salas::on_Butaca_clicked()
{
    estado();
}

