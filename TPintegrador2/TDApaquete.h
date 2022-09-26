#ifndef TDAPAQUETE_INCLUDED
#define TDAPAQUETE_INCLUDED

struct paquete{
    char* motivo;
    bool estadoEntrega;
    int codigo;
    FechaSalidaPtr*;
    FechaEntregaPtr*:
    DimensionesPtr*;
} paquete;

typedef paquete* paquetePtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: el Paquete no ha sido creado
// Postcondici�n: se crea un paquete con motivo, estadoEntrega, FechaSalida, FechaEntrega, Dimensiones y codigo.
// Par�metros:
//  motivo: char que representa el motivo del incumplimiento de la entrega
//  estadoEntrega: bool que representa si se ha entregado o no el paquete
//  FechaSalida: TDAFechaSalida representa la fecha de salida del paquete
//  FechaEntrega: TDAFechaEntrega representa la fecha de entrega del paquete
//  Dimensiones: TDADimensiones representa las dimensiones del paquete
//  codigo: entero representando el c�digo del paquete
// Devuelve un puntero a la estructura Paquete en memoria din�mica
paquetePtr crearPaquete (char* motivo, bool estadoEntrega, int codigo, FechaSalidaPtr*, FechaEntregaPtr*, DimensionesPtr*);

// Operaci�n de destrucci�n (Destructor)
// Precondici�n: Paquete debe haber sido creado
// Postcondici�n: Se destruye paquete y se libre el espacio que utilizaba
// Par�metros:
//  paquete: TDA paquete a destruir.
// Devuelve NULL
paquetePtr destruirPaquete(PaquetePtr paquete);

// Operaci�n de obtenci�n de Motivo
// Precondici�n: Paquete debe haberse creado
// Postcondici�n: se obtiene el motivo
// Par�metros:
// paquete: TDAPaquete del que se obtiene el motivo
// Devuelve un puntero char representando el motivo
char* getmotivo(PaquetePtr Paquete)


// Operaci�n de obtenci�n de EstadoEntrega
// Precondici�n: Paquete debe haberse creado
// Postcondici�n: se obtiene el estado de la entrega
// Par�metros:
// paquete: TDAPaquete del que se obtiene EstadoEntrega
// Devuelve un booleando representando el estado de la entrega
bool getEstadoEntrega(PaquetePtr paquete)

// Operaci�n de obtenci�n de c�digo de paquete
// Precondici�n: Paquete debe haber sido creado
// Postcondici�n: Se obtiene codigo de paquete
// Par�metros:
//  codigo: TDApaquete del que se obtiene el codigo
// Devuelve un entero representando el c�digo del paquete
int getCodigo(PaquetePtr paquete);

// Operaci�n de asignacion de motivo
// Precondici�n: Motivo debe haberse creado
// Postcondici�n: Paquete cambia con el nuevo motivo
// Par�metros:
//  Paquete: TDAPaquete al que se le asignara el nuevo motivo
//  motivo: char representando el nuevo motivo de incumplimiento
// No devuelve un valor
void setmotivo(PaquetePtr paquete, char* motivo);

// Operaci�n de asignacion de estadoEntrega
// Precondici�n: estadoEntrega debe haberse creado
// Postcondici�n: Paquete cambia con el nuevo estadoEntrega
// Par�metros:
//  Paquete: TDAPaquete al que se le asignara el nuevo estado de entrega
//  estadoEntrega: booleano representando el nuevo estado de entrega
// No devuelve un valor
void setEstadoEntrega(PaquetePtr paquete, bool estadoEntrega);

// Operaci�n de asignacion de codigo
// Precondici�n: codigo debe haberse creado
// Postcondici�n: Paquete cambia con el nuevo codigo
// Par�metros:
//  Paquete: TDAPaquete al que se le asignara el nuevo codigo
//  codigo: entero representando el nuevo codigo de paquete
// No devuelve un valor
void setCodigo(PaquetePtr paquete, int codigo);

#endif // TDAPAQUETE_INCLUDED
