#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDAcliente.h"
#include "util.h"
#include "TDAcuil.h"
#include "TDAdomicilio.h"

clientePtr crearCliente (char* nombre,char* apellido,domicilioPtr domicilio,cuilPtr cuil){
    clientePtr cliente=(clientePtr)obtenerMemoria(sizeof(cliente));
    char* nom=(char*)obtenerMemoria(sizeof(char)*(strlen(nombre)+1));
    char* ape=(char*)obtenerMemoria(sizeof(char)*(strlen(apellido)+1));
    strcpy(nom,nombre);
    strcpy(ape,apellido);
    cliente->domicilio=domicilio;
    cliente->cuil=cuil;

    return cliente;
}

clientePtr destruirCliente(clientePtr cliente){
    free(cliente->nombre);
    free(cliente->apellido);
    free(cliente->domicilio);
    free(cliente->cuil);

    free(cliente);
    return NULL;
}

void mostrarCliente(clientePtr cliente){
    printf("Cliente:\n");
    printf("Nombre y Apellido: %s, %s\n",cliente->nombre, cliente->apellido);
    printf("Domicilio:%s, %s, %d\n",cliente->domicilio->calle, cliente->domicilio->localidad,cliente->domicilio->numero);
    printf("Cuil:");
//    mostrarCuil(cliente);
}

void setNombreCliente(clientePtr cliente, char* nombre){
    strcpy(cliente->nombre,nombre);
}
void setApellidoCliente(clientePtr cliente, char* apellido){
    strcpy(cliente->apellido,apellido);
}

void setDomicilio(clientePtr cliente, domicilioPtr domicilio){
    cliente->domicilio=domicilio;
}


char* getNombreCliente(clientePtr cliente){
    return cliente->nombre;
}

char* getApellido(clientePtr cliente){
    return cliente->apellido;
}
clientePtr getDomicilio(clientePtr cliente){
    return cliente->domicilio;
}
