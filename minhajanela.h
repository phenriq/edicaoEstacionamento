#ifndef MINHAJANELA_H//if verificando se ja não existe uma constante com este nome
#define MINHAJANELA_H//definindo a constande minhaJanela

#include <QMainWindow> //Inclui a biblioteca de desenhar janela do framework qt


/*
namespace: Variavel de atribuição a uma classe
*/
namespace Ui {//declarando uma nameSpace atribuida a class minhaJanela
class MinhaJanela;
}

/*ABAIXO
Declarando e definindo a classe MinhaJanela, implementando os metodos da classe Qmainwindows, que é nativa do objeto resultante da biblioteca inclida a cina <QMainWindow>
*/

class MinhaJanela : public QMainWindow
{
    Q_OBJECT //Habilitando a utilização da classe como objeto

public://Declarando os metodos e atributos a baixo como publico

    /*ABAIXO
    Declarando um metodos [o fato dele ter (),parenteses faz dele um metodo]
    metodo esse do tipo construtor [ o fato do metodo ser o mesmo da classe onde esta,
    faz dele o seu construtor]
    passando para este metodo um ponteiro de nome parent, iniciando com valor 0,
    tal ponteiro e do tipo QWidget, que é um tipo de desenho de janela
    */
    explicit MinhaJanela(QWidget *parent = 0);
    ~MinhaJanela(); //sobrepor objetos do mesmo tipo ja esxistente
    bool validar(QString placa, QString cor, QString modelo);

private slots:
    void on_actionSair_triggered();

    void on_btnAdicionar_clicked();

    void on_actionSobre_triggered();

    void on_btnEditar_clicked();

    void on_btnRemover_clicked();

private://declarando os metodos e atributos abaixo como privado
    Ui::MinhaJanela *ui;//Declarando um ponteiro do tipo MinhaJanela
};

#endif // MINHAJANELA_H
//fechando o if da primeira linha
