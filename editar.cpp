#include "editar.h"
#include "ui_editar.h"
#include "minhajanela.h"
#include <iostream>

Editar::Editar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editar)
{
    ui->setupUi(this);
    ui->txtEdPlaca->setMaxLength(8);
    ui->txtEdCor->setMaxLength(12);
    ui->txtEdModelo->setMaxLength(12);
    ui->txtEdMarca->setMaxLength(12);


}

Editar::~Editar()
{
    delete ui;
}

void Editar::on_salvar_clicked()
{
    MinhaJanela objVO;

    if(objVO.validar(this->ui->txtEdPlaca->text(), this->ui->txtEdCor->text(), this->ui->txtEdModelo->text())){
        this->close();
    }
}

QStringList Editar::retornaValores(){

    QStringList listaObjetos;
    listaObjetos.append(this->ui->txtEdPlaca->text());
    listaObjetos.append(this->ui->txtEdCor->text());
    listaObjetos.append(this->ui->txtEdMarca->text());
    listaObjetos.append(this->ui->txtEdModelo->text());

    return listaObjetos;
}
