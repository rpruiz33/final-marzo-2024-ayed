#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include "numeros.h"

struct Jugador;

typedef struct Jugador * JugadorPtr;


JugadorPtr crearJugador(char n[20], int d);

void mostrarJugador(JugadorPtr j);

void destruirJugador(JugadorPtr j);

void agregarCarton(JugadorPtr j, NumerosPtr n);

void verificarCartones(JugadorPtr j, NumerosPtr n);

#endif // JUGADOR_H_INCLUDED
