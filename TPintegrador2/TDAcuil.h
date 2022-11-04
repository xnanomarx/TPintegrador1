#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED

typedef struct cuil{
    char cuil[11];
}cuil;

typedef cuil* cuilPtr;

// Función de creación de cuil
// Precondicion: debe haberse creado Cliente
// Postcondición: Se crea un cuil único
// Parámetros:
// dni: recibe un vector con el dni del cliente
// genero: recibe un char indicando el genero
cuilPtr crearCuil(char cuil[11]);

// Operación de destrucción (Destructor)
// Precondición: dimension debe haberse creado con crearCuil
// Postcondición: se destruye cuil y se libera la memoria ocupada
// Parámetros:
// dimension: TDAcuil a destruir
// Devuelve NULL
cuilPtr destruirCuil(cuilPtr cuil);

// Función de validar cuil
// Precondicion: debe haberse creado cuil
// Postcondición: Se valida el cuil ingresado por el usuario
// Parámetros:
// cuil: recibe
// genero: recibe un char indicando el genero
void validarCuil(char cuil[11]);

// Operación de obtención de cuil
// Precondición: cuil debe haberse creado
// Postcondición: se obtiene el cuil
// Parámetros:
// cuil: TDAcuil del que se obtiene el cuil
// Devuelve un puntero char representando el cuil
char* getCuil(cuilPtr cuil);

// Operación de mostrar cuil
// Precondición: cuil debe haberse creado
// Postcondición: se imprime el cuil
// Parámetros:
// cuil: TDAcuil del que se obtiene el cuil
// No devuelve nada, imprime el valor de cuil
void mostrarCuil(cuilPtr cuil);








#endif // TDACUIL_H_INCLUDED
