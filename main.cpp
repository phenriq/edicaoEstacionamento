#include "minhajanela.h" //Importando minha biblioteca de nome minhajanela.h
#include <QApplication> // importando a biblioteca padrao do framework QT
#include "telalogin.h"

//Definindo a main = metodo principal da aplicação
int main(int argc, char *argv[])
{

    //Criando um objeto por nome de , do tipo da aplicação
    QApplication a(argc, argv);
    //MinhaJanela w; //Criando objeto por nome de w, do tipo da minha janela

    TelaLogin t;
    /*ABAIXO
    acessando o metodo show, atravez do objeto w, obs: metodo show esta contido na biblioteca mainWindow, que foi implementada e importada no MinhaJanela.h
    */

    t.show();//carrega tela de login depois da de gerenciamento




    /*
    retornando o status da aplicação, true of false, que esta no objeto
    de controle da aplicação, objeto este por nome de a, declarado a cima
    */
    return a.exec();
}
