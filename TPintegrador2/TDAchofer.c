#include <stdio.h>
#include <stdlib.h>
#include "TDAchofer.h"
#include "util.h"
#include "TDAcuil.h"

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
    return chofer -> nombre;
}

char* getApellidoChofer(choferPtr chofer){
    return chofer -> apellido;
}


char* getDomicilio(domicilioPtr domicilio);


