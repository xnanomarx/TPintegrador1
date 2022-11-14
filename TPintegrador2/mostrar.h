#ifndef MOSTRAR_H_INCLUDED
#define MOSTRAR_H_INCLUDED
#include "lista.h"
#include "cola.h"
#include "TDAPila.h"

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void menuInfoChofer(PtrLista listaChofer);

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void menuInfoCliente(PtrLista listaCliente);

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void menuInfoReparto(PtrLista listaReparto);

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void menuInfoPaquete(PtrLista listaPaquetes);
void EstadoDeEntrega(int codigo,bool estadoEntrega);
void mostrarListaChoferes(PtrLista lista);
void mostrarListaClientes(PtrLista lista);
void menuInfoVehiculo(PtrLista listaVehiculo);
void mostrarListaVehiculo(PtrLista lista);
void mostrarListaPaquete(PtrLista listaPaq);
#endif // MOSTRAR_H_INCLUDED
