//
// Created by soria on 27/05/2022.
//

#ifndef TRESENRAYAV1_JUGADOR_H
#define TRESENRAYAV1_JUGADOR_H


#include <string>
#include <iostream>

class Jugador {
private:

    char ficha = '-';
    std::string nombre="";
    bool turno =false;

public:
    Jugador(std::string _nombre);
    Jugador(const Jugador &orig);

    //Nos devuelve la ficha del jugador
    void setFicha(char ficha);
    char getFicha();
    bool isTurno() const;
    void setTurno(bool turno);

    virtual ~Jugador();


};


#endif //TRESENRAYAV1_JUGADOR_H
