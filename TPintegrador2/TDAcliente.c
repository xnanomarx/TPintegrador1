#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDAcliente.h"
#include "util.h"
#include "TDAcuil.h"
#include "TDAdomicilio.h"

clientePtr crearCliente (char* nombre,char* apellido,domicilioPtr domicilio,cuilPtr cuil){
    clientePtr cliente1=(clientePtr)obtenerMemoria(sizeof(cliente));
    char* nom=(char*)obtenerMemoria(sizeof(char)*(strlen(nombre)+1));
    char* ape=(char*)obtenerMemoria(sizeof(char)*(strlen(apellido)+1));
    strcpy(nom,nombre);
    strcpy(ape,apellido);
    cliente1->apellido=ape;
    cliente1->nombre=nom;
    cliente1->domicilio=domicilio;
    cliente1->cuil=cuil;

    return cliente1;
}

clientePtr destruirCliente(clientePtr cliente){
    free(cliente->nombre);
    free(cliente->apellido);
    free(cliente->domicilio);
    free(cliente->cuil);

    free(cliente);
    return NULL;
}

void mostrarCliente(clientePtr cliente,int numCliente){
    printf("--------Cliente %d--------\n%s, %s\nCUIL/CUIT: %s\n",numCliente,cliente->apellido,cliente->nombre,cliente->cuil->cuilUsuario);
    printf("%s %d, %s\n------------------------\n\n",cliente->domicilio->calle,cliente->domicilio->numero,cliente->domicilio->localidad);
}

void setNombreCliente(clientePtr cliente, char* nombre){
    strcpy(cliente->nombre,nombre);
}
void setApellidoCliente(clientePtr cliente, char* apellido){
    strcpy(cliente->apellido,apellido);
}

void setLocalidadCliente(clientePtr cliente, char* localidadc){
    cliente->domicilio->localidad=localidadc;
}


void setCalleCliente(clientePtr cliente, char* callec){
    cliente->domicilio->calle=callec;
}


void setAlturaCliente(clientePtr cliente, char* altura){
    cliente->domicilio->numero=altura;
}

void setCuilCliente(clientePtr cliente,char* cuilc){
    cliente->cuil->cuilUsuario=cuilc;
}

char* getNombreCliente(clientePtr cliente){
    return cliente->nombre;
}

char* getApellidoCliente(clientePtr cliente){
    return cliente->apellido;
}
domicilioPtr getDomicilio(clientePtr cliente){
    return cliente->domicilio;
}
