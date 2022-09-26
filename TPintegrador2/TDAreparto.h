#ifndef TDAREPARTO_INCLUDED
#define TDAREPARTO_INCLUDED

struct reparto{
    char* direccEntrega;
    char* direccRetiro;
    Pilaptr*;
    horaSalidaPtr*;
    horaLlegadaPtr*;
}reparto;

typedef reparto* repartoPtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: El reparto no ha sido creado
// Postcondici�n: se crea un reparto con direccEntrega, direccRetiro, pila, horaSalida, horaLlegada y motivo
// Par�metros:
// direccEntrega: representa la direccion de entrega del paquete
// direccRetiro: representa la direccion de retiro del paquete
// Pila: TDApila donde se guardara el orden de los paquetes
// HoraSalida: TDAhoraSalida representa la hora de salida del paquete
// HoraLlegada: TDAhoraLlegada representa la hora de Llegada del paquete
// Devuelve un puntero a la estructura Reparto
repartoPtr crearReparto(char* direccEntrega, char* direccRetiro, Pilaptr*, horaSalidaPtr*, horaLlegadaPtr*)


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

// Operaci�n de obtenci�n de HoraEntrega
// Precondici�n: reparto debe haberse creado
// Postcondici�n: se obtiene la hora de entrega
// Par�metros:
// reparto: TDAreparto del que se obtiene la hora de entrega
// Devuelve un puntero al TDAreparto representando la hora de entrega
int getHoraEntrega(repartoPtr reparto)

// Operaci�n de obtenci�n de HoraLlegada
// Precondici�n: reparto debe haberse creado
// Postcondici�n: se obtiene la hora de salida
// Par�metros:
// reparto: TDAreparto del que se obtiene la hora llegada
// Devuelve un puntero al TDAreparto representando la hora de llegada
int getHoraLlegada(repartoPtr reparto)

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

// Operaci�n de asignaci�n de hora de entrega de reparto
// Precondici�n: Reparto debe haberse creado
// Postcondici�n: Reparto cambia con el nuevo valor de HoraEntrega
// Par�metros:
//   HoraEntrega: TDAHoraEntrega que cambia el valor de la hora de entrega
// No devuelve nada
void* setHoraEntrega(repartoPtr HoraEntrega);

// Operaci�n de asignaci�n de hora de llegada de reparto
// Precondici�n: Reparto debe haberse creado
// Postcondici�n: Reparto cambia con el nuevo valor de HoraLlegada
// Par�metros:
//  HoraLlegada: TDAHoraLlegada donde se asigna el nuevo valor de HoraLlegada
// No devuelve nada
void* setHoraLlegada (repartoPtr HoraLlegada);

#endif // TDAREPARTO_INCLUDED
