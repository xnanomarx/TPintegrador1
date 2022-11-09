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

void setDomicilioCliente(clientePtr cliente, domicilioPtr domicilio){
    cliente->domicilio=domicilio;
}

void setCuilCliente(clientePtr cliente,cuilPtr cuil){
    cliente->cuil=cuil;
}

char* getNombreCliente(clientePtr cliente){
    return cliente->nombre;
}

char* getApellidoCliente(clientePtr cliente){
    return cliente->apellido;
}
clientePtr getDomicilio(clientePtr cliente){
    return cliente->domicilio;
}
