#include <stdio.h>
#include <stdlib.h>
#include "TDAcliente.h"
<<<<<<< HEAD
#include "util.h"
#include "TDAcuil.h"
#include "TDAdomicilio.h"
#include "TDAdimension.h"

clientePtr crearCliente (char* nombre,char* apellido,domicilioPtr domicilio,cuilPtr cuil){
    clientePtr cliente=(clientePtr)obtenerMemoria(sizeof(cliente));
    //char* nom=(char*)obtenerMemoria(sizeof(char)*(strlen(nombre)+1));
    //char* ape=(char*)obtenerMemoria(sizeof(char)*(strlen(apellido)+1));
    cliente->nombre=(char*)obtenerMemoria(sizeof(char)*(strlen(nombre)+1));
    strcpy(cliente->nombre,nombre);
=======
#include "TDAutil.h"
#include "TDAcuil.h"
#include "TDAdomicilio.h"

clientePtr crearCliente (char* nombre,char* apellido,domicilioPtr domicilio,cuilPtr cuil){
    clientePtr cliente=(clientePtr)obtenerMemoria(sizeof(cliente));
    char* nom=(char*)obtenerMemoria(sizeof(char)*(strlen(nombre)+1));
    char* ape=(char*)obtenerMemoria(sizeof(char)*(strlen(apellido)+1));
    strcpy(nom,nombre);
>>>>>>> origin/branchMariano
    strcpy(ape,apellido);
    cliente->nombre=nom;
    cliente->apellido=ape;
    cliente->domicilio=domicilio;
    cliente->cuil=cuil;

    return cliente;
}

<<<<<<< HEAD
clientePtr destruirCliente(clientePtr cliente){
    free(cliente->nombre);
=======
clientPtr destruirCliente(clientePtr cliente){
    free(cleinte->nombre);
>>>>>>> origin/branchMariano
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
<<<<<<< HEAD
    printf("Cuil:");
=======
    printf("Cuil:")
>>>>>>> origin/branchMariano
    mostrarCuil;
}

void setNombreCliente(clientePtr cliente, char* nombre){
    strcpy(cliente->nombre,nombre);
}
<<<<<<< HEAD
void setApellidoCliente(clientePtr cliente, char* apellido){
=======
void setApellidoCliente(clientePtr cliente, char* Apellido){
>>>>>>> origin/branchMariano
    strcpy(cliente->apellido,apellido);
}

void setDomicilio(clientePtr cliente, domicilioPtr domicilio){
    cliente->domicilio=domicilio;
}
void setCuil(clientePtr cliente,cuilPtr cuil){
<<<<<<< HEAD
    cliente->cuil=cuil;
=======
    cliente->cuil=cuil
>>>>>>> origin/branchMariano
}

char* getNombreCliente(clientePtr cliente){
    return cliente->nombre;
}

char* getApellido(clientePtr cliente){
    return cliente->apellido;
}
domicilioPtr getDomicilio(clientePtr cliente){
    return cliente->domicilio;
}
<<<<<<< HEAD
=======
cuilPtr getCuil(clientePtr cliente){
    return cliente->cuil;
}
>>>>>>> origin/branchMariano


