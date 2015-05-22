#include "telalogin.h"
#include "ui_telalogin.h"
#include <QMessageBox>
#include "minhajanela.h"
#include <QApplication>

TelaLogin::TelaLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaLogin)
{
    ui->setupUi(this);
}

TelaLogin::~TelaLogin()
{
    delete ui;
}

void TelaLogin::on_btnLogin_clicked()
{

    if(ui->txtLogin->text() != "paulo" || ui->txtSenha->text() != "1234"){
        QMessageBox::critical(NULL,"Error","Login ou senha inválidos");
        ui->txtLogin->setText("");
        ui->txtSenha->setText("");
    }else{
        this->close();
        MinhaJanela *win = new MinhaJanela;
        win->show();
    }
}
