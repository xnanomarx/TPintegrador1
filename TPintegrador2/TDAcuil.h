#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED

typedef struct cuil{
    int cuil;
}cuil;

typedef cuil* cuilPtr;

// Función de creación de cuil
// Precondicion: debe haberse creado Cliente
// Postcondición: Se crea un cuil único
// Parámetros:
// dni: recibe un vector con el dni del cliente
// genero: recibe un char indicando el genero
cuilPtr crearCuil(int cuil);

// Función de validar cuil
// Precondicion: debe haberse creado cuil
// Postcondición: Se valida el cuil ingresado por el usuario
// Parámetros:
// cuil: recibe
// genero: recibe un char indicando el genero
cuilPtr validarCuil(int cuil, char genero);








#endif // TDACUIL_H_INCLUDED
