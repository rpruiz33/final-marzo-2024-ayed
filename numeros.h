#ifndef NUMEROS_H_INCLUDED
#define NUMEROS_H_INCLUDED
#include "lista.h"
struct Numeros;

typedef struct Numeros * NumerosPtr;


NumerosPtr crearNumeros(char c[20], int s[3][4]);


NumerosPtr crearNumerosAleatorios();

void mostrarNumeros(NumerosPtr n);

void eliminarNumeros(NumerosPtr n);
int mostrarLista(Lista l);
int repetido(int a[3][4] , int b);
#endif // NUMEROS_H_INCLUDED
