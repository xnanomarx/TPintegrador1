#ifndef TDAREPARTO_INCLUDED
#define TDAREPARTO_INCLUDED


// Operación de creación (Constructor)
// Precondición: El reparto no ha sido creado
// Postcondición: se crea un reparto con direccEntrega, direccRetiro, fechaEntrega, fechaSalida,
// EstadoEntrega, motivo
// Parámetros:
// direccEntrega: representa la direccion de entrega del paquete
// direccRetiro: representa la direccion de retiro del paquete
// fechaEntrega: representa la fecha de entrega del paquete
// fechaSalida: representa la fecha de salida del paquete
// EstadoEntrega: representa el estado de la entrega del paquete
// Motivo: representa el motivo por el cual no se entrego el paquete
// Devuelve un puntero a la estructura Reparto
repartoPtr crearReparto(Char*direccEntrega, char*direccRetiro,FechaEntrega, FechaSalida, bool estadoEntrega,char*motivo)


// Operación de destrucción (Destructor)
// Precondición: reparto debe haberse creado con crearReparto
// Postcondición: se destruye el reparto y se libera la memoria ocupada
// Parámetros:
// vehiculo: TDAvehiculo a destruir
// Devuelve NULL
repartoPtr destruirReparto(repartoPtr reparto)


// Operación de obtención de direccEntrega
// Precondición: reparto debe haberse creado
// Postcondición: se obtiene la direccion de entrega
// Parámetros:
// reparto: TDAreparto del que se obtiene la direccEntrega
// Devuelve un puntero a char representando la direccion de entrega
char* getDirrecEntrega(repartoPtr reparto)

// Operación de obtención de direccRetiro
// Precondición: reparto debe haberse creado
// Postcondición: se obtiene la direccion de retiro
// Parámetros:
// reparto: TDAreparto del que se obtiene la direccRetiro
// Devuelve un puntero a char representando la direccion de retiro
char* getDireccRetiro(repartoPtr reparto)

// Operación de obtención de fechaEntrega
// Precondición: reparto debe haberse creado
// Postcondición: se obtiene la fecha de entrega
// Parámetros:
// reparto: TDAreparto del que se obtiene la fecha de entrega
// Devuelve un puntero al TDAreparto representando la fecha de entrega
int getFechaEntrega(repartoPtr reparto)

// Operación de obtención de fechaSalida
// Precondición: reparto debe haberse creado
// Postcondición: se obtiene la fecha de salida
// Parámetros:
// reparto: TDAreparto del que se obtiene fechaSalida
// Devuelve un puntero al TDAreparto representando la fecha de salida
int getFechaSalida(repartoPtr reparto)

// Operación de obtención de EstadoEntrega
// Precondición: reparto debe haberse creado
// Postcondición: se obtiene el estado de la entrega
// Parámetros:
// reparto: TDAreparto del que se obtiene EstadoEntrega
// Devuelve un booleando representando el estado de la entrega
bool EstadoEntrega(repartoPtr reparto)

// Operación de obtención de Motivo
// Precondición: reparto debe haberse creado
// Postcondición: se obtiene el motivo
// Parámetros:
// reparto: TDAreparto del que se obtiene el motivo
// Devuelve un puntero char representando el motivo
char* motivo(repartoPtr reparto)

// Operaciòn de asignaciòn de direccion de entrega de reparto
// Precondiciòn: Reparto debe haberse creado
// Postcondiciòn: Reparto cambia con el nuevo valor de direccEntrega
// Paràmetros:
//  direccEntrega: puntero a char representando el valor de direccEntrega
// No devuelve nada
void* setDireccEntrega (repartoPtr direccEntrega);

// Operaciòn de asignaciòn de direccion de retiro de reparto
// Precondiciòn: Reparto debe haberse creado
// Postcondiciòn: Reparto cambia con el nuevo valor de direccRetiro
// Paràmetros:
//  direccRetiro: puntero a char representando el valor de direccRetiro
// No devuelve nada
void* setDireccRetiro (repartoPtr direccRetiro);

// Operaciòn de asignaciòn de fecha de entrega de reparto
// Precondiciòn: Reparto debe haberse creado
// Postcondiciòn: Reparto cambia con el nuevo valor de fechaEntrega
// Paràmetros:
//   fechaEntrega: TDAfechaEntrega que cambia el valor de la fecha de entrega
// No devuelve nada
void* setFechaEntrega(repartoPtr fechaEntrega);

// Operaciòn de asignaciòn de fecha de salida de reparto
// Precondiciòn: Reparto debe haberse creado
// Postcondiciòn: Reparto cambia con el nuevo valor de fechaSalida
// Paràmetros:
//  fechaSalida: TDAfecha donde se asigna el nuevo valor de fechaSalida
// No devuelve nada
void* setFechaSalida (repartoPtr FechaSalida);

// Operaciòn de asignaciòn de estado de entrega de reparto
// Precondiciòn: Reparto debe haberse creado
// Postcondiciòn: Reparto cambia con el nuevo valor de estadoEntrega
// Paràmetros:
//  estadoEntrega: booleano representando el valor de estadoEntrega
// No devuelve nada
void* setEstadoEntrega (repartoPtr estadoEntrega);

// Operaciòn de asignaciòn de motivo de incumplimiento de reparto
// Precondiciòn: Reparto debe haberse creado
// Postcondiciòn: Reparto cambia con el nuevo valor de motivo
// Paràmetros:
//  motivo: puntero a char representando el valor de motivo
// No devuelve nada
void* setMotivo (repartoPtr motivo);

#endif // TDAREPARTO_INCLUDED
