#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED
#include <stdbool.h>
typedef struct cuil{
    char* cuil;
    char genero;
}cuil;

typedef cuil* cuilPtr;

// Funci�n de creaci�n de cuil
// Precondicion: debe haberse creado Cliente
// Postcondici�n: Se crea un cuil �nico a validar ingresado por el usuario
// Par�metros:
// dni: recibe un entero con el dni del cliente
// genero: recibe un char indicando el genero
// no devuelve nada
cuilPtr crearCuil(char* cuil);

// Operaci�n de destrucci�n (Destructor)
// Precondici�n: Cuil debe haber sido creado
// Postcondici�n: Se destruye cuil y se libera el espacio que utilizaba
// Par�metros:
//   cuil: TDAcuil a destruir
// Devuelve NULL
cuilPtr destruirCuil(cuilPtr cuil);

// Funci�n de validar cuil
// Precondicion: debe haberse creado cuil
// Postcondici�n: Se valida el cuil ingresado por el usuario
// Par�metros:
// cuil: recibe un entero con el cuil del cliente
// genero: recibe un char indicando M para masculino y F para femenino
// genero: recibe un char indicando el genero
// devuelve un booleano con el resultado de la validaci�n del cuil
bool validarCuil(char* cuil, char genero);

// Funci�n de obtener cuil
// Precondicion: debe haberse creado cuil
// Postcondici�n: Se obtiene el cuil ingresado por el usuario
// Par�metros:
// cuil: recibe el cuil del cliente a obtener
// devuelve un puntero a char con el valor del cuil
char* getCuil(cuilPtr cuil);

// Funci�n de mostrarCuil
// Precondicion: debe haberse creado cuil
// Postcondici�n: Se muestra el cuil ingresado por el usuario
// Par�metros:
// cuil: recibe el cuil del cliente a mostrar
// No devuelve nada, imprime el cuil del cliente
void mostrarCuil(cuilPtr cuil);








#endif // TDACUIL_H_INCLUDED
