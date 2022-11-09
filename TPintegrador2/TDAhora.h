#ifndef TDAHORA_H_INCLUDED
#define TDAHORA_H_INCLUDED

typedef struct hora{
    int horas;
    int minutos;
}hora;

typedef hora* horaPtr;

// Operación de creación (Constructor)
// Precondición: La hora no ha sido creada.
// Postcondición: Se crea una hora con horas y minutos.
// Parámetros:
//   minutos: entero representando los minutos de la hora
//   horas: entero representando la hora del dia
// Devuelve puntero a la estructura Hora en memoria dinamica
horaPtr crearHora(int horaingr, int minutoingr);

// Operación de destrucción (Destructor)
// Precondición: Hora debe haberse creado con crearHora
// Postcondición: Se destruye Hora y se libera la memoria que ocupaba
// Parámetros:
//   hora: TDAFHora a destruir
// Devuelve NULL
horaPtr destruirHora(horaPtr hora);

// Operación de obtencion de los minutos de la hora
// Precondición: Hora debe haberse creado
// Postcondición: Se obtienen los minutos de la hora
// Parámetros:
//  hora: TDAHora del que se obtienen los minutos
// Devuelve un entero representando los minutos del dia
int getMinutos(horaPtr hora);

// Operación de obtencion de la hora
// Precondición: Hora debe haberse creado
// Postcondición: Se obtiene la hora
// Parámetros:
//  Hora: TDAHora del que se obtiene la hora
// Devuelve un entero representando La hora
int gethoras(horaPtr hora);

// Operación de asignacion de los minutos de la hora
// Precondición: Hora debe haberse creado
// Postcondición: Hora cambia con el nuevo valor minutos
// Parámetros:
//  Hora: TDAHora al que se asignara el nuevo valor de hora
//  minutos: entero representando el nuevo valor de los minutos de hora
// No devuelve un valor
void setMinutos(horaPtr hora, int newminuto);

// Operación de asignacion de las horas
// Precondición: Hora debe haberse creado
// Postcondición: Hora cambia con el nuevo valor de las horas
// Parámetros:
//  Hora: TDAHora al que se asignara el nuevo valor de las horas
//  horas: entero representando el nuevo valor de las horas
// No devuelve un valor
void sethoras(horaPtr hora, int newhora);

#endif // TDAHORA_H_INCLUDED
