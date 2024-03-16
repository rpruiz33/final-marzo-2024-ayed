#include "lista.h"
#include <stdlib.h>
#include <string.h>
#include "jugador.h"
#include "numeros.h"

struct Jugador{

    char nombre[20];
    int dni;
    Lista carton;
    //anidar con la lista de Numeros

};



JugadorPtr crearJugador(char n[20], int d){

    JugadorPtr j = (JugadorPtr)  malloc(sizeof(struct Jugador));

    strcpy(j->nombre, n);

    j->dni = d;
    j->carton=crearLista(sizeof(j->carton));
    //anidar los 3 cartones
    //iniciar o settear como corresponda.

    return j;

};

void mostrarJugador(JugadorPtr j){

    printf("\n------JUGADOR-----\n");
    printf("\tNOMBRE: %s\n", j->nombre);
    printf("\tDNI: %d\n", j->dni);
    mostrarLista(j->carton);
    //debe mostrar tambien los cartones comprados

};



void destruirJugador(JugadorPtr j){
    free(j);

    };

///Hacer
void agregarCarton(JugadorPtr j, NumerosPtr n){
insertarFinal(j->carton,n);

};

void verificarCartones(JugadorPtr j, NumerosPtr n) {
    Nodo actual = getPrimero(j->carton);
    printf("\n--Verificacion de cartones del jugador %s--\n", j->nombre);
    while (actual != NULL) {
        NumerosPtr carton = (NumerosPtr)getData(actual);
        int aciertos = 0;

        // Comparar los números del cartón con los números sorteados
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                for (int k = 0; k < 3; k++) {
                    for (int l = 0; l < 4; l++) {
                        if (getNumero(carton, i, j) == getNumero(n, k, l)) {
                            aciertos++;
                        }
                    }
                }
            }
        }

        // Verificar si el cartón es ganador
        if (aciertos == 5 && strcmp(getColor(carton), getColor(n)) == 0) {
            printf("El carton de color %s del jugador %s ha ganado (5 numeros y mismo color)\n", getColor(carton), j->nombre);
        } else if (aciertos >= 8) {
            printf("El carton de color %s del jugador %s ha ganado (8 o mas numeros)\n", getColor(carton), j->nombre);
        } else {
            printf("El carton de color %s del jugador %s no ha ganado en este sorteo\n", getColor(carton), j->nombre);
        }

        actual = getProximo(actual);
    }
}
///Getters y setters que correspondan
