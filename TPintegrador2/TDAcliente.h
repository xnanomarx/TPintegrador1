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

// Operación de creación (Constructor)
// Precondición: El cliente no ha sido creado.
// Postcondición: Se crea un cliente con nombre, apellido, domicilio y CUIL.
// Parámetros:
//   nombre: string representando el nombre del cliente
//   apellido: string representando el apellido del cliente
//   domicilio: TDAdomicilio que se crea al cliente
//   cuil: TDAcuilque se crea al cliente
// Devuelve un puntero a la estructura Cliente en memoria dinámica.
clientePtr crearCliente (char* nombre,char* apellido,domicilioPtr domicilio,cuilPtr cuil);

// Operación de destrucción (Destructor)
// Precondición: Cliente debe haber sido creado
// Postcondición: Se destruye cliente y se libera el espacio que utilizaba
// Parámetros:
//   cliente: TDAcliente a destruir
// Devuelve NULL
clientePtr destruirCLiente(clientePtr cliente);


// Operación de obtención de nombre de cliente
// Precondición: Cliente debe haber sido creado.
// Postcondición: Se obtiene nombre del cliente.
// Parámetros:
//   nombre: TDAcliente del que se obtiene el nombre
// Devuelve un puntero a char representando el nombre del cliente
char* getNombreCliente(clientePtr nombre);

// Operación de obtención de apellido de cliente
// Precondición: Cliente debe haber sido creado.
// Postcondición: Se obtiene apellido del cliente.
// Parámetros:
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


// Operaciòn de asignaciòn de cuil
// Precondiciòn: cliente debe haberse creado
// Postcondiciòn: cuil cambia con el nuevo valor de tipo
// Paràmetros:
//  cuil: string representando el cuil del usuario
// No devuelve nada
void setCuilCliente(clientePtr cliente,char* cuilc);


#endif // TDACLIENTE_INCLUDED
