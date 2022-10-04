#include <stdio.h>
#include <stdlib.h>
#include "TDAvehiculo.h"

vehiculoPtr crearVehiculo(char*tipo, char*marca,char*modelo,char*patente){
    vehiculoPtr vehiculo=(vehiculoPtr)obtenerMemoria(sizeof(vehiculo));
    vehiculo->tipo=tipo;
    vehiculo->marca=marca;
    vehiculo->modelo=modelo;
    vehiculo->patente=patente;
}

vehiculoPtr destruirVehiculo(vehiculoPtr vehiculo){
    free(vehiculo->marca);
    free(vehiculo->tipo);
    free(vehiculo->modelo);
    free(vehiculo->patente);

    free(vehiculo);
    return NULL;
}

char* getTipo(vehiculoPtr vehiculo);

char* getMarca(vehiculoPtr vehiculo);

char* getModelo(vehiculoPtr vehiculo);

char* getPatente(vehiculoPtr vehiculo);

void* setTipo(vehiculoPtr vehiculo, char* tipo);

void* setTipo(vehiculoPtr vehiculo, char* tipo);

void* setMarca(vehiculoPtr vehiculo, char* marca);

void* setModelo(vehiculoPtr vehiculo, char* modelo);

void* setPatente(vehiculoPtr vehiculo, char* patente);
