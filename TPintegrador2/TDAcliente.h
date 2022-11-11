#ifndef TDACLIENTE_INCLUDED
#define TDACLIENTE_INCLUDED
#include "TDAdomicilio.h"
#include "TDAcuil.h"

// Primitivas

typedef struct cliente {
    char* nombre;
    char* apellido;
    domicilioPtr domicilio;
    cuilPtr cuil;
}cliente;

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
clientePtr crearCliente (char* nombre,char* apellido,domicilioPtr domicilio,cuilPtr cuil);

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
char* getNombreCliente(clientePtr nombre);

// Operaci�n de obtenci�n de apellido de cliente
// Precondici�n: Cliente debe haber sido creado.
// Postcondici�n: Se obtiene apellido del cliente.
// Par�metros:
//   apellido: TDAcliente del que se obtiene el apellido
// Devuelve un puntero a char representando el apellido del cliente
char* getApellidoCliente(clientePtr apellido);

// Operacion de asignacion de nombre del cliente
// Precondicion: cliente debe haberse creado
// Postcondicion: cliente cambia con el nuevo valor del nombre del cliente
// Parametros:
//  cliente: TDAcliente al que se asigna un nuevo valor de nombre
//  nombre: char representando el nombre del cliente
// No devuelve valor.
void setNombreCliente(clientePtr,char* nombre);

// Operacion de asignacion de apellido del cliente
// Precondicion: cliente debe haberse creado
// Postcondicion: cliente cambia con el nuevo valor del apellido del cliente
// Parametros:
//  cliente: TDAcliente al que se asigna un nuevo valor del apellido
//  apellido: char representando el apellido del cliente
// No devuelve valor.
void setApellidoCliente(clientePtr,char* apellido);

void setLocalidadCliente(clientePtr cliente, char* localidadc);
void setCalleCliente(clientePtr cliente, char* callec);
void setAlturaCliente(clientePtr cliente, char* altura);


// Operaci�n de asignaci�n de cuil
// Precondici�n: cliente debe haberse creado
// Postcondici�n: cuil cambia con el nuevo valor de tipo
// Par�metros:
//  cuil: string representando el cuil del usuario
// No devuelve nada
void setCuilCliente(clientePtr cliente,char* cuilc);


#endif // TDACLIENTE_INCLUDED
