#include <stdio.h>
#include <stdlib.h>
#include "TDAvehiculo.h"
#include "util.h"

vehiculoPtr crearVehiculo(char*tipo, char*marca,char*modelo,char*patente){
    vehiculoPtr vehiculo=(vehiculoPtr)obtenerMemoria(sizeof(vehiculo));
    char* tipoV=(char*)obtenerMemoria(sizeof(char)*(strlen(tipo)+1));
    char* marcaV=(char*)obtenerMemoria(sizeof(char)*(strlen(marca)+1));
    char* modeloV=(char*)obtenerMemoria(sizeof(char)*(strlen(modelo)+1));
    char* patenteV=(char*)obtenerMemoria(sizeof(char)*(strlen(patente)+1));
    strcpy(tipoV,tipo);
    strcpy(marcaV,marca);
    strcpy(modeloV,modelo);
    strcpy(patenteV,patente);
    vehiculo->tipo=tipoV;
    vehiculo->marca=marcaV;
    vehiculo->modelo=modeloV;
    vehiculo->patente=patenteV;
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
