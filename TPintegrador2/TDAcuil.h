#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED

typedef struct cuil{
    char cuil[11];
}cuil;

typedef cuil* cuilPtr;

// Funci�n de creaci�n de cuil
// Precondicion: debe haberse creado Cliente
// Postcondici�n: Se crea un cuil �nico
// Par�metros:
// dni: recibe un vector con el dni del cliente
// genero: recibe un char indicando el genero
cuilPtr crearCuil(char cuil[11]);

// Operaci�n de destrucci�n (Destructor)
// Precondici�n: dimension debe haberse creado con crearCuil
// Postcondici�n: se destruye cuil y se libera la memoria ocupada
// Par�metros:
// dimension: TDAcuil a destruir
// Devuelve NULL
cuilPtr destruirCuil(cuilPtr cuil);

// Funci�n de validar cuil
// Precondicion: debe haberse creado cuil
// Postcondici�n: Se valida el cuil ingresado por el usuario
// Par�metros:
// cuil: recibe
// genero: recibe un char indicando el genero
void validarCuil(char cuil[11]);

// Operaci�n de obtenci�n de cuil
// Precondici�n: cuil debe haberse creado
// Postcondici�n: se obtiene el cuil
// Par�metros:
// cuil: TDAcuil del que se obtiene el cuil
// Devuelve un puntero char representando el cuil
char* getCuil(cuilPtr cuil);

// Operaci�n de mostrar cuil
// Precondici�n: cuil debe haberse creado
// Postcondici�n: se imprime el cuil
// Par�metros:
// cuil: TDAcuil del que se obtiene el cuil
// No devuelve nada, imprime el valor de cuil
void mostrarCuil(cuilPtr cuil);








#endif // TDACUIL_H_INCLUDED
