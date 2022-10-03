#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
#include "TDAdimension.h"
#include "util.h"

dimensionPtr crearDimension(int altura, int ancho, int largo, int peso){
    dimensionPtr dimen=(dimensionPtr)obtenerMemoria(sizeof(dimension));
    dimen->altura=altura, ancho=ancho, largo=largo, peso=peso;
    return dimen;
    }

dimensionPtr destruirDimension(dimensionPtr dimension){
    free(dimension);
    return NULL;
    }

int getAltura (dimensionPtr dimension){
    return dimension -> altura;
}

int getAncho (dimensionPtr dimension){
    return dimension -> ancho;
}

int getLargo (dimensionPtr dimension){
    return dimension -> largo;
}

int getPeso (dimensionPtr dimension){
    return dimension -> peso;
}
<<<<<<< HEAD
=======
>>>>>>> origin/branchMariano
=======
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
