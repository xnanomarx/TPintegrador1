#ifndef TDACHOFER_INCLUDED
#define TDACHOFER_INCLUDED
#include "TDAdomicilio.h"
#include "TDAcuil.h"
#include "util.h"

typedef struct chofer{
   char* nombreCh;
   char* apellidoCh;
   domicilioPtr domicilio;
   cuilPtr cuil;
}chofer;

typedef struct choferAux{
   char nombreChAux[50];
   char apellidoChAux[50];
   char calleAux[30];
   char localidadAux[30];
   int alturaAux;
   char cuilAux[12];
}choferAux;

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
choferPtr crearChofer(char* nombre, char* apellido, domicilioPtr domicilio,cuilPtr cuil);


// Operación de destrucción (Destructor)
// Precondición:Chofer debe haberse creado con crearChofer
// Postcondición:Se destruye chofer y se libera el espacio que utilizaba
// Parámetros:
// Chofer: TDAChofer a destruir
// Devuelve NULL
choferPtr destruirChofer(choferPtr chofer);


// Operación de obtención de Nombre Chofer
// Precondición: Chofer debe haberse creado
// Postcondición: Se obtiene el nombre del chofer
// Parámetros:
//Chofer: TDAChofer del que se obtiene el nombre
// Devuelve un char representando el nombre
char* getNombreChofer(choferPtr chofer);

// Operación de obtención de Apellido Chofer
// Precondición: Chofer debe haberse creado
// Postcondición: Se obtiene el apellido del chofer
// Parámetros:
//Chofer: TDAChofer del que se obtiene el apellido
// Devuelve un char representando el apellido
char* getApellidoChofer(choferPtr chofer);

char* getDomicilioChofer(choferPtr domicilio);

char* getCalleChofer(choferPtr chofer);

int getAlturaChofer(choferPtr chofer);

char* getLocalidadChofer(choferPtr chofer);

char* getCuilChofer(choferPtr chofer);

// Operacion de asignacion de nombre del chofer
// Precondicion: chofer debe haberse creado
// Postcondicion: chofer cambia con el nuevo nombre del chofer
// Parametros:
//  chofer: TDAchofer al que se asignara un nuevo valor de nombre de chofer
//   nombre: char representando el nuevo valor del chofer
// No devuelve valor
void setNombreChofer(choferPtr,char* nombre);

// Operacion de asignacion de apellido del chofer
// Precondicion: chofer debe haberse creado
// Postcondicion: chofer cambia con el nuevo valor del apellido del chofer
// Parametros:
//  chofer: TDAchofer del que se asignara un nuevo valor al apellido
//  apellido: char representando el apellido del chofer
// No devuelve valor.
void setApellidoChofer(choferPtr, char* apellido);

void setNombreChofer(choferPtr chofer, char* nombreset);

void setApellidoChofer(choferPtr chofer, char* apellidoset);

void setLocalidadChofer(choferPtr chofer, char* localidadset);

void setCalleChofer(choferPtr chofer, char* calleset);

void setAlturaChofer(choferPtr chofer, int alturaset);

void setCuilChofer(choferPtr chofer, char* cuilset);

void mostrarChofer(choferPtr chofer, int numChofer);

#endif // TDACHOFER_INCLUDED
