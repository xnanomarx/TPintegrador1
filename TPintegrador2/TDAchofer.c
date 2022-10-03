#include <stdio.h>
#include <stdlib.h>
#include "TDAchofer.h"
#include "TDAdomicilio.h"
#include "TDAcuil.h"

choferPtr crearChofer(char* nombre, char* apellido, domicilioPtr domicilio, cuilPtr cuil){
    choferPtr chof=(choferPtr)obtenerMemoria(sizeof(chofer));
    chof->nombre=nombre,apellido=apellido,domicilio=domicilio,cuil=cuil;
    chofer->nombre=nombre;
    chofer->apellido=apellido;
    chofer->domicilio=domicilio;
    chofer->cuil=cuil;

    return chof;
}

choferPtr destruirChofer(choferPtr chofer){
    free(chofer->nombre);
    free(chofer->apellido);
    free(chofer->domicilio);
    free(chofer->cuil);

    free(chofer);
    return NULL;
}

char* getNombreChofer(choferPtr chofer){
    return chofer->nombre;
}

char* getApellidoChofer(choferPtr chofer){
    return chofer->apellido;
}

int getCuil(choferPtr chofer){
    return chofer->cuil;
}

char* getDomicilioChofer(choferPtr chofer){
    return chofer->domicilio;
}


