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

// Operación de creación (Constructor)
// Precondición: el Paquete no ha sido creado
// Postcondición: se crea un paquete con motivo, estadoEntrega, FechaSalida, FechaEntrega, Dimensiones y codigo.
// Parámetros:
//  motivo: char que representa el motivo del incumplimiento de la entrega
//  estadoEntrega: bool que representa si se ha entregado o no el paquete
//  FechaSalida: TDAFechaSalida representa la fecha de salida del paquete
//  FechaEntrega: TDAFechaEntrega representa la fecha de entrega del paquete
//  Dimensiones: TDADimensiones representa las dimensiones del paquete
//  codigo: entero representando el código del paquete
// Devuelve un puntero a la estructura Paquete en memoria dinámica
paquetePtr crearPaquete (char* motivo, bool estadoEntrega, int codigo, FechaSalidaPtr*, FechaEntregaPtr*, DimensionesPtr*);

// Operación de destrucción (Destructor)
// Precondición: Paquete debe haber sido creado
// Postcondición: Se destruye paquete y se libre el espacio que utilizaba
// Parámetros:
//  paquete: TDA paquete a destruir.
// Devuelve NULL
paquetePtr destruirPaquete(PaquetePtr paquete);

// Operación de obtención de Motivo
// Precondición: Paquete debe haberse creado
// Postcondición: se obtiene el motivo
// Parámetros:
// paquete: TDAPaquete del que se obtiene el motivo
// Devuelve un puntero char representando el motivo
char* getmotivo(PaquetePtr Paquete)


// Operación de obtención de EstadoEntrega
// Precondición: Paquete debe haberse creado
// Postcondición: se obtiene el estado de la entrega
// Parámetros:
// paquete: TDAPaquete del que se obtiene EstadoEntrega
// Devuelve un booleando representando el estado de la entrega
bool getEstadoEntrega(PaquetePtr paquete)

// Operación de obtención de código de paquete
// Precondición: Paquete debe haber sido creado
// Postcondición: Se obtiene codigo de paquete
// Parámetros:
//  codigo: TDApaquete del que se obtiene el codigo
// Devuelve un entero representando el código del paquete
int getCodigo(PaquetePtr paquete);

// Operación de asignacion de motivo
// Precondición: Motivo debe haberse creado
// Postcondición: Paquete cambia con el nuevo motivo
// Parámetros:
//  Paquete: TDAPaquete al que se le asignara el nuevo motivo
//  motivo: char representando el nuevo motivo de incumplimiento
// No devuelve un valor
void setmotivo(PaquetePtr paquete, char* motivo);

// Operación de asignacion de estadoEntrega
// Precondición: estadoEntrega debe haberse creado
// Postcondición: Paquete cambia con el nuevo estadoEntrega
// Parámetros:
//  Paquete: TDAPaquete al que se le asignara el nuevo estado de entrega
//  estadoEntrega: booleano representando el nuevo estado de entrega
// No devuelve un valor
void setEstadoEntrega(PaquetePtr paquete, bool estadoEntrega);

// Operación de asignacion de codigo
// Precondición: codigo debe haberse creado
// Postcondición: Paquete cambia con el nuevo codigo
// Parámetros:
//  Paquete: TDAPaquete al que se le asignara el nuevo codigo
//  codigo: entero representando el nuevo codigo de paquete
// No devuelve un valor
void setCodigo(PaquetePtr paquete, int codigo);

#endif // TDAPAQUETE_INCLUDED
