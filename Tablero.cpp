//
// Created by soria on 27/05/2022.
//

#include <stdexcept>
#include "Tablero.h"

Tablero::~Tablero() {

}

Tablero::Tablero() {
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            tabla[i][j]='-';
        }
    }

}

Tablero::Tablero(const Tablero &orig) {
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            tabla[i][j]=orig.tabla[i][j];
        }
    }

}


char Tablero::obtenerFicha(int f, int c) {
    if((f<1 || f>3)||(c<1 || c>3)){
        throw std::out_of_range("[Tablero::obtenerFicha]Se ha salido del tablero");

    }

    return tabla[f-1][c-1];
}

int Tablero::getNumMov() const {
    return numMov;
}


void Tablero::ponerFicha(int f, int c, char ficha) {
    if((f<1 || f>3)||(c<1 || c>3)){
        throw std::out_of_range("[Tablero::ponerFicha]Se ha salido del tablero");

    }
    tabla[f-1][c-1]=ficha;


}

void Tablero::aumentarNumMov() {
    numMov=numMov+1;

}
