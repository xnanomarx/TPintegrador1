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

char* getCalleChofer(choferPtr chofer){
    return chofer->domicilio->calle;
}

int getAlturaChofer(choferPtr chofer){
    return chofer->domicilio->numero;
}

char* getLocalidadChofer(choferPtr chofer){
    return chofer->domicilio->localidad;
}

char* getCuilChofer(choferPtr chofer){
    return chofer->cuil->cuilUsuario;
}
void setNombreChofer(choferPtr chofer, char* nombreset){
    chofer->nombreCh=nombreset;
}

void setApellidoChofer(choferPtr chofer, char* apellidoset){
    chofer->apellidoCh=apellidoset;
}

void setLocalidadChofer(choferPtr chofer, char* localidadset){
    chofer->domicilio->localidad=localidadset;
}

void setCalleChofer(choferPtr chofer, char* calleset){
    chofer->domicilio->calle=calleset;
}

void setAlturaChofer(choferPtr chofer, int alturaset){
    chofer->domicilio->numero=alturaset;
}

void setCuilChofer(choferPtr chofer, char* cuilset){
    chofer->cuil->cuilUsuario=cuilset;
}

void mostrarChofer(choferPtr chofer, int numChofer){
    printf("--------Chofer %d--------\n%s, %s\nCUIL/CUIT: %s\n",numChofer,getApellidoChofer(chofer),getNombreChofer(chofer),getCuilChofer(chofer));
    printf("%s %d, %s\n------------------------\n\n",getCalleChofer(chofer),getAlturaChofer(chofer),getLocalidadChofer(chofer));
}

