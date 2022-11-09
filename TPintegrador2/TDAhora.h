#ifndef TDAHORA_H_INCLUDED
#define TDAHORA_H_INCLUDED

typedef struct hora{
    int horas;
    int minutos;
}hora;

typedef hora* horaPtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: La hora no ha sido creada.
// Postcondici�n: Se crea una hora con horas y minutos.
// Par�metros:
//   minutos: entero representando los minutos de la hora
//   horas: entero representando la hora del dia
// Devuelve puntero a la estructura Hora en memoria dinamica
horaPtr crearHora(int horaingr, int minutoingr);

// Operaci�n de destrucci�n (Destructor)
// Precondici�n: Hora debe haberse creado con crearHora
// Postcondici�n: Se destruye Hora y se libera la memoria que ocupaba
// Par�metros:
//   hora: TDAFHora a destruir
// Devuelve NULL
horaPtr destruirHora(horaPtr hora);

// Operaci�n de obtencion de los minutos de la hora
// Precondici�n: Hora debe haberse creado
// Postcondici�n: Se obtienen los minutos de la hora
// Par�metros:
//  hora: TDAHora del que se obtienen los minutos
// Devuelve un entero representando los minutos del dia
int getMinutos(horaPtr hora);

// Operaci�n de obtencion de la hora
// Precondici�n: Hora debe haberse creado
// Postcondici�n: Se obtiene la hora
// Par�metros:
//  Hora: TDAHora del que se obtiene la hora
// Devuelve un entero representando La hora
int gethoras(horaPtr hora);

// Operaci�n de asignacion de los minutos de la hora
// Precondici�n: Hora debe haberse creado
// Postcondici�n: Hora cambia con el nuevo valor minutos
// Par�metros:
//  Hora: TDAHora al que se asignara el nuevo valor de hora
//  minutos: entero representando el nuevo valor de los minutos de hora
// No devuelve un valor
void setMinutos(horaPtr hora, int newminuto);

// Operaci�n de asignacion de las horas
// Precondici�n: Hora debe haberse creado
// Postcondici�n: Hora cambia con el nuevo valor de las horas
// Par�metros:
//  Hora: TDAHora al que se asignara el nuevo valor de las horas
//  horas: entero representando el nuevo valor de las horas
// No devuelve un valor
void sethoras(horaPtr hora, int newhora);

#endif // TDAHORA_H_INCLUDED
