#ifndef TDAFECHA_H_INCLUDED
#define TDAFECHA_H_INCLUDED

typedef struct Fecha{
    int dia;
    int mes;
    int anio;
    horaPtr hora;
}Fecha;

typedef Fecha* FechaPtr;

// Operación de creación (Constructor)
// Precondición: La fecha no ha sido creada.
// Postcondición: Se crea una fecha con dia, mes, año y hora.
// Parámetros:
//   hora: TDAHora
//   dia: entero representando el dia del mes
//   mes: entero representando el mes
//   anio: entero representando el año
// Devuelve puntero a la estructura Fecha en memoria dinamica
FechaPtr crearFecha(int hora, int dia, int mes, int anio);

// Operación de destrucción (Destructor)
// Precondición: Fecha debe haberse creado con crearFecha
// Postcondición: Se destruye fecha y se libera la memoria que ocupaba
// Parámetros:
//   fecha: TDAFecha a destruir
// Devuelve NULL
FechaPtr destruirFecha(FechaPtr fecha);

// Operación de obtencion del dia del mes
// Precondición: Fecha debe haberse creado
// Postcondición: Se obtiene el dia del mes de fecha
// Parámetros:
//  fecha: TDAFecha del que se obtiene el día
// Devuelve un entero representando el dia del mes
int getDia(FechaPtr Fecha);

// Operación de obtencion del mes
// Precondición: Fecha debe haberse creado
// Postcondición: Se obtiene el mes de fecha
// Parámetros:
//  fecha: TDAFecha del que se obtiene el mes
// Devuelve un entero representando el mes
int getMes(FechaPtr Fecha);

// Operación de obtencion del año
// Precondición: Fecha debe haberse creado
// Postcondición: Se obtiene el año de fecha
// Parámetros:
//  fecha: TDAFecha del que se obtiene el año
// Devuelve un entero representando el año
int getAnio(FechaPtr Fecha);

// Operación de asignacion del dia del mes
// Precondición: Fecha debe haberse creado
// Postcondición: Fecha cambia con el nuevo valor de dia
// Parámetros:
//  fecha: TDAFecha al que se asignara el nuevo valor de dia
//  dia: entero representando el nuevo valor de dia del mes
// No devuelve un valor
void setDia(FechaPtr fecha, int dia);

// Operación de asignacion del mes
// Precondición: Fecha debe haberse creado
// Postcondición: Fecha cambia con el nuevo valor del mes
// Parámetros:
//  fecha: TDAFecha al que se asignara el nuevo valor del mes
//  mes: entero representando el nuevo valor del mes
// No devuelve un valor
void setMes(FechaPtr fecha, int mes);

// Operación de asignacion del año
// Precondición: Fecha debe haberse creado
// Postcondición: Fecha cambia con el nuevo valor del año
// Parámetros:
//  fecha: TDAFecha al que se asignara el nuevo valor del año
//  anio: entero representando el nuevo valor del año
// No devuelve un valor
void setAnio(FechaPtr fecha, int anio);

#endif // TDAFECHA_H_INCLUDED
