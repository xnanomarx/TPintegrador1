#ifndef TDAMENU_H_INCLUDED
#define TDAMENU_H_INCLUDED
#include "lista.h"
#include "cola.h"
#include "TDAPila.h"

int seleccionAccion(int seleccion);

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuPrincipal();

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfo();



#endif // TDAMENU_H_INCLUDED
