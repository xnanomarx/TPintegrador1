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

// Operación de creación (Constructor)
// Precondición: El reparto no ha sido creado
// Postcondición: se crea un reparto con direccEntrega, direccRetiro, pila, horaSalida, horaLlegada y motivo
// Parámetros:
// direccEntrega: representa la direccion de entrega del paquete
// direccRetiro: representa la direccion de retiro del paquete
// Pila: TDApila donde se guardara el orden de los paquetes
// HoraSalida: TDAhoraSalida representa la hora de salida del paquete
// HoraLlegada: TDAhoraLlegada representa la hora de Llegada del paquete
// Devuelve un puntero a la estructura Reparto
repartoPtr crearReparto(char* direccEntrega, char* direccRetiro, Pilaptr*, horaSalidaPtr*, horaLlegadaPtr*)


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

// Operación de obtención de HoraEntrega
// Precondición: reparto debe haberse creado
// Postcondición: se obtiene la hora de entrega
// Parámetros:
// reparto: TDAreparto del que se obtiene la hora de entrega
// Devuelve un puntero al TDAreparto representando la hora de entrega
int getHoraEntrega(repartoPtr reparto)

// Operación de obtención de HoraLlegada
// Precondición: reparto debe haberse creado
// Postcondición: se obtiene la hora de salida
// Parámetros:
// reparto: TDAreparto del que se obtiene la hora llegada
// Devuelve un puntero al TDAreparto representando la hora de llegada
int getHoraLlegada(repartoPtr reparto)

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

// Operaciòn de asignaciòn de hora de entrega de reparto
// Precondiciòn: Reparto debe haberse creado
// Postcondiciòn: Reparto cambia con el nuevo valor de HoraEntrega
// Paràmetros:
//   HoraEntrega: TDAHoraEntrega que cambia el valor de la hora de entrega
// No devuelve nada
void* setHoraEntrega(repartoPtr HoraEntrega);

// Operaciòn de asignaciòn de hora de llegada de reparto
// Precondiciòn: Reparto debe haberse creado
// Postcondiciòn: Reparto cambia con el nuevo valor de HoraLlegada
// Paràmetros:
//  HoraLlegada: TDAHoraLlegada donde se asigna el nuevo valor de HoraLlegada
// No devuelve nada
void* setHoraLlegada (repartoPtr HoraLlegada);

#endif // TDAREPARTO_INCLUDED
