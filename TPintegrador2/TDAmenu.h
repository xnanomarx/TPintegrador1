#ifndef TDAMENU_H_INCLUDED
#define TDAMENU_H_INCLUDED

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

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoChofer();

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoCliente();

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoReparto();

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoPaquete();

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoPaquete2();

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

// Función de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondición: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Parámetros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuCuil(char cuil[11]);

#endif // TDAMENU_H_INCLUDED
