#ifndef TDAVEHICULO_INCLUDED
#define TDAVEHICULO_INCLUDED

typedef struct vehiculo{
    char* tipo;
    char* marca;
    char* modelo;
    char* patente;
}vehiculo;

typedef vehiculo* vehiculoPtr;

typedef struct vehiculoAux{
    char* tipoAux;
    char* marcaAux;
    char* modeloAux;
    char* patenteAux;
}vehiculoAux;

typedef vehiculoAux* vehiculoAuxPtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: El vehiculo no ha sido creado
// Postcondici�n: Se crea vechiculo con tipo, marca, modelo, patente
// Par�metros:
// tipo: representa el tipo de vehiculo(auto, moto, camion)
// Marca: representa la marca de vehiculo
// Modelo: representa el modelo de vehiculo
// Patente: representa la patente del vechiculo
// Devuelve un puntero a la estructura Vehiculo
vehiculoPtr crearVehiculo(char*tipo, char*marca,char*modelo,char*patente);


// Operaci�n de destrucci�n (Destructor)
// Precondici�n: vehiculo debe haberse creado con crearVehiculo
// Postcondici�n: se destruye vehiculo y libera la memoria ocupada
// Par�metros:
// vehiculo: TDAvehiculo a destruir
// Devuelve NULL
vehiculoPtr destruirVehiculo(vehiculoPtr vehiculo);


// Operaci�n de obtenci�n de tipo
// Precondici�n: vehiculo debe haberse creado
// Postcondici�n: se obtiene el tipo
// Par�metros:
// vehiculo: TDAvehiculo del que se obtiene el tipo
// Devuelve un puntero char representando el tipo
char* getTipo(vehiculoPtr vehiculo);

// Operaci�n de obtenci�n de marca
// Precondici�n: vehiculo debe haberse creado
// Postcondici�n: se obtiene la marca
// Par�metros:
// vehiculo: TDAvehiculo del que se obtiene la marca
// Devuelve un puntero char representando la marca
char* getMarca(vehiculoPtr vehiculo);

// Operaci�n de obtenci�n de modelo
// Precondici�n: vehiculo debe haberse creado
// Postcondici�n: se obtiene el modelo
// Par�metros:
// vehiculo: TDAvehiculo del que se obtiene el modelo
// Devuelve un puntero char representando el modelo
char* getModelo(vehiculoPtr vehiculo);

// Operaci�n de obtenci�n de patente
// Precondici�n: vehiculo debe haberse creado
// Postcondici�n: se obtiene la patente
// Par�metros:
// vehiculo: TDAvehiculo del que se obtiene la patente
// Devuelve un puntero a char representando la patente
char* getPatente(vehiculoPtr vehiculo);

// Operaci�n de asignaci�n de tipo a vehiculo
// Precondici�n: Vehiculo debe haberse creado
// Postcondici�n: Vehiculo cambia con el nuevo valor de tipo
// Par�metros:
//  tipo: string representando el tipo de vehiculo
// No devuelve nada
void* setTipo(vehiculoPtr vehiculo, char* tipo);

// Operaci�n de asignaci�n de tipo a vehiculo
// Precondici�n: Vehiculo debe haberse creado
// Postcondici�n: Vehiculo cambia con el nuevo valor de tipo
// Par�metros:
//  tipo: string representando el tipo de vehiculo
// No devuelve nada
void* setTipo(vehiculoPtr vehiculo, char* tipo);

// Operaci�n de asignaci�n de marca a vehiculo
// Precondici�n: Vehiculo debe haberse creado
// Postcondici�n: Vehiculo cambia con el nuevo valor de marca
// Par�metros:
//  marca: string representando la marca de vehiculo
// No devuelve nada
void* setMarca(vehiculoPtr vehiculo, char* marca);

// Operaci�n de asignaci�n de modelo a vehiculo
// Precondici�n: Vehiculo debe haberse creado
// Postcondici�n: Vehiculo cambia con el nuevo valor de modelo
// Par�metros:
//  modelo: string representando el modelo de vehiculo
// No devuelve nada
void* setModelo(vehiculoPtr vehiculo, char* modelo);

// Operaci�n de asignaci�n de patente a vehiculo
// Precondici�n: Vehiculo debe haberse creado
// Postcondici�n: Vehiculo cambia con el nuevo valor de patente
// Par�metros:
//  patente: string representando la patente de vehiculo
// No devuelve nada
void* setPatente(vehiculoPtr vehiculo, char* patente);

#endif // TDAVEHICULO_INCLUDED
