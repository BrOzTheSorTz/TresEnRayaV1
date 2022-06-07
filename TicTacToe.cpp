//
// Created by soria on 01/06/2022.
//

#include "TicTacToe.h"

TicTacToe::TicTacToe(const Jugador &j1, const Jugador &j2): jugador1(j1), jugador2(j2) {
    tablero=new Tablero();

}

TicTacToe::~TicTacToe() {
    delete tablero;

}

bool TicTacToe::finQ() {

    bool ganarFilas=false;
    bool ganarColumnas =false;
    bool ganarDiagonales =false;
    bool fin =false;

    //FIXME --> Crear forma de poder hacer lo siguiente más rápido y para tantos
    //casos como hayan, dependiendo del tamaño del tablero


    //Comprobamos si se ha ganado en diagonales
    if((tablero->obtenerFicha(1,1) == jugador1.getFicha() &&
            tablero->obtenerFicha(2,2) == jugador1.getFicha() &&
            tablero->obtenerFicha(3,3) == jugador1.getFicha())){
        std::cout<<"Gana Jugador uno";
        ganarDiagonales =true;
    }
    if(tablero->obtenerFicha(1,1) == jugador2.getFicha() &&
       tablero->obtenerFicha(2,2) == jugador2.getFicha() &&
       tablero->obtenerFicha(3,3) == jugador2.getFicha()){
        std::cout<<"Gana Jugador dos";
        ganarDiagonales= true;
    }

    //Comprobamos si ha ganado en filas;
    for(int i=0;i<3;++i){
            if(tablero->obtenerFicha(i+1,1) == jugador1.getFicha() &&
               tablero->obtenerFicha(i+1,2) == jugador1.getFicha() &&
               tablero->obtenerFicha(i+1,3) == jugador1.getFicha()){
                std::cout<<"Gana Jugador uno";
                ganarFilas =true;
            }
        if(tablero->obtenerFicha(i+1,1) == jugador2.getFicha() &&
           tablero->obtenerFicha(i+1,2) == jugador2.getFicha() &&
           tablero->obtenerFicha(i+1,3) == jugador2.getFicha()){
            std::cout<<"Gana Jugador dos";
            ganarFilas =true;
        }

    }
    //Comprobamos si ha ganado en columnas
    for(int i=0;i<3;++i){
        if(tablero->obtenerFicha(1,i+1) == jugador1.getFicha() &&
           tablero->obtenerFicha(2,i+1) == jugador1.getFicha() &&
           tablero->obtenerFicha(3,i+1) == jugador1.getFicha()){
            std::cout<<"Gana Jugador uno";
            ganarColumnas =true;
        }
        if(tablero->obtenerFicha(1,i+1) == jugador2.getFicha() &&
           tablero->obtenerFicha(2,i+1) == jugador2.getFicha() &&
           tablero->obtenerFicha(3,i+1) == jugador2.getFicha()){
            std::cout<<"Gana Jugador dos";
            ganarColumnas =true;
        }
    }
    if(ganarColumnas || ganarFilas || ganarDiagonales){
        return true;
    }else if(tablero->getNumMov()==9){
        std::cout<<"Ha habido un empate !!"<<std::endl;
        return true; //Si acaba y no hay ganadores
    }else{
        return false;
    }




}

int TicTacToe::getNumMov() {
    return tablero->getNumMov();
}

Tablero *TicTacToe::getTablero() {
    return tablero;
}

void TicTacToe::fichaPorJugador(int f, int c, Jugador *j) {
    char ficha;


    ficha= tablero->obtenerFicha(f,c);

    if(ficha != '-'){
        throw std::invalid_argument("[TicTacToe::fichaPorJugador]Ya hay una ficha hay");

    }
    tablero->ponerFicha(f,c,j->getFicha());

    tablero->aumentarNumMov();

}
