#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDAdimension.h"
#include "util.h"

dimensionPtr crearDimension(int altura, int ancho, int largo, int peso){
    dimensionPtr dimen=(dimensionPtr)obtenerMemoria(sizeof(dimension));
    dimen->altura=altura, ancho=ancho, largo=largo, peso=peso;
    return dimen;
}

dimensionPtr destruirDimension(dimensionPtr dimension){
    free(dimension->altura);
    free(dimension->ancho);
    free(dimension->ancho);
    free(dimension->peso);

    free(dimension);
    return NULL;
}

int getAltura (dimensionPtr dimension){
    return dimension->altura;
}

int getAncho (dimensionPtr dimension){
    return dimension->ancho;
}

int getLargo (dimensionPtr dimension){
    return dimension->largo;
}

int getPeso (dimensionPtr dimension){
    return dimension->peso;
}

void setAltura(dimensionPtr dimension, int altura){
    dimension->altura=altura;
}

void setAncho(dimensionPtr dimension, int ancho){
    dimension->ancho=ancho;
}

void setLargo(dimensionPtr dimension, int largo){
    dimension->largo=largo;
}

void setPeso(dimensionPtr dimension, int peso){
    dimension->peso=peso;
}
