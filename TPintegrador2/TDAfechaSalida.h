#ifndef TDAFECHASALIDA_H_INCLUDED
#define TDAFECHASALIDA_H_INCLUDED
#include "TDAfecha.h"
typedef struct FechaSalida{
    int FechaPtr;
}FechaSalida;

typedef FechaSalida* FechaSalidaPtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: La FechaSalida no ha sido creada
// Postcondici�n: Se ha creado la FechaSalida con TDAFecha
// Par�metros:
//   fecha: TDAFecha del que se obtiene la fecha
// Devuelve un puntero a la estructura FechaSalida en memoria dinamica
FechaSalidaPtr crearFechaSalida(fecha);


// Operaci�n de destrucci�n (Destructor)
// Precondici�n: FechaSalida debe haberse creado con crearFechaEntrega
// Postcondici�n: Se destruye FechaSalida y se libera la memoria que ocupaba
// Par�metros:
//   FechaSalida: TDAFechaSalida a destruir
// Devuelve NULL
FechaSalidaPtr destruirFechaSalida(FechaSalidaPtr FechaSalida);



// Operaci�n de obtencion de FechaSalida
// Precondici�n: FechaSalida debe haberse creado
// Postcondici�n: Se obtiene FechaSalida
// Par�metros:
//  fecha: TDAFecha del que se obtiene fecha
// Devuelve TDAFechaSalida correspondiente
int getFechaSalida(FechaPtr Fecha);



// Operaci�n de asignacion de FechaSalida
// Precondici�n: FechaSalida debe haberse creado
// Postcondici�n: FechaSalida cambia con el nuevo valor
// Par�metros:
//  FechaSalida: TDAFechaSalida al que se le asignara el nuevo valor de FechaSalida
// No devuelve un valor
void setFechaSalida(FechaPtr Fecha);

#endif // TDAFECHASALIDA_H_INCLUDED
