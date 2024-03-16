#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "numeros.h"
#include "lista.h"
#include <time.h>

struct Numeros{

    char color[20];
    int sorteo[3][4];

};


NumerosPtr crearNumeros(char c[20], int s[3][4]){

    NumerosPtr n = malloc(sizeof(struct Numeros));

    strcpy(n->color, c);


    //Cargo los numeros que vinieron por parametro
    for (int i = 0 ; i<3; i++){

        for (int j=0; j<4; j++){

            n->sorteo[i][j] = s[i][j];

        }
    }

    return n;

};


NumerosPtr crearNumerosAleatorios(){
    int m[3][4];

     NumerosPtr n = malloc(sizeof(struct Numeros));
     int color=rand()%2;
     if (color==0){
        strcpy(n->color,"rojo");
     }
     else{
        strcpy(n->color,"blanco");
     }
        for (int i = 0 ; i<3; i++){

        for (int j=0; j<4; j++){
     int repe=0;
            int alea;
            while (repe != 0); {

                alea = rand() % 101;
                repe = repetido(m, alea);
            m[i][j] = alea;
    }
     //Completar

}
  for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            n->sorteo[i][j] = m[i][j];
        }
    }


    }
return n;
}
int repetido(int a[3][4] , int b){
int repe=0;
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            if(a[i][j]==b){
                repe=1;
            }
        }
    }
return repe;
}

void mostrarNumeros(NumerosPtr n){

    printf("\n------NUMEROS--COLOR: %s-----\n",n->color);
    for (int i = 0 ; i<3; i++){

        for (int j=0; j<4; j++){

            printf(" %d ", n->sorteo[i][j]);

        }

        printf("\n");

    }

};
int mostrarLista(Lista l) {
    if (l == NULL || getPrimero(l) == NULL) {
        printf("La lista está vacía.\n");
        return 0;
    }

    Nodo aux = getPrimero(l);


    while (aux != NULL) {
        mostrarNumeros(getData(aux));

        aux = getProximo(aux);
    }



    return 1;
}
void eliminarNumeros(NumerosPtr n){

    free(n);


    };

///Getters y setters que correspondan
int getNumero(NumerosPtr numeros, int fila, int columna) {
    return numeros->sorteo[fila][columna];
}
char *getColor(NumerosPtr numeros) {
    return numeros->color;
}
