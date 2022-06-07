#include <iostream>
#include "TicTacToe.h"

int main() {
    Jugador j1 ={"Lorena"};
    Jugador j2 ={"Paco"};

    char f1 ='X';
    char f2='O';

    j1.setFicha(f1);
    j2.setFicha(f2);

    TicTacToe partida = {j1,j2};



    //Suponemos que empieza el jugador 1
    j1.setTurno(true);

    do{

            if (j1.isTurno() == true) {
                int fila;
                int columna;

                std::cout << "TURNO JUGADOR 1: " << std::endl;
                std::cout << "===================" << std::endl;
                try {
                    std::cout << "Introduzca la fila donde quiere poner la ficha: ";
                    std::cin >> fila;
                    std::cout << "Introduzca la columna donde quieres poner la ficha: ";
                    std::cin >> columna;

                    partida.fichaPorJugador(fila, columna, &j1);

                    //Pongo esto aquí para que si se lanza una excepcion
                    //la capture y permita volver a preguntar al mismo jugador
                    //una jugada hasta que sea correcto
                    j1.setTurno(false);
                    j2.setTurno(true);
                } catch (std::out_of_range &e) {
                    std::cout << e.what() << std::endl;

                } catch (std::invalid_argument &e) {
                    std::cout << e.what() << std::endl;
                }


            } else {//Si no , el turno es del jugador 2
                int fila;
                int columna;

                std::cout << "TURNO JUGADOR 2: " << std::endl;
                std::cout << "===================" << std::endl;

               try {
                    std::cout << "Introduzca la fila donde quiere poner la ficha: ";
                    std::cin >> fila;
                    std::cout << "Introduzca la columna donde quieres poner la ficha: ";
                    std::cin >> columna;

                    partida.fichaPorJugador(fila, columna, &j2);

                    j1.setTurno(true);
                    j2.setTurno(false);
                } catch (std::out_of_range &e) {
                    std::cout << e.what() << std::endl;

                } catch (std::invalid_argument &e) {
                    std::cout << e.what() << std::endl;
                }

            }


    }while(!(partida.finQ()) );




    return 0;
}

