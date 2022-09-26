#ifndef TDAFECHAENTREGA_H_INCLUDED
#define TDAFECHAENTREGA_H_INCLUDED

typedef struct FechaEntrega{
    int FechaPtr;
}FechaEntrega;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: La FechaEntrega no ha sido creada
// Postcondici�n: Se ha creado la FechaEntrega con TDAFecha
// Par�metros:
//   fecha: TDAFecha del que se obtiene la fecha
// Devuelve un puntero a la estructura FechaEntrega en memoria dinamica
FechaEntregaPtr crearFechaEntrega(fecha);


// Operaci�n de destrucci�n (Destructor)
// Precondici�n: FechaEntrega debe haberse creado con crearFechaEntrega
// Postcondici�n: Se destruye FechaEntrega y se libera la memoria que ocupaba
// Par�metros:
//   FechaEntrega: TDAFechaEntrega a destruir
// Devuelve NULL
FechaEntregaPtr destruirFechaEntrega(FechaEntregaPtr FechaEntrega);



// Operaci�n de obtencion de FechaEntrega
// Precondici�n: FechaEntrega debe haberse creado
// Postcondici�n: Se obtiene FechaEntrega
// Par�metros:
//  fecha: TDAFecha del que se obtiene fecha
// Devuelve TDAFechaEntrega correspondiente
int getFechaEntrega(FechaPtr Fecha);



// Operaci�n de asignacion de FechaEntrega
// Precondici�n: FechaEntrega debe haberse creado
// Postcondici�n: FechaEntrega cambia con el nuevo valor
// Par�metros:
//  FechaEntrega: TDAFechaEntrega al que se le asignara el nuevo valor de FechaEntrega
// No devuelve un valor
void setFechaEntrega(FechaPtr Fecha);

#endif // TDAFECHAENTREGA_H_INCLUDED
