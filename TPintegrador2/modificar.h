#ifndef MODIFICAR_H_INCLUDED
#define MODIFICAR_H_INCLUDED

void menuModifChofer(PtrLista lista);

void menuModifVehiculo(PtrLista listaVehic);

void menuModifCliente(PtrLista lista);

// Funci�n de mostrar menu de modificacion de domicilio
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuSetDomicilio();

// Funci�n de mostrar menu de modificacion de
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuSetCliente();

void menuModifEstadoEntrega(PtrLista entrega1,PtrLista listaEntregasCompletadas,PtrLista deposito);

#endif // MODIFICAR_H_INCLUDED
