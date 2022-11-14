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

// Operación de creación (Constructor)
// Precondición: El reparto no ha sido creado
// Postcondición: se crea un reparto con direccEntrega, direccRetiro, pila, horaSalida, horaLlegada y motivo
// Parámetros:
// direccEntrega: representa la direccion de entrega del paquete
// direccRetiro: representa la direccion de retiro del paquete
// Pila: TDApila donde se guardara el orden de los paquetes
// HoraSalida: TDAhoraSalida representa la hora de salida del paquete
// HoraLlegada: TDAhoraLlegada representa la hora de Llegada del paquete
// Devuelve un puntero a la estructura Reparto
repartoPtr crearReparto(choferPtr chof, vehiculoPtr vehic, PtrPila pil,FechaPtr fechaSalida);


// Operación de destrucción (Destructor)
// Precondición: reparto debe haberse creado con crearReparto
// Postcondición: se destruye el reparto y se libera la memoria ocupada
// Parámetros:
// vehiculo: TDAvehiculo a destruir
// Devuelve NULL
repartoPtr destruirReparto(repartoPtr reparto);

// Operación de obtención de HoraEntrega
// Precondición: reparto debe haberse creado
// Postcondición: se obtiene la hora de entrega
// Parámetros:
// reparto: TDAreparto del que se obtiene la hora de entrega
// Devuelve un puntero al TDAreparto representando la hora de entrega
horaPtr getHoraEntrega(repartoPtr reparto);

// Operación de obtención de HoraLlegada
// Precondición: reparto debe haberse creado
// Postcondición: se obtiene la hora de salida
// Parámetros:
// reparto: TDAreparto del que se obtiene la hora llegada
// Devuelve un puntero al TDAreparto representando la hora de llegada
horaPtr getHoraLlegada(repartoPtr reparto);

// Operaciòn de asignaciòn de hora de entrega de reparto
// Precondiciòn: Reparto debe haberse creado
// Postcondiciòn: Reparto cambia con el nuevo valor de HoraEntrega
// Paràmetros:
//   HoraEntrega: TDAHoraEntrega que cambia el valor de la hora de entrega
// No devuelve nada
void* setHoraSalida(repartoPtr reparto, horaPtr horaSalida);

// Operaciòn de asignaciòn de hora de llegada de reparto
// Precondiciòn: Reparto debe haberse creado
// Postcondiciòn: Reparto cambia con el nuevo valor de HoraLlegada
// Paràmetros:
//  HoraLlegada: TDAHoraLlegada donde se asigna el nuevo valor de HoraLlegada
// No devuelve nada
void* setHoraLlegada(repartoPtr reparto, horaPtr horaLlegada);

void mostrarReparto(repartoPtr rep,int numEntr);

#endif // TDAREPARTO_INCLUDED
