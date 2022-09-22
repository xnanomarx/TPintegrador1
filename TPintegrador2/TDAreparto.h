#ifndef TDAREPARTO_INCLUDED
#define TDAREPARTO_INCLUDED


// Operaci�n de creaci�n (Constructor)
// Precondici�n: El reparto no ha sido creado
// Postcondici�n: se crea un reparto con direccEntrega, direccRetiro, fechaEntrega, fechaSalida,
// EstadoEntrega, motivo
// Par�metros:
// direccEntrega: representa la direccion de entrega del paquete
// direccRetiro: representa la direccion de retiro del paquete
// fechaEntrega: representa la fecha de entrega del paquete
// fechaSalida: representa la fecha de salida del paquete
// EstadoEntrega: representa el estado de la entrega del paquete
// Motivo: representa el motivo por el cual no se entrego el paquete
// Devuelve un puntero a la estructura Reparto
repartoPtr crearReparto(Char*direccEntrega, char*direccRetiro,FechaEntrega, FechaSalida, bool estadoEntrega,char*motivo)


// Operaci�n de destrucci�n (Destructor)
// Precondici�n: reparto debe haberse creado con crearReparto
// Postcondici�n: se destruye el reparto y se libera la memoria ocupada
// Par�metros:
// vehiculo: TDAvehiculo a destruir
// Devuelve NULL
repartoPtr destruirReparto(repartoPtr reparto)


// Operaci�n de obtenci�n de direccEntrega
// Precondici�n: reparto debe haberse creado
// Postcondici�n: se obtiene la direccion de entrega
// Par�metros:
// reparto: TDAreparto del que se obtiene la direccEntrega
// Devuelve un puntero a char representando la direccion de entrega
char* getDirrecEntrega(repartoPtr reparto)

// Operaci�n de obtenci�n de direccRetiro
// Precondici�n: reparto debe haberse creado
// Postcondici�n: se obtiene la direccion de retiro
// Par�metros:
// reparto: TDAreparto del que se obtiene la direccRetiro
// Devuelve un puntero a char representando la direccion de retiro
char* getDireccRetiro(repartoPtr reparto)

// Operaci�n de obtenci�n de fechaEntrega
// Precondici�n: reparto debe haberse creado
// Postcondici�n: se obtiene la fecha de entrega
// Par�metros:
// reparto: TDAreparto del que se obtiene la fecha de entrega
// Devuelve un puntero al TDAreparto representando la fecha de entrega
int getFechaEntrega(repartoPtr reparto)

// Operaci�n de obtenci�n de fechaSalida
// Precondici�n: reparto debe haberse creado
// Postcondici�n: se obtiene la fecha de salida
// Par�metros:
// reparto: TDAreparto del que se obtiene fechaSalida
// Devuelve un puntero al TDAreparto representando la fecha de salida
int getFechaSalida(repartoPtr reparto)

// Operaci�n de obtenci�n de EstadoEntrega
// Precondici�n: reparto debe haberse creado
// Postcondici�n: se obtiene el estado de la entrega
// Par�metros:
// reparto: TDAreparto del que se obtiene EstadoEntrega
// Devuelve un booleando representando el estado de la entrega
bool EstadoEntrega(repartoPtr reparto)

// Operaci�n de obtenci�n de Motivo
// Precondici�n: reparto debe haberse creado
// Postcondici�n: se obtiene el motivo
// Par�metros:
// reparto: TDAreparto del que se obtiene el motivo
// Devuelve un puntero char representando el motivo
char* motivo(repartoPtr reparto)

// Operaci�n de asignaci�n de direccion de entrega de reparto
// Precondici�n: Reparto debe haberse creado
// Postcondici�n: Reparto cambia con el nuevo valor de direccEntrega
// Par�metros:
//  direccEntrega: puntero a char representando el valor de direccEntrega
// No devuelve nada
void* setDireccEntrega (repartoPtr direccEntrega);

// Operaci�n de asignaci�n de direccion de retiro de reparto
// Precondici�n: Reparto debe haberse creado
// Postcondici�n: Reparto cambia con el nuevo valor de direccRetiro
// Par�metros:
//  direccRetiro: puntero a char representando el valor de direccRetiro
// No devuelve nada
void* setDireccRetiro (repartoPtr direccRetiro);

// Operaci�n de asignaci�n de fecha de entrega de reparto
// Precondici�n: Reparto debe haberse creado
// Postcondici�n: Reparto cambia con el nuevo valor de fechaEntrega
// Par�metros:
//   fechaEntrega: TDAfechaEntrega que cambia el valor de la fecha de entrega
// No devuelve nada
void* setFechaEntrega(repartoPtr fechaEntrega);

// Operaci�n de asignaci�n de fecha de salida de reparto
// Precondici�n: Reparto debe haberse creado
// Postcondici�n: Reparto cambia con el nuevo valor de fechaSalida
// Par�metros:
//  fechaSalida: TDAfecha donde se asigna el nuevo valor de fechaSalida
// No devuelve nada
void* setFechaSalida (repartoPtr FechaSalida);

// Operaci�n de asignaci�n de estado de entrega de reparto
// Precondici�n: Reparto debe haberse creado
// Postcondici�n: Reparto cambia con el nuevo valor de estadoEntrega
// Par�metros:
//  estadoEntrega: booleano representando el valor de estadoEntrega
// No devuelve nada
void* setEstadoEntrega (repartoPtr estadoEntrega);

// Operaci�n de asignaci�n de motivo de incumplimiento de reparto
// Precondici�n: Reparto debe haberse creado
// Postcondici�n: Reparto cambia con el nuevo valor de motivo
// Par�metros:
//  motivo: puntero a char representando el valor de motivo
// No devuelve nada
void* setMotivo (repartoPtr motivo);

#endif // TDAREPARTO_INCLUDED
