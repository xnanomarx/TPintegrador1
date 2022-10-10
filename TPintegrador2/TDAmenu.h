#ifndef TDAMENU_H_INCLUDED
#define TDAMENU_H_INCLUDED

// Funci�n de mostrar menu principal
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuPrincipal(int seleccion);

// Funci�n de mostrar menu de modificar
// Precondicion: debe haberse ejecutado el menu principal
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuSet(int seleccion);

// Funci�n de mostrar menu de modificacion de chofer
// Precondicion: debe haberse ejecutado el menu principal
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuSetChofer(int seleccion);

// Funci�n de mostrar menu de modificacion de domicilio
// Precondicion: debe haberse ejecutado el menu principal
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuSetDomicilio(int seleccion);

// Funci�n de mostrar menu de modificacion de cliente
// Precondicion: debe haberse ejecutado el menu principal
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuSetCliente(int seleccion);

// Funci�n de mostrar menu de elegir entre agregar, modificar o eliminar un reparto
// Precondicion: debe haberse ejecutado el menu principal
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuReparto(int seleccion);

// Funci�n de mostrar menu de agregar nuevo reparto
// Precondicion: debe haberse ejecutado menuReparto
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuNuevoReparto(int seleccion);

// Funci�n de mostrar menu de modificacion de reparto
// Precondicion: debe haberse ejecutado menuReparto
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuModifReparto(int seleccion);

// Funci�n de mostrar menu de eliminaci�n de reparto
// Precondicion: debe haberse ejecutado menuReparto
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuBorrarReparto(int seleccion);

// Funci�n de mostrar menu de elegir entre agregar, modificar o eliminar un paquete
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuPaquete(int seleccion);

// Funci�n de mostrar menu de agregar nuevo paquete
// Precondicion: debe haberse ejecutado menuPaquete
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuNuevoPaquete(int seleccion);

// Funci�n de mostrar menu de modificacion de paquete
// Precondicion: debe haberse ejecutado menuPaquete
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuModifPaquete(int seleccion);

// Funci�n de mostrar menu de eliminaci�n de paquete
// Precondicion: debe haberse ejecutado menuPaquete
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuBorrarPaquete(int seleccion);

// Funci�n de mostrar menu de elegir entre agregar, modificar o eliminar un vehiculo
// Precondicion: todos los tda deben haber sido cargados
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuVehiculo(int seleccion);

// Funci�n de mostrar menu de agregar nuevo vehiculo
// Precondicion: debe haberse ejecutado menuVehiculo
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuNuevoVehiculo(int seleccion);

// Funci�n de mostrar menu de modificacion de vehiculo
// Precondicion: debe haberse ejecutado menuVehiculo
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuModifVehiculo(int seleccion);

// Funci�n de mostrar menu de eliminaci�n de vehiculo
// Precondicion: debe haberse ejecutado menuVehiculo
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuBorrarVehiculo(int seleccion);

// Funci�n de mostrar menu de solicitud de informacion
// Precondicion: debe haberse ejecutado el menu principal
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfo(int seleccion);

// Funci�n de mostrar menu de solicitud de informacion de chofer
// Precondicion: debe haberse ejecutado el menuInfo
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoChofer(int seleccion);

// Funci�n de mostrar menu de solicitud de informacion de cliente
// Precondicion: debe haberse ejecutado el menuInfo
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoCliente(int seleccion);

// Funci�n de mostrar menu de solicitud de informacion de reparto
// Precondicion: debe haberse ejecutado el menuInfo
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoReparto(int seleccion);

// Paso previo a la solicitud de informacion de paquete que pide al usuario el codigo del mismo para mostrar sus datos
// Precondicion: debe haberse ejecutado el menuReparto
// Postcondici�n: se obtiene el codigo de paquete para mostrar posteriormente en menuInfoPaquete2
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoPaquete(int seleccion);

// Funcion de mostrar informacion de paquete
// Precondicion: debe haberse ejecutado el menuInfoPaquete
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// seleccion: entero con la opcion elegida por el usuario previamente
//devuelve un numero con la opcion elegida por el usuario
int menuInfoPaquete2(int seleccion);

// Paso previo a la solicitud de informacion de estado de entrega que pide al usuario el codigo de paquete para mostrar si se entreg�
// Precondicion: debe haberse ejecutado menuInfoPaquete2
// Postcondici�n: se obtiene 1=si el usuario quiere ver el motivo del fallo de la entrega, y 0=si no desea verlo
// Par�metros:
// codigo: entero con el codigo de paquete del cual se desea ver el estado de entrega
// estadoEntrega: booleano que marca si el paquete fue entregado con true, o no con false
//devuelve un numero con la opcion elegida por el usuario
int EstadoDeEntrega(int codigo,bool estadoEntrega);

// Funcion de mostrar el estado de entrega de un paquete
// Precondicion: debe haberse ejecutado estadoDeEntrega del cual se obtiene 1 o 0
// Postcondici�n: se obtiene la eleccion del usuario para seguir avanzando en el menu
// Par�metros:
// mostrar: entero obtenido de estadoDeEntrega que si marca 1 se muestra por pantalla el motivo de la no entrega del paquete
//no devuelve nada, muestra por pantalla "motivo"
void EstadoDeEntrega2(int mostrar);

// Funci�n de mostrar menu de validaci�n de cuil
// Precondicion: debe haberse ejecutado un menu previo
// Postcondici�n: se muestra la validaci�n o no del cuil por consola
// Par�metros:
// cuil: puntero a char con el cuil del cual se solicita validaci�n
//No devuelve nada, muestra por pantalla si el cuil fue validado o no
void menuCuil(char cuil[11]);

#endif // TDAMENU_H_INCLUDED
