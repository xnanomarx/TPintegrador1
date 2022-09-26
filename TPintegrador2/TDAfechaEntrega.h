#ifndef TDAFECHAENTREGA_H_INCLUDED
#define TDAFECHAENTREGA_H_INCLUDED

typedef struct FechaEntrega{
    int FechaPtr;
}FechaEntrega;

// Operación de creación (Constructor)
// Precondición: La FechaEntrega no ha sido creada
// Postcondición: Se ha creado la FechaEntrega con TDAFecha
// Parámetros:
//   fecha: TDAFecha del que se obtiene la fecha
// Devuelve un puntero a la estructura FechaEntrega en memoria dinamica
FechaEntregaPtr crearFechaEntrega(fecha);


// Operación de destrucción (Destructor)
// Precondición: FechaEntrega debe haberse creado con crearFechaEntrega
// Postcondición: Se destruye FechaEntrega y se libera la memoria que ocupaba
// Parámetros:
//   FechaEntrega: TDAFechaEntrega a destruir
// Devuelve NULL
FechaEntregaPtr destruirFechaEntrega(FechaEntregaPtr FechaEntrega);



// Operación de obtencion de FechaEntrega
// Precondición: FechaEntrega debe haberse creado
// Postcondición: Se obtiene FechaEntrega
// Parámetros:
//  fecha: TDAFecha del que se obtiene fecha
// Devuelve TDAFechaEntrega correspondiente
int getFechaEntrega(FechaPtr Fecha);



// Operación de asignacion de FechaEntrega
// Precondición: FechaEntrega debe haberse creado
// Postcondición: FechaEntrega cambia con el nuevo valor
// Parámetros:
//  FechaEntrega: TDAFechaEntrega al que se le asignara el nuevo valor de FechaEntrega
// No devuelve un valor
void setFechaEntrega(FechaPtr Fecha);

#endif // TDAFECHAENTREGA_H_INCLUDED
