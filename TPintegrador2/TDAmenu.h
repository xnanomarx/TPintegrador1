#ifndef TDAMENU_H_INCLUDED
#define TDAMENU_H_INCLUDED

int seleccionAccion(int seleccion);

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuPrincipal();

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfo();

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoChofer();

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoCliente();

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoReparto();

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoPaquete();

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoPaquete2();

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int EstadoDeEntrega(int codigo,bool estadoEntrega);
// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
void EstadoDeEntrega2(int mostrar);

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuCuil(char cuil[11]);

#endif // TDAMENU_H_INCLUDED
