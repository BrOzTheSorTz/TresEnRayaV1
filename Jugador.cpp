//
// Created by soria on 27/05/2022.
//

#include "Jugador.h"



Jugador::Jugador(std::string _nombre):nombre(_nombre),turno(false),ficha('-'){



}

Jugador::~Jugador() {


}

Jugador::Jugador(const Jugador &orig):nombre(orig.nombre),turno(orig.turno),ficha(orig.ficha) {




}

bool Jugador::isTurno() const {
    return turno;
}

void Jugador::setTurno(bool turno) {
    Jugador::turno = turno;
}

char Jugador::getFicha() {
    return ficha;
}

void Jugador::setFicha(char ficha) {
    this->ficha = ficha;

}
