#ifndef TDACHOFER_INCLUDED
#define TDACHOFER_INCLUDED

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

// Operación de obtención de Cuil del Chofer
// Precondición: Chofer debe haberse creado
// Postcondición: Se obtiene el cuil del chofer
// Parámetros:
//Chofer: TDAChofer del que se obtiene el cuil
// Devuelve un int representando el cuil
int getCuil(ChoferPtr Chofer)

// Operación de obtención de Domicilio del chofer
// Precondición: Debe haberse creado chofer
// Postcondición: Se obtiene el domicilio
// Parámetros:
//   Chofer: TDAchofer del que se obtiene el domicilio
// Devuelve un puntero al TDAdomicilio del chofer
char* getDomicilio(DomicilioPtr domicilio)

#endif // TDACHOFER_INCLUDED
