#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED

typedef struct cuil{
    char* cuil[11];
}cuil;

typedef cuil* cuilPtr;

// Función de creación de cuil
// Precondicion: debe haberse creado Cliente
// Postcondición: Se crea un cuil único
// Parámetros:
// dni: recibe un vector con el dni del cliente
// genero: recibe un char indicando el genero
cuilPtr crearCuil(char* cuil[11]);

// Función de validar cuil
// Precondicion: debe haberse creado cuil
// Postcondición: Se valida el cuil ingresado por el usuario
// Parámetros:
// cuil: recibe
// genero: recibe un char indicando el genero
void validarCuil(char cuil[11]);








#endif // TDACUIL_H_INCLUDED
