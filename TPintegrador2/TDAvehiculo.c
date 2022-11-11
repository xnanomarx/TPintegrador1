#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDAvehiculo.h"
#include "util.h"

vehiculoPtr crearVehiculo(char* tipo, char* marca,char* modelo,char* patente){
    vehiculoPtr vehic=(vehiculoPtr)obtenerMemoria(sizeof(vehiculo));
    char* tipoV=(char*)obtenerMemoria(sizeof(char)*(strlen(tipo)+1));
    char* marcaV=(char*)obtenerMemoria(sizeof(char)*(strlen(marca)+1));
    char* modeloV=(char*)obtenerMemoria(sizeof(char)*(strlen(modelo)+1));
    char* patenteV=(char*)obtenerMemoria(sizeof(char)*(strlen(patente)+1));
    strcpy(tipoV,tipo);
    strcpy(marcaV,marca);
    strcpy(modeloV,modelo);
    strcpy(patenteV,patente);
    vehic->tipo=tipoV;
    vehic->marca=marcaV;
    vehic->modelo=modeloV;
    vehic->patente=patenteV;
    return vehic;
}

vehiculoPtr destruirVehiculo(vehiculoPtr vehiculo){
    free(vehiculo->marca);
    free(vehiculo->tipo);
    free(vehiculo->modelo);
    free(vehiculo->patente);

    free(vehiculo);
    return NULL;
}

char* getTipo(vehiculoPtr vehiculo){
    return vehiculo->tipo;
}

char* getMarca(vehiculoPtr vehiculo){
    return vehiculo->marca;
}

char* getModelo(vehiculoPtr vehiculo){
    return vehiculo->modelo;
}

char* getPatente(vehiculoPtr vehiculo){
    return vehiculo->patente;
}
void* setTipo(vehiculoPtr vehiculo, char* tipo){
    vehiculo->tipo=tipo;
}

void* setMarca(vehiculoPtr vehiculo, char* marca){
     vehiculo->marca=marca;
}

void* setModelo(vehiculoPtr vehiculo, char* modelo){
     vehiculo->modelo=modelo;
}
void* setPatente(vehiculoPtr vehiculo, char* patente){
     vehiculo->patente=patente;
}

void mostrarVehiculo(vehiculoPtr vehiculo,int numVehiculo){
    printf("--------Vehiculo %d--------\nTipo: %s\nMarca: %s\nModelo: %s\nPatente: %s\n------------------------\n\n",numVehiculo,vehiculo->tipo,vehiculo->marca,vehiculo->modelo,vehiculo->patente);
}
