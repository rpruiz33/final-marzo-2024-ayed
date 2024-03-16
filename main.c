#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jugador.h"
#include "numeros.h"

///Para aprobar es necesario tener los 3 primeros puntos bien realizados (regulares).
///Los libres ademas tienen que tener el punto 6 totalmente correcto.

///Puntos 4 y 5 son opcionales, son para sumar puntos la aprobación la define los 3 primeros puntos y el 6

///El examen tiene una duracion de 90min ni bien inicia.
/// Se debe entregrar comprimido en rar  o zip a:
///nico_perez_velez@hotmail.com y a nperez_dcao_smn@outlook.com

///O pueden mandar el link a drive, onedrive o weTransfer, pero a ambos mails.



///El programa está pre armado, bajo el paradigma de TDA, tienen que agregar o modificar lo que falta, LEAN
///y COMPRENDAN bien lo que se pide y verán que es muy poco lo que deben codificar.
///No empiecen a programar sin antes entender bien lo que se pide.



//Terminar el siguiente programa que es para verificar las apuestas de un jugador en un sorteo.
//El jugador puede tener tantos cartones como desee.
//Cada carton tiene 12 numeros menores a 100
//Ademas los cartones pueden ser blanco o rojos.
//Un carton gana si tiene 5 numeros correctos y el mismo color. O cuando tiene 8 aciertos sin importar el color.

///No se puede modificar el main, deberan terminar y/o agregar las funciones o procedimientos

///1)Anidar correctamente el jugador con los cartones(NumerosPtr), para eso USAR LISTAD VOID, las listas que ya están en el proyecto.
/// Inicialmente el jugador tiene 2 cartones
///comprados que hay que agregar.

///2) Mostrar la informacion del jugador y sus  cartones comprados

///3) Se realizo un sorteo, verificar si alguno de los  cartones del jugador salio ganador.

///----------- Hasta acá para aprobar, regulares -----------

///4) Crear y agregar (al principio de la lista) un 3er carton, pero de forma aleatoria se generan sus numeros

///5) Volver a verificar los cartones

///6) Insertar los siguientes numeros en un arbol AVL y realizar las rotaciones que correspondan 15,1,2,3,18,4,6,7,22
//Entregarlo en hoja o pizarra digital con su link.

int main()
{
    printf("EXAMEN DEL: xxxxxxxxxx - DNI: xxxxxxxxx\n");
    srand(time(0));
    ///Creo al jugador sin cartones
    JugadorPtr j = crearJugador("Jorge G.", 11111);

    ///Creo los dos cartones, comprados
    int matriz1[3][4] = {{1,22,3,99},{2,56,89,65},{31,57,81,6}};//Numeros del primer carton
    NumerosPtr numeros1 = crearNumeros("Blanco", matriz1); //el primer carton es blanco

    int matriz2[3][4] = {{21,42,43,49},{24,76,79,75},{31,37,91,36}};//Numeros del segundocarton
    NumerosPtr numeros2 = crearNumeros("Rojo", matriz2); //el segundo carton es rojo

    ///Punto 1: Anidar correctamente el jugador con los cartones (Numeros).
    agregarCarton(j, numeros1); //Agrega el primer carton al jugador J - en su lista
    agregarCarton(j,numeros2); //Agrega el 2do carton al jugador J - en su lista


    ///Punto 2: Mostrar el jugador con sus cartones
    mostrarJugador(j); ///Debe mostrar los datos del jugador y sus cartones comprados

    ///Punto 3: Verificar si hay premio
    int matrizSorteo[3][4] = {{21,42,43,11},{24,6,79,75},{31,85,91,36}};
    NumerosPtr sortear = crearNumeros("Blanco", matrizSorteo);

    verificarCartones(j, sortear);///Verifica si los cartones ganaron algo en este sorteo.
    ///Muestra por pantalla el resultado

    /// Hasta aca para aprobar regulares y libres (libres ademas el punto teorico)


    ///Punto 4: Crear un carton extra, con numeros aleatorios sin repetir
    NumerosPtr numeros3 = crearNumerosAleatorios(); ///12 numeros sin repetir, y color aleatorio Blanco o Rojo.
    agregarCarton(j, numeros3);
mostrarJugador(j);
    ///Punto 5: Verificar una vez mÃ¡s los premios pero ahora con los 3 cartones
    verificarCartones(j, sortear);

    ///Punto 6) Insertar los siguientes numeros en un arbol AVL y realizar las rotaciones que correspondan 15,1,2,3,18,4,6,7,22
    //Entregarlo en hoja o pizarra digital con su link.


    return 0;
}
