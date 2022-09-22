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

// Operación de creación (Constructor)
// Precondición: El cliente no ha sido creado.
// Postcondición: Se crea un cliente con nombre, apellido, domicilio y CUIL.
// Parámetros:
//   nombre: string representando el nombre del cliente
//   apellido: string representando el apellido del cliente
//   domicilio: TDAdomicilio que se crea al cliente
//   cuil: TDAcuilque se crea al cliente
// Devuelve un puntero a la estructura Cliente en memoria dinámica.
clientePtr crearCliente (char* nombre,char* apellido,domicilio,cuil);

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
char* getNombre(clientePtr nombre);

// Operación de obtención de apellido de cliente
// Precondición: Cliente debe haber sido creado.
// Postcondición: Se obtiene apellido del cliente.
// Parámetros:
//   apellido: TDAcliente del que se obtiene el apellido
// Devuelve un puntero a char representando el apellido del cliente
char* getApellido(clientePtr nombre);

// Operación de obtención de domicilio de cliente
// Precondición: Cliente debe haber sido creado.
// Postcondición: Se obtiene domicilio del cliente.
// Parámetros:
//   domicilio: TDAdomicilio del que se obtiene el domicilio
// Devuelve un puntero a la estructura TDAdomicilio del cliente
domicilio getDomicilio(clientePtr domicilio);

// Operación de obtención de CUIL de cliente
// Precondición: Cliente debe haber sido creado.
// Postcondición: Se obtiene CUIL del cliente.
// Parámetros:
//   cuil: TDAcuil del que se obtiene el cuil
// Devuelve un puntero al TDAcuil del cliente
cuil getCuil(clientePtr domicilio);

#endif // TDACLIENTE_INCLUDED
