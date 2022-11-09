#ifndef MENUCREACION_H_INCLUDED
#define MENUCREACION_H_INCLUDED
#include "lista.h"

int menuCrear();

void menuNuevoCliente(PtrLista listaClien, PtrLista listaDomCl, PtrLista listaCuilCl);

void menuNuevoChofer();

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void menuNuevoVehiculo();

#endif // MENUCREACION_H_INCLUDED
