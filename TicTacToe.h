//
// Created by soria on 01/06/2022.
//

#ifndef TRESENRAYAV1_TICTACTOE_H
#define TRESENRAYAV1_TICTACTOE_H

#include "Tablero.h"
#include "Jugador.h"
class TicTacToe {

private:
    Jugador jugador1;
    Jugador jugador2;
    Tablero *tablero= nullptr;

public:
    TicTacToe()=delete;
    TicTacToe(const Jugador &j1,const Jugador &j2 );

    int getNumMov();

    Tablero* getTablero();
    void fichaPorJugador(int f, int c, Jugador *j);

    bool finQ();
    virtual ~TicTacToe();
};


#endif //TRESENRAYAV1_TICTACTOE_H
