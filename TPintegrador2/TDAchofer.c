#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDAchofer.h"
#include "TDAdomicilio.h"
#include "TDAcuil.h"
#include "util.h"

choferPtr crearChofer(char* nombre, char* apellido, domicilioPtr domicilio, cuilPtr cuil){
    choferPtr chof=(choferPtr)obtenerMemoria(sizeof(chof));
    char* nomCh=(char*)obtenerMemoria(sizeof(char)*(strlen(nombre)+1));
    char* apeCh=(char*)obtenerMemoria(sizeof(char)*(strlen(apellido)+1));
    strcpy(nomCh,nombre);
    strcpy(apeCh,apellido);
    chof->apellidoCh=apeCh;
    chof->nombreCh=nomCh;
    chof->domicilio=domicilio;
    chof->cuil=cuil;

    return chof;
}

choferPtr destruirChofer(choferPtr chofer){
    free(chofer->nombreCh);
    free(chofer->apellidoCh);
    free(chofer->domicilio);
    free(chofer->cuil);

    free(chofer);
    return NULL;
}

char* getNombreChofer(choferPtr chofer){
    return chofer->nombreCh;
}

char* getApellidoChofer(choferPtr chofer){
    return chofer->apellidoCh;
}


char* getDomicilioChofer(choferPtr chofer){
    return chofer->domicilio;
}
void setNombreChofer(choferPtr chofer, char* nombre){
    chofer->nombreCh=nombre;
}

void setApellidoChofer(choferPtr chofer, char* apellido){
    chofer->apellidoCh=apellido;
}


void mostrarChofer(choferPtr chofer){
    printf("------Chofer------\n %s, %s\n CUIL/CUIT: %s\n",chofer->apellidoCh,chofer->nombreCh,chofer->cuil->cuilUsuario);
    printf("%s %s, %s\n------------------",chofer->domicilio->calle,chofer->domicilio->numero,chofer->domicilio->localidad);
}

