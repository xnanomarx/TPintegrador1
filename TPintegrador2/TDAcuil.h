#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED

typedef struct cuil{
    int cuil;
}cuil;

typedef cuil* cuilPtr;

// Funci�n de creaci�n de cuil
// Precondicion: debe haberse creado Cliente
// Postcondici�n: Se crea un cuil �nico
// Par�metros:
// dni: recibe un vector con el dni del cliente
// genero: recibe un char indicando el genero
cuilPtr crearCuil(int cuil);

// Funci�n de validar cuil
// Precondicion: debe haberse creado cuil
// Postcondici�n: Se valida el cuil ingresado por el usuario
// Par�metros:
// cuil: recibe
// genero: recibe un char indicando el genero
cuilPtr validarCuil(int cuil, char genero);








#endif // TDACUIL_H_INCLUDED
