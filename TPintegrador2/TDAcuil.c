#include <stdio.h>
#include <stdlib.h>
#include "TDAcuil.h"
#include "util.h"

cuilPtr crearCuil(char* cuil){
    cuilPtr cu=(cuilPtr)obtenerMemoria(sizeof(cuil));{
        cu->cuil=cuil;
        }
    return cu;
}

bool validarCuil(char* cuil, char genero){
}

void mostrarCuil(cuilPtr cuil){
    printf("El cuil del usuario es %s\n", cuil);
}

char* getCuil(cuilPtr cuil){
    return cuil;
}



