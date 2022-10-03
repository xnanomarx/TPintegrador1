#include <stdio.h>
#include <stdlib.h>
#include "TDAchofer.h"

choferPtr crearChofer(char* nombre, char* apellido, domicilioPtr domicilio, cuilPtr cuil){
    choferPtr chof=(choferPtr)obtenerMemoria(sizeof(chofer));
    chof->nombre=nombre,apellido=apellido,domicilio=domicilio,cuil=cuil;
    return chof;
}

choferPtr destruirChofer(choferPtr chofer){
    free(chofer);
    return NULL;
}

char* getNombreChofer(choferPtr chofer){
    return -> nombre;
}

char getApellidoChofer(choferPtr Chofer){
    return->apellido;
}

int getCuil(choferPtr Chofer){
    return -> cuil;
}

char* getDomicilio(domicilioPtr domicilio);


