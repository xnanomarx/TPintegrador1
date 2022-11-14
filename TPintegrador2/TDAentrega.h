#ifndef TDAentrega_INCLUDED
#define TDAentrega_INCLUDED
#include <stdbool.h>
#include "TDAcliente.h"
#include "TDApaquete.h"
#include "TDAfecha.h"

typedef struct entrega{
    clientePtr cliente;
    char* motivo;
    bool estadoEntrega;
    paquetePtr paquete;
    FechaPtr FechaEntrega;
}entrega;

typedef entrega* entregaPtr;

typedef struct entregaAux{
    char nombreAux[50];
    char apellidoAux[50];
    char calleAux[30];
    char localidadAux[30];
    char cuilAux[12];
    char motivoAux[100];
    char calleRetiroAux[30];
    char localidadRetiroAux[30];
    char calleEntregaAux[30];
    char localidadEntregaAux[30];
    bool estadoEntregaAux;
    int alturaAux;
    int codigoAux;
    int altoAux;
    int anchoAux;
    int largoAux;
    int pesoAux;
    int alturaRetiroAux;
    int alturaEntregaAux;
    int diaAux;
    int mesAux;
    int anioAux;
}entregaAux;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: el entrega no ha sido creado
// Postcondici�n: se crea un entrega con motivo, estadoEntrega, FechaSalida, FechaEntrega, Dimensiones y codigo.
// Par�metros:
//  motivo: char que representa el motivo del incumplimiento de la entrega
//  estadoEntrega: bool que representa si se ha entregado o no el entrega
//  FechaSalida: TDAFechaSalida representa la fecha de salida del entrega
//  FechaEntrega: TDAFechaEntrega representa la fecha de entrega del entrega
//  Dimensiones: TDADimensiones representa las dimensiones del entrega
//  codigo: entero representando el c�digo del entrega
// Devuelve un puntero a la estructura entrega en memoria din�mica
entregaPtr crearEntrega(paquetePtr paquete,clientePtr cliente);

// Operaci�n de destrucci�n (Destructor)
// Precondici�n: entrega debe haber sido creado
// Postcondici�n: Se destruye entrega y se libre el espacio que utilizaba
// Par�metros:
//  entrega: TDA entrega a destruir.
// Devuelve NULL
entregaPtr destruirEntrega(entregaPtr entrega);

// Operaci�n de obtenci�n de Motivo
// Precondici�n: entrega debe haberse creado
// Postcondici�n: se obtiene el motivo
// Par�metros:
// entrega: TDAentrega del que se obtiene el motivo
// Devuelve un puntero char representando el motivo
char* getmotivo(entregaPtr entrega);

char* getCuilEntrega(entregaPtr entrega);

clientePtr getCliente(entregaPtr entrega);

char* getNombreClienteEntrega(entregaPtr entrega);
char* getCalleEntrega(entregaPtr entrega);
char* getLocalidadEntrega(entregaPtr entrega);
char* getCuilEntrega(entregaPtr entrega);
char* getMotivo(entregaPtr entrega);
char* getCalleRetiro(entregaPtr entrega);
char* getLocalidadRetiro(entregaPtr entrega);
char* getcalleEntrega(entregaPtr entrega);
char* getLocalidadEntrega(entregaPtr entrega);
bool getEstadoEntrega(entregaPtr entrega);
int getAlturaClienteEntr(entregaPtr entrega);
int getCodigoEntr(entregaPtr entrega);
int getAltoEntr(entregaPtr entrega);
int getAnchoEntr(entregaPtr entrega);
int getLargoEntr(entregaPtr entrega);
int getPesoEntr(entregaPtr entrega);
int getAlturaRetiro(entregaPtr entrega);
int getAlturaEntrega(entregaPtr entrega);
int getDiaEntr(entregaPtr entrega);
int getMesEntr(entregaPtr entrega);
int getAnioEntr(entregaPtr entrega);

paquetePtr getPaquete(entregaPtr entrega);

// Operaci�n de obtenci�n de EstadoEntrega
// Precondici�n: entrega debe haberse creado
// Postcondici�n: se obtiene el estado de la entrega
// Par�metros:
// entrega: TDAentrega del que se obtiene EstadoEntrega
// Devuelve un booleando representando el estado de la entrega
bool getEstadoEntrega(entregaPtr entrega);

// Operaci�n de asignacion de motivo
// Precondici�n: Motivo debe haberse creado
// Postcondici�n: entrega cambia con el nuevo motivo
// Par�metros:
//  entrega: TDAentrega al que se le asignara el nuevo motivo
//  motivo: char representando el nuevo motivo de incumplimiento
// No devuelve un valor
void setMotivo(entregaPtr entrega, char* motivo);

// Operaci�n de asignacion de estadoEntrega
// Precondici�n: estadoEntrega debe haberse creado
// Postcondici�n: entrega cambia con el nuevo estadoEntrega
// Par�metros:
//  entrega: TDAentrega al que se le asignara el nuevo estado de entrega
//  estadoEntrega: booleano representando el nuevo estado de entrega
// No devuelve un valor
void setEstadoEntrega(entregaPtr entrega, bool estadoentrega);

void setFechaEntrega(entregaPtr entrega,FechaPtr fechaNueva);

void mostrarEstadoEntr(entregaPtr entr,int numEntr);

void mostrarEntrega(entregaPtr entrega,int numEntr);

#endif // TDAentrega_INCLUDED
