#ifndef TDACHOFER_INCLUDED
#define TDACHOFER_INCLUDED

typedef struct chofer{
   char* nombre;
   char* apellido;
   domicilioPtr;
   cuilPtr;
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
ChoferPtr crearChofer(char* nombre, char* apellido, domicilio, int cuil)


// Operaci�n de destrucci�n (Destructor)
// Precondici�n:Chofer debe haberse creado con crearChofer
// Postcondici�n:Se destruye chofer y se libera el espacio que utilizaba
// Par�metros:
// Chofer: TDAChofer a destruir
// Devuelve NULL
ChoferPtr destruirChofer(ChoferPtr Chofer)


// Operaci�n de obtenci�n de Nombre Chofer
// Precondici�n: Chofer debe haberse creado
// Postcondici�n: Se obtiene el nombre del chofer
// Par�metros:
//Chofer: TDAChofer del que se obtiene el nombre
// Devuelve un char representando el nombre
char getNombreChofer(ChoferPtr chofer)


// Operaci�n de obtenci�n de Apellido Chofer
// Precondici�n: Chofer debe haberse creado
// Postcondici�n: Se obtiene el apellido del chofer
// Par�metros:
//Chofer: TDAChofer del que se obtiene el apellido
// Devuelve un char representando el apellido
char getApellidoChofer(ChoferPtr Chofer)

// Operaci�n de obtenci�n de Cuil del Chofer
// Precondici�n: Chofer debe haberse creado
// Postcondici�n: Se obtiene el cuil del chofer
// Par�metros:
//Chofer: TDAChofer del que se obtiene el cuil
// Devuelve un int representando el cuil
int getCuil(ChoferPtr Chofer)

// Operaci�n de obtenci�n de Domicilio del chofer
// Precondici�n: Debe haberse creado chofer
// Postcondici�n: Se obtiene el domicilio
// Par�metros:
//   Chofer: TDAchofer del que se obtiene el domicilio
// Devuelve un puntero al TDAdomicilio del chofer
char* getDomicilio(DomicilioPtr domicilio)

#endif // TDACHOFER_INCLUDED
