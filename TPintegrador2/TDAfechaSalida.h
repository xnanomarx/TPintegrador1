#ifndef TDAFECHASALIDA_H_INCLUDED
#define TDAFECHASALIDA_H_INCLUDED
#include "TDAfecha.h"
typedef struct FechaSalida{
    int FechaPtr;
}FechaSalida;

typedef FechaSalida* FechaSalidaPtr;

// Operación de creación (Constructor)
// Precondición: La FechaSalida no ha sido creada
// Postcondición: Se ha creado la FechaSalida con TDAFecha
// Parámetros:
//   fecha: TDAFecha del que se obtiene la fecha
// Devuelve un puntero a la estructura FechaSalida en memoria dinamica
FechaSalidaPtr crearFechaSalida(fecha);


// Operación de destrucción (Destructor)
// Precondición: FechaSalida debe haberse creado con crearFechaEntrega
// Postcondición: Se destruye FechaSalida y se libera la memoria que ocupaba
// Parámetros:
//   FechaSalida: TDAFechaSalida a destruir
// Devuelve NULL
FechaSalidaPtr destruirFechaSalida(FechaSalidaPtr FechaSalida);



// Operación de obtencion de FechaSalida
// Precondición: FechaSalida debe haberse creado
// Postcondición: Se obtiene FechaSalida
// Parámetros:
//  fecha: TDAFecha del que se obtiene fecha
// Devuelve TDAFechaSalida correspondiente
int getFechaSalida(FechaPtr Fecha);



// Operación de asignacion de FechaSalida
// Precondición: FechaSalida debe haberse creado
// Postcondición: FechaSalida cambia con el nuevo valor
// Parámetros:
//  FechaSalida: TDAFechaSalida al que se le asignara el nuevo valor de FechaSalida
// No devuelve un valor
void setFechaSalida(FechaPtr Fecha);

#endif // TDAFECHASALIDA_H_INCLUDED
