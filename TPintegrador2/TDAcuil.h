#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED

typedef struct cuil{
    char* cuil[11];
}cuil;

typedef cuil* cuilPtr;

// Funci�n de creaci�n de cuil
// Precondicion: debe haberse creado Cliente
// Postcondici�n: Se crea un cuil �nico
// Par�metros:
// dni: recibe un vector con el dni del cliente
// genero: recibe un char indicando el genero
cuilPtr crearCuil(char* cuil[11]);

// Funci�n de validar cuil
// Precondicion: debe haberse creado cuil
// Postcondici�n: Se valida el cuil ingresado por el usuario
// Par�metros:
// cuil: recibe
// genero: recibe un char indicando el genero
void validarCuil(char cuil[11]);








#endif // TDACUIL_H_INCLUDED
