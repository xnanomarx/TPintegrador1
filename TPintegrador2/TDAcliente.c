#include <stdio.h>
#include <stdlib.h>
#include "TDAcliente.h"
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
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
<<<<<<< HEAD
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
=======
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
    strcpy(ape,apellido);
    cliente->nombre=nom;
    cliente->apellido=ape;
    cliente->domicilio=domicilio;
    cliente->cuil=cuil;

    return cliente;
}

<<<<<<< HEAD
<<<<<<< HEAD
clientePtr destruirCliente(clientePtr cliente){
    free(cliente->nombre);
=======
clientPtr destruirCliente(clientePtr cliente){
    free(cleinte->nombre);
>>>>>>> origin/branchMariano
=======
clientePtr destruirCliente(clientePtr cliente){
    free(cliente->nombre);
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
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
<<<<<<< HEAD
    printf("Cuil:");
=======
    printf("Cuil:")
>>>>>>> origin/branchMariano
=======
    printf("Cuil:");
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
    mostrarCuil;
}

void setNombreCliente(clientePtr cliente, char* nombre){
    strcpy(cliente->nombre,nombre);
}
<<<<<<< HEAD
<<<<<<< HEAD
void setApellidoCliente(clientePtr cliente, char* apellido){
=======
void setApellidoCliente(clientePtr cliente, char* Apellido){
>>>>>>> origin/branchMariano
=======
void setApellidoCliente(clientePtr cliente, char* apellido){
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
    strcpy(cliente->apellido,apellido);
}

void setDomicilio(clientePtr cliente, domicilioPtr domicilio){
    cliente->domicilio=domicilio;
}
void setCuil(clientePtr cliente,cuilPtr cuil){
<<<<<<< HEAD
<<<<<<< HEAD
    cliente->cuil=cuil;
=======
    cliente->cuil=cuil
>>>>>>> origin/branchMariano
=======
    cliente->cuil=cuil;
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
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
<<<<<<< HEAD
=======
cuilPtr getCuil(clientePtr cliente){
    return cliente->cuil;
}
>>>>>>> origin/branchMariano
=======
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404


