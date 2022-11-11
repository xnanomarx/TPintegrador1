#ifndef MOSTRAR_H_INCLUDED
#define MOSTRAR_H_INCLUDED
#include "lista.h"
#include "cola.h"
#include "TDAPila.h"

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void menuInfoChofer(PtrLista listaChofer);

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void menuInfoCliente(PtrLista listaCliente);

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void menuInfoReparto(PtrCola colaReparto);

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void menuInfoPaquete(PtrPila pilaReparto);

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int EstadoDeEntrega(int codigo,bool estadoEntrega);
// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void EstadoDeEntrega2(int mostrar);

void mostrarListaChoferes(PtrLista lista);
void mostrarListaClientes(PtrLista lista);
#endif // MOSTRAR_H_INCLUDED
