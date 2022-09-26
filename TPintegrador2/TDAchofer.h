#ifndef TDACHOFER_INCLUDED
#define TDACHOFER_INCLUDED
#include "TDAdomicilio.h"
#include "TDAcuil.h"
#include "util.h"

typedef struct chofer{
   char* nombre;
   char* apellido;
   domicilioPtr;
   cuilPtr;
} chofer;

typedef chofer* choferPtr;

// Operación de creación (Constructor)
// Precondición: El chofer no ha sido creado
// Postcondición: Se crea un chofer con nombre, apellido, domicilio y cuil.
// Parámetros:
//nombre: representa el nombre del chofer
//apellido: representa el apellido del chofer
//domicilio: TDAdomicilio, representa el domicilio del chofer
//cuil: representa el cuil del chofer
// Devuelve un puntero a la estructura Chofer
ChoferPtr crearChofer(char* nombre, char* apellido, domicilio, int cuil)


// Operación de destrucción (Destructor)
// Precondición:Chofer debe haberse creado con crearChofer
// Postcondición:Se destruye chofer y se libera el espacio que utilizaba
// Parámetros:
// Chofer: TDAChofer a destruir
// Devuelve NULL
ChoferPtr destruirChofer(ChoferPtr Chofer)


// Operación de obtención de Nombre Chofer
// Precondición: Chofer debe haberse creado
// Postcondición: Se obtiene el nombre del chofer
// Parámetros:
//Chofer: TDAChofer del que se obtiene el nombre
// Devuelve un char representando el nombre
char getNombreChofer(ChoferPtr chofer)


// Operación de obtención de Apellido Chofer
// Precondición: Chofer debe haberse creado
// Postcondición: Se obtiene el apellido del chofer
// Parámetros:
//Chofer: TDAChofer del que se obtiene el apellido
// Devuelve un char representando el apellido
char getApellidoChofer(ChoferPtr Chofer)


// Operacion de asignacion de nombre del chofer
// Precondicion: chofer debe haberse creado
// Postcondicion: chofer cambia con el nuevo nombre del chofer
// Parametros:
//  chofer: TDAchofer al que se asignara un nuevo valor de nombre de chofer
//   nombre: char representando el nuevo valor del chofer
// No devuelve valor
void setNombreChofer(ChoferPtr, char* nombre)

// Operacion de asignacion de apellido del chofer
// Precondicion: chofer debe haberse creado
// Postcondicion: chofer cambia con el nuevo valor del apellido del chofer
// Parametros:
//  chofer: TDAchofer del que se asignara un nuevo valor al apellido
//  apellido: char representando el apellido del chofer
// No devuelve valor.
void setApellidoChofer(ChoferPtf, char* apellido)


#endif // TDACHOFER_INCLUDED
