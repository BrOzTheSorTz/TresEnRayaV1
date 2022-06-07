//
// Created by soria on 27/05/2022.
//

#ifndef TRESENRAYAV1_TABLERO_H
#define TRESENRAYAV1_TABLERO_H


#include "Jugador.h"


class Tablero {
private:


    char tabla[3][3];
    int numMov=0;///<Cuando llegue a 9 hemos terminado
                ///<O antes si gana el jugador

public:

    Tablero();
    Tablero(const Tablero &orig);

    int getNumMov() const;

    char obtenerFicha(int f,int c);
    void ponerFicha(int f, int c, char ficha);

    void aumentarNumMov();
    //Para contabilizar los movimientos
    virtual ~Tablero();


};


#endif //TRESENRAYAV1_TABLERO_H
