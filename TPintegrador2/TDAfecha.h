#ifndef TDAFECHA_H_INCLUDED
#define TDAFECHA_H_INCLUDED

typedef struct Fecha{
    int dia;
    int mes;
    int anio;
    horaPtr hora;
}Fecha;

typedef Fecha* FechaPtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: La fecha no ha sido creada.
// Postcondici�n: Se crea una fecha con dia, mes, a�o y hora.
// Par�metros:
//   hora: TDAHora
//   dia: entero representando el dia del mes
//   mes: entero representando el mes
//   anio: entero representando el a�o
// Devuelve puntero a la estructura Fecha en memoria dinamica
FechaPtr crearFecha(int hora, int dia, int mes, int anio);

// Operaci�n de destrucci�n (Destructor)
// Precondici�n: Fecha debe haberse creado con crearFecha
// Postcondici�n: Se destruye fecha y se libera la memoria que ocupaba
// Par�metros:
//   fecha: TDAFecha a destruir
// Devuelve NULL
FechaPtr destruirFecha(FechaPtr fecha);

// Operaci�n de obtencion del dia del mes
// Precondici�n: Fecha debe haberse creado
// Postcondici�n: Se obtiene el dia del mes de fecha
// Par�metros:
//  fecha: TDAFecha del que se obtiene el d�a
// Devuelve un entero representando el dia del mes
int getDia(FechaPtr Fecha);

// Operaci�n de obtencion del mes
// Precondici�n: Fecha debe haberse creado
// Postcondici�n: Se obtiene el mes de fecha
// Par�metros:
//  fecha: TDAFecha del que se obtiene el mes
// Devuelve un entero representando el mes
int getMes(FechaPtr Fecha);

// Operaci�n de obtencion del a�o
// Precondici�n: Fecha debe haberse creado
// Postcondici�n: Se obtiene el a�o de fecha
// Par�metros:
//  fecha: TDAFecha del que se obtiene el a�o
// Devuelve un entero representando el a�o
int getAnio(FechaPtr Fecha);

// Operaci�n de asignacion del dia del mes
// Precondici�n: Fecha debe haberse creado
// Postcondici�n: Fecha cambia con el nuevo valor de dia
// Par�metros:
//  fecha: TDAFecha al que se asignara el nuevo valor de dia
//  dia: entero representando el nuevo valor de dia del mes
// No devuelve un valor
void setDia(FechaPtr fecha, int dia);

// Operaci�n de asignacion del mes
// Precondici�n: Fecha debe haberse creado
// Postcondici�n: Fecha cambia con el nuevo valor del mes
// Par�metros:
//  fecha: TDAFecha al que se asignara el nuevo valor del mes
//  mes: entero representando el nuevo valor del mes
// No devuelve un valor
void setMes(FechaPtr fecha, int mes);

// Operaci�n de asignacion del a�o
// Precondici�n: Fecha debe haberse creado
// Postcondici�n: Fecha cambia con el nuevo valor del a�o
// Par�metros:
//  fecha: TDAFecha al que se asignara el nuevo valor del a�o
//  anio: entero representando el nuevo valor del a�o
// No devuelve un valor
void setAnio(FechaPtr fecha, int anio);

#endif // TDAFECHA_H_INCLUDED
