#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "TDAentrega.h"
#include "TDAfecha.h"
#include "TDAentrega.h"
#include "util.h"

entregaPtr crearEntrega(paquetePtr paquete,clientePtr cliente){
    entregaPtr entr=(entregaPtr)obtenerMemoria(sizeof(entrega));
    char* moti=(char*)obtenerMemoria(sizeof(char)*(100));
    moti="Esperando ser asignado a un reparto";
    entr->cliente=cliente;
    entr->motivo=moti;
    entr->paquete=paquete;
    entr->estadoEntrega=false;
    entr->FechaEntrega=NULL;
    return entr;
}

entregaPtr destruirentrega(entregaPtr entrega){
    free(entrega->motivo);
    free(entrega);
    return NULL;
}

char* getmotivo(entregaPtr entrega){
    return entrega->motivo;
}

char* getCuilEntrega(entregaPtr entrega){
    return entrega->cliente->cuil->cuilUsuario;
}


clientePtr getCliente(entregaPtr entrega){
    return entrega->cliente;
}

char* getNombreClienteEntrega(entregaPtr entrega){
    return entrega->cliente->nombre;
}

char* getApellidoClienteEntr(entregaPtr entrega){
    return entrega->cliente->apellido;
}

char* getCalleEntrega(entregaPtr entrega){
    return entrega->paquete->direccEntrega->calle;
}
char* getLocalidadEntrega(entregaPtr entrega){
    return entrega->paquete->direccEntrega->localidad;
}

char* getMotivo(entregaPtr entrega){
    return entrega->motivo;
}
char* getCalleRetiro(entregaPtr entrega){
    return entrega->paquete->direccRetiro->calle;
}
char* getLocalidadRetiro(entregaPtr entrega){
    return entrega->paquete->direccRetiro->localidad;
}
char* getcalleEntrega(entregaPtr entrega){
    return entrega->paquete->direccEntrega->calle;
}

bool getEstadoEntrega(entregaPtr entrega){
    return entrega->estadoEntrega;
}
int getAlturaClienteEntr(entregaPtr entrega){
    return entrega->cliente->domicilio->numero;
}
int getCodigoEntr(entregaPtr entrega){
    return entrega->paquete->codigo;
}
int getAltoEntr(entregaPtr entrega){
    return entrega->paquete->altura;
}
int getAnchoEntr(entregaPtr entrega){
    return entrega->paquete->ancho;
}
int getLargoEntr(entregaPtr entrega){
    return entrega->paquete->largo;
}
int getPesoEntr(entregaPtr entrega){
    return entrega->paquete->peso;
}
int getAlturaRetiro(entregaPtr entrega){
    return entrega->paquete->direccRetiro->numero;
}
int getAlturaEntrega(entregaPtr entrega){
    return entrega->paquete->direccEntrega->numero;
}
int getDiaEntr(entregaPtr entrega){
    return getDia(entrega->FechaEntrega);
}
int getMesEntr(entregaPtr entrega){
    return getMes(entrega->FechaEntrega);
}
int getAnioEntr(entregaPtr entrega){
    return getAnio(entrega->FechaEntrega);
}

paquetePtr getPaquete(entregaPtr entrega){
    return entrega->paquete;
}

bool getEstadoentrega(entregaPtr entrega){
    return entrega->estadoEntrega;
}

void setMotivo(entregaPtr entrega, char* motivo){
    entrega->motivo=motivo;
}

void setEstadoEntrega(entregaPtr entrega, bool estadoentrega){
    entrega->estadoEntrega=estadoentrega;
}

void setCliente(entregaPtr entrega,clientePtr cliente){
    entrega->cliente=cliente;
}

void setFechaEntrega(entregaPtr entrega,FechaPtr fechaNueva){
    entrega->FechaEntrega=fechaNueva;
}

void mostrarEstadoEntr(entregaPtr entr,int numEntr){
    printf("--------------Entrega %d--------------\nCodigo de paquete: %d\nEstado de entrega: ",numEntr,entr->paquete->codigo);
    if(entr->estadoEntrega==false){
        printf("No fue entregado. \nMotivo: %s\n",entr->motivo);
    }else{
        printf("Entregado.\nFecha de entrega: %d/%d/%d %d:%d\n--------------------------------------",getDia(entr->FechaEntrega),getMes(entr->FechaEntrega),getAnio(entr->FechaEntrega),gethoras(entr->FechaEntrega->hora),getMinutos(entr->FechaEntrega->hora));
    }
}

void mostrarEntrega(entregaPtr entrega,int numEntr){
    printf("---------Entrega %d--------\n",numEntr);
    printf("Cliente: %s, %s.\nCUIL/CUIT: %s\nPaquete: %d\n---------------------------\n",getApellidoCliente(entrega->cliente),getNombreCliente(entrega->cliente),getCuilEntrega(entrega),entrega->paquete->codigo);
}
