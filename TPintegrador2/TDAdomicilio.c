#include <stdio.h>
#include <stdlib.h>
#include "TDAdomicilio.h"
#include "util.h"

domicilioPtr crearDomicilio(char* calle, int numero, char* localidad){
    domicilioPtr domicilio=(domicilioPtr)obtenerMemoria(sizeof(domicilio));
    domicilio->calle=calle;
    domicilio->localidad=localidad;
    domicilio->numero=numero;
    return domicilio;
}

domicilioPtr destruirDomicilio(domicilioPtr domicilio){
    free(domicilio->calle);
    free(domicilio->localidad);
    free(domicilio->numero);

    free(domicilio);
    return NULL;
}


char* getCalle(domicilioPtr domicilio){
    return domicilio->calle;
}

char* getLocalidad(domicilioPtr domicilio){
    return domicilio->localidad;
}

int getNumero(domicilioPtr domicilio){
    return domicilio->numero;
}

void* setCalle (domicilioPtr domicilio, char* calle){
    domicilio->calle=calle;
}

void* setLocalidad (domicilioPtr domicilio, char* localidad){
    domicilio->localidad=localidad;
}

void* setNumero (domicilioPtr domicilio, int numero){
    domicilio->numero=numero;
}

domicilioPtr ingresarDomicilio(){
    char* calleAux=(char*)obtenerMemoria(sizeof(char)*(50));
    char* localidadAux=(char*)obtenerMemoria(sizeof(char)*(50));
    int alturaAux;
    printf("Ingrese localidad de domicilio.\n");
    scanf(" %[^\n]%*c",localidadAux);
    printf("Ingrese calle de domicilio.\n");
    scanf(" %[^\n]%*c",calleAux);
    printf("Ingrese altura de calle.\n");
    scanf(" %d",&alturaAux);
    domicilioPtr domic=crearDomicilio(calleAux,alturaAux,localidadAux);
    return domic;
    free(calleAux);
    free(localidadAux);
}
