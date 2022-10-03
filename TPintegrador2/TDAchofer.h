#ifndef TDACHOFER_INCLUDED
#define TDACHOFER_INCLUDED
#include "TDAdomicilio.h"
#include "TDAcuil.h"
#include "util.h"

typedef struct chofer{
   char* nombre;
   char* apellido;
   domicilioPtr domicilio;
   cuilPtr cuil;
} chofer;

typedef chofer* choferPtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: El chofer no ha sido creado
// Postcondici�n: Se crea un chofer con nombre, apellido, domicilio y cuil.
// Par�metros:
//nombre: representa el nombre del chofer
//apellido: representa el apellido del chofer
//domicilio: TDAdomicilio, representa el domicilio del chofer
//cuil: representa el cuil del chofer
// Devuelve un puntero a la estructura Chofer
choferPtr crearChofer(char* nombre, char* apellido, domicilioPtr domicilio,cuilPtr cuil);


// Operaci�n de destrucci�n (Destructor)
// Precondici�n:Chofer debe haberse creado con crearChofer
// Postcondici�n:Se destruye chofer y se libera el espacio que utilizaba
// Par�metros:
// Chofer: TDAChofer a destruir
// Devuelve NULL
<<<<<<< HEAD
<<<<<<< HEAD
choferPtr destruirChofer(choferPtr chofer);
=======
choferPtr destruirChofer(choferPtr Chofer);
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
=======
choferPtr destruirChofer(choferPtr chofer);
>>>>>>> main


// Operaci�n de obtenci�n de Nombre Chofer
// Precondici�n: Chofer debe haberse creado
// Postcondici�n: Se obtiene el nombre del chofer
// Par�metros:
//Chofer: TDAChofer del que se obtiene el nombre
// Devuelve un char representando el nombre
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
char* getNombreChofer(choferPtr chofer);
=======
char getNombreChofer(choferPtr chofer);
>>>>>>> origin/branchMariano
=======
char* getNombreChofer(choferPtr chofer);
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
=======
char* getNombreChofer(choferPtr chofer);
>>>>>>> main


// Operacion de asignacion de nombre del chofer
// Precondicion: chofer debe haberse creado
// Postcondicion: chofer cambia con el nuevo nombre del chofer
// Parametros:
//  chofer: TDAchofer al que se asignara un nuevo valor de nombre de chofer
//   nombre: char representando el nuevo valor del chofer
// No devuelve valor
void setNombreChofer(choferPtr, char* nombre);

// Operacion de asignacion de apellido del chofer
// Precondicion: chofer debe haberse creado
// Postcondicion: chofer cambia con el nuevo valor del apellido del chofer
// Parametros:
//  chofer: TDAchofer del que se asignara un nuevo valor al apellido
//  apellido: char representando el apellido del chofer
// No devuelve valor.
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
void setApellidoChofer(choferPtr, char* apellido);
=======
void setApellidoChofer(choferPtf, char* apellido);
>>>>>>> origin/branchMariano
=======
void setApellidoChofer(choferPtr, char* apellido);
>>>>>>> 00024848f45268e6c298694fd96aea8439aaa404
=======
void setApellidoChofer(choferPtr, char* apellido);
>>>>>>> main


#endif // TDACHOFER_INCLUDED
