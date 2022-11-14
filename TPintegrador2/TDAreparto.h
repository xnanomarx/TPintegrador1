#ifndef TDAREPARTO_INCLUDED
#define TDAREPARTO_INCLUDED
#include "TDAfecha.h"
#include "TDAPila.h"
#include "TDAhora.h"
#include "TDAchofer.h"
#include "TDAvehiculo.h"
typedef struct reparto{
    choferPtr chofer;
    vehiculoPtr vehiculo;
    PtrPila pila;
    FechaPtr fechaSalida;
    horaPtr horaLlegada;
}reparto;

typedef reparto* repartoPtr;

typedef struct repartoAux{
    choferPtr choferAux;
    vehiculoPtr vehiculoAux;
    PtrPila pilaAux;
    FechaPtr fechaSalidaAux;
    horaPtr horaLlegadaAux;
}repartoAux;

typedef repartoAux* repartoAuxPtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: El reparto no ha sido creado
// Postcondici�n: se crea un reparto con direccEntrega, direccRetiro, pila, horaSalida, horaLlegada y motivo
// Par�metros:
// direccEntrega: representa la direccion de entrega del paquete
// direccRetiro: representa la direccion de retiro del paquete
// Pila: TDApila donde se guardara el orden de los paquetes
// HoraSalida: TDAhoraSalida representa la hora de salida del paquete
// HoraLlegada: TDAhoraLlegada representa la hora de Llegada del paquete
// Devuelve un puntero a la estructura Reparto
repartoPtr crearReparto(choferPtr chof, vehiculoPtr vehic, PtrPila pil,FechaPtr fechaSalida);


// Operaci�n de destrucci�n (Destructor)
// Precondici�n: reparto debe haberse creado con crearReparto
// Postcondici�n: se destruye el reparto y se libera la memoria ocupada
// Par�metros:
// vehiculo: TDAvehiculo a destruir
// Devuelve NULL
repartoPtr destruirReparto(repartoPtr reparto);

// Operaci�n de obtenci�n de HoraEntrega
// Precondici�n: reparto debe haberse creado
// Postcondici�n: se obtiene la hora de entrega
// Par�metros:
// reparto: TDAreparto del que se obtiene la hora de entrega
// Devuelve un puntero al TDAreparto representando la hora de entrega
horaPtr getHoraEntrega(repartoPtr reparto);

// Operaci�n de obtenci�n de HoraLlegada
// Precondici�n: reparto debe haberse creado
// Postcondici�n: se obtiene la hora de salida
// Par�metros:
// reparto: TDAreparto del que se obtiene la hora llegada
// Devuelve un puntero al TDAreparto representando la hora de llegada
horaPtr getHoraLlegada(repartoPtr reparto);

// Operaci�n de asignaci�n de hora de entrega de reparto
// Precondici�n: Reparto debe haberse creado
// Postcondici�n: Reparto cambia con el nuevo valor de HoraEntrega
// Par�metros:
//   HoraEntrega: TDAHoraEntrega que cambia el valor de la hora de entrega
// No devuelve nada
void* setHoraSalida(repartoPtr reparto, horaPtr horaSalida);

// Operaci�n de asignaci�n de hora de llegada de reparto
// Precondici�n: Reparto debe haberse creado
// Postcondici�n: Reparto cambia con el nuevo valor de HoraLlegada
// Par�metros:
//  HoraLlegada: TDAHoraLlegada donde se asigna el nuevo valor de HoraLlegada
// No devuelve nada
void* setHoraLlegada(repartoPtr reparto, horaPtr horaLlegada);

void mostrarReparto(repartoPtr rep,int numEntr);

#endif // TDAREPARTO_INCLUDED
