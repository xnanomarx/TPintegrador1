#ifndef TDACLIENTE_INCLUDED
#define TDACLIENTE_INCLUDED

// Primitivas

struct cliente {
    char* nombre;
    char* apellido;
    domicilioPtr*;
    cuilPtr*;
} cliente;

typedef cliente* clientePtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: El cliente no ha sido creado.
// Postcondici�n: Se crea un cliente con nombre, apellido, domicilio y CUIL.
// Par�metros:
//   nombre: string representando el nombre del cliente
//   apellido: string representando el apellido del cliente
//   domicilio: TDAdomicilio que se crea al cliente
//   cuil: TDAcuilque se crea al cliente
// Devuelve un puntero a la estructura Cliente en memoria din�mica.
clientePtr crearCliente (char* nombre,char* apellido,domicilio,cuil);

// Operaci�n de destrucci�n (Destructor)
// Precondici�n: Cliente debe haber sido creado
// Postcondici�n: Se destruye cliente y se libera el espacio que utilizaba
// Par�metros:
//   cliente: TDAcliente a destruir
// Devuelve NULL
clientePtr destruirCLiente(clientePtr cliente);


// Operaci�n de obtenci�n de nombre de cliente
// Precondici�n: Cliente debe haber sido creado.
// Postcondici�n: Se obtiene nombre del cliente.
// Par�metros:
//   nombre: TDAcliente del que se obtiene el nombre
// Devuelve un puntero a char representando el nombre del cliente
char* getNombre(clientePtr nombre);

// Operaci�n de obtenci�n de apellido de cliente
// Precondici�n: Cliente debe haber sido creado.
// Postcondici�n: Se obtiene apellido del cliente.
// Par�metros:
//   apellido: TDAcliente del que se obtiene el apellido
// Devuelve un puntero a char representando el apellido del cliente
char* getApellido(clientePtr nombre);

// Operaci�n de obtenci�n de domicilio de cliente
// Precondici�n: Cliente debe haber sido creado.
// Postcondici�n: Se obtiene domicilio del cliente.
// Par�metros:
//   domicilio: TDAdomicilio del que se obtiene el domicilio
// Devuelve un puntero a la estructura TDAdomicilio del cliente
domicilio getDomicilio(clientePtr domicilio);

// Operaci�n de obtenci�n de CUIL de cliente
// Precondici�n: Cliente debe haber sido creado.
// Postcondici�n: Se obtiene CUIL del cliente.
// Par�metros:
//   cuil: TDAcuil del que se obtiene el cuil
// Devuelve un puntero al TDAcuil del cliente
cuil getCuil(clientePtr domicilio);

#endif // TDACLIENTE_INCLUDED
