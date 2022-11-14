#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDApaquete.h"
#include "util.h"
#include "TDAdomicilio.h"

paquetePtr crearPaquete(int altura, int ancho, int largo, int peso, domicilioPtr direccretiro, domicilioPtr direccEntrega){
    srand(time(NULL));
    paquetePtr paq=(paquetePtr)obtenerMemoria(sizeof(paquete));
    paq->codigo=rand()%1000;
    paq->altura=altura;
    paq->ancho=ancho;
    paq->largo=largo;
    paq->peso=peso;
    paq->direccEntrega=direccEntrega;
    paq->direccRetiro=direccretiro;
    return paq;
}

paquetePtr destruirpaquete(paquetePtr paquete){
    free(paquete);
    return NULL;
}

int getCodigo(paquetePtr paquete){
    return paquete->codigo;
}

int getAltura (paquetePtr paquete){
    return paquete->altura;
}

int getAncho (paquetePtr paquete){
    return paquete->ancho;
}

int getLargo (paquetePtr paquete){
    return paquete->largo;
}

int getPeso (paquetePtr paquete){
    return paquete->peso;
}


char* getLocalidadRetiroPaq(paquetePtr paquete){
    return paquete->direccRetiro->localidad;
}

char* getCalleRetiroPaq(paquetePtr paquete){
    return paquete->direccRetiro->calle;
}

char* getcalleEntregaPaq(paquetePtr paquete){
    return paquete->direccEntrega->calle;
}

int getAlturaRetiroPaq(paquetePtr paquete){
    return paquete->direccRetiro->numero;
}

int getAlturaEntregaPaq(paquetePtr paquete){
    return paquete->direccEntrega->numero;
}

char* getLocalidadEntregaPaq(paquetePtr paquete){
    return paquete->direccEntrega->localidad;
}

void setAltura(paquetePtr paquete, int altura){
    paquete->altura=altura;
}

void setAncho(paquetePtr paquete, int ancho){
    paquete->ancho=ancho;
}

void setLargo(paquetePtr paquete, int largo){
    paquete->largo=largo;
}

void setPeso(paquetePtr paquete, int peso){
    paquete->peso=peso;
}

void setDomEPaq(paquetePtr paquete,domicilioPtr domE){
    paquete->direccEntrega=domE;
}

void setDomRPaq(paquetePtr paquete,domicilioPtr domR){
    paquete->direccRetiro=domR;
}

void mostrarPaquete(paquetePtr paquete,int numero){
    printf("--------Paquete %d--------\nCodigo: %d \nAltura: %d cm Ancho: %d cm\nLargo: %d cm Peso: %d kg\n",numero,paquete->codigo,paquete->altura,paquete->ancho,paquete->largo,paquete->peso);
    printf("Domicilio de retiro: %s %d, %s\n",paquete->direccRetiro->calle,paquete->direccRetiro->numero,paquete->direccRetiro->localidad);
    printf("Domicilio de entrega: %s %d, %s\n-------------------------\n",paquete->direccEntrega->calle,paquete->direccEntrega->numero,paquete->direccEntrega->localidad);
}

