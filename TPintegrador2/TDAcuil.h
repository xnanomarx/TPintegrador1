#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED
#include <stdbool.h>
typedef struct cuil{
    char* cuil;
    char genero;
}cuil;

typedef cuil* cuilPtr;

// Función de creación de cuil
// Precondicion: debe haberse creado Cliente
// Postcondición: Se crea un cuil único a validar ingresado por el usuario
// Parámetros:
// dni: recibe un entero con el dni del cliente
// genero: recibe un char indicando el genero
// no devuelve nada
cuilPtr crearCuil(char* cuil);

// Operación de destrucción (Destructor)
// Precondición: Cuil debe haber sido creado
// Postcondición: Se destruye cuil y se libera el espacio que utilizaba
// Parámetros:
//   cuil: TDAcuil a destruir
// Devuelve NULL
cuilPtr destruirCuil(cuilPtr cuil);

// Función de validar cuil
// Precondicion: debe haberse creado cuil
// Postcondición: Se valida el cuil ingresado por el usuario
// Parámetros:
// cuil: recibe un entero con el cuil del cliente
// genero: recibe un char indicando M para masculino y F para femenino
// genero: recibe un char indicando el genero
// devuelve un booleano con el resultado de la validación del cuil
bool validarCuil(char* cuil, char genero);

// Función de obtener cuil
// Precondicion: debe haberse creado cuil
// Postcondición: Se obtiene el cuil ingresado por el usuario
// Parámetros:
// cuil: recibe el cuil del cliente a obtener
// devuelve un puntero a char con el valor del cuil
char* getCuil(cuilPtr cuil);

// Función de mostrarCuil
// Precondicion: debe haberse creado cuil
// Postcondición: Se muestra el cuil ingresado por el usuario
// Parámetros:
// cuil: recibe el cuil del cliente a mostrar
// No devuelve nada, imprime el cuil del cliente
void mostrarCuil(cuilPtr cuil);








#endif // TDACUIL_H_INCLUDED
