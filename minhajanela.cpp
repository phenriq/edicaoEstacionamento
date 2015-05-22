#include "minhajanela.h" //Inclui a minha biblioteca de nome minhaJanela.h
#include "ui_minhajanela.h" //Inlcui a biblioteca que esta dentro da namespace ui por nome de minhaJanela
#include <iostream>
#include <QTreeWidget>
#include <QMessageBox>
#include "about.h"
#include "editar.h"


using namespace std;

/*ABAIXO
Definindo a função MinhaJanela da classe MinhaJanela, que foi declarada no MinhaJanela.h,
recebendo como paramentro um ponteiro  do tipo QWidget,
implementando a clsse que QMainWindow contida na biblioteca <QMainWindow>,
que foi incluida no arquivo MinhaJanela.h, chamando o ui, passando como parametro
o proprio objeto do tipo MinhaJanela
*/
MinhaJanela::MinhaJanela(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MinhaJanela)
{
    //setando a ui (user interface), como this = do proprio tipo da classe deste metodo
    ui->setupUi(this);
    ui->txtPlaca->setMaxLength(8);
    ui->txtCor->setMaxLength(12);
    ui->txtModelo->setMaxLength(12);
    ui->txtMarca->setMaxLength(12);

}

//Caso de conflito
MinhaJanela::~MinhaJanela()
{
    delete ui; //Limpando objetos do tipo ui
}

/*
Função que pega o evento de clicar no
sair na barra de menu principal da aplicação
*/
void MinhaJanela::on_actionSair_triggered()
{
    exit(1);
}
/*
Função responsavel por pegar o evento de click no botão de adicionar
*/

void MinhaJanela::on_btnAdicionar_clicked()
{

    if(this->validar(ui->txtPlaca->text(), ui->txtCor->text(), ui->txtModelo->text())){
        QTreeWidgetItem *item = new QTreeWidgetItem(ui->twListagem);

        item->setText(0,ui->txtPlaca->text());
        item->setText(1,ui->txtCor->text());
        item->setText(2,ui->txtMarca->text());
        item->setText(3,ui->txtModelo->text());


        ui->twListagem->addTopLevelItem(item);

        ui->txtPlaca->setText("");
        ui->txtModelo->setText("");
        ui->txtMarca->setText("");
        ui->txtCor->setText("");
    }
}

/*
Função responsavel por validar os campos que são passados por parametro
*/
bool MinhaJanela::validar(QString placa, QString cor, QString modelo){

    if(placa.isNull() || placa.isEmpty() || placa.length() < 8){
        QMessageBox::critical(NULL,"Error!","O Campo Placa é obrigatório \nMínimo 8 caracteres");
        ui->txtPlaca->setFocus();
        return 0;
    }
    if(cor.isNull() || cor.isEmpty() || cor.length() < 4){
        QMessageBox::critical(NULL,"Error!","O Campo Cor é obrigatório \nMínimo 4 caracteres");
        ui->txtCor->setFocus();
        return 0;
    }
    if(modelo.isNull() || modelo.isEmpty() || modelo.length() < 3){
        QMessageBox::critical(NULL,"Error!","O Campo Modelo é obrigatório \nMínimo 3 caracteres");
        ui->txtModelo->setFocus();
        return 0;
    }
    return 1;

}

void MinhaJanela::on_actionSobre_triggered()
{
    About sobre;
    sobre.setModal(true);
    sobre.exec();
}

void MinhaJanela::on_btnEditar_clicked()
{
    Editar edit;

    edit.setModal(true);
    edit.exec();
    QStringList lista = edit.retornaValores();
    QTreeWidgetItem *item = ui->twListagem->currentItem();

    item->setText(0,lista[0]);
    item->setText(1,lista[1]);
    item->setText(2,lista[2]);
    item->setText(3,lista[3]);

}

void MinhaJanela::on_btnRemover_clicked()
{
    QTreeWidgetItem *item = ui->twListagem->currentItem();
    delete item;
}
