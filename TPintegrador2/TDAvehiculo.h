#ifndef TDAVEHICULO_INCLUDED
#define TDAVEHICULO_INCLUDED

struct vehiculo{
    char* tipo;
    char* marca;
    char* modelo;
    char* patente;
}vehiculo;

typedef vehiculo vehiculoPtr;


// Operaci�n de creaci�n (Constructor)
// Precondici�n: El vehiculo no ha sido creado
// Postcondici�n: Se crea vechiculo con tipo, marca, modelo, patente
// Par�metros:
// tipo: representa el tipo de vehiculo(auto, moto, camion)
// Marca: representa la marca de vehiculo
// Modelo: representa el modelo de vehiculo
// Patente: representa la patente del vechiculo
// Devuelve un puntero a la estructura Vehiculo
vehiculoPtr crearVehiculo(char*tipo, char*marca,char*modelo,char*patente)


// Operaci�n de destrucci�n (Destructor)
// Precondici�n: vehiculo debe haberse creado con crearVehiculo
// Postcondici�n: se destruye vehiculo y libera la memoria ocupada
// Par�metros:
// vehiculo: TDAvehiculo a destruir
// Devuelve NULL
vehiculoPtr destruirVehiculo(vehiculoPtr vehiculo)


// Operaci�n de obtenci�n de tipo
// Precondici�n: vehiculo debe haberse creado
// Postcondici�n: se obtiene el tipo
// Par�metros:
// vehiculo: TDAvehiculo del que se obtiene el tipo
// Devuelve un puntero char representando el tipo
char* getTipo(vehiculoPtr vehiculo)

// Operaci�n de obtenci�n de marca
// Precondici�n: vehiculo debe haberse creado
// Postcondici�n: se obtiene la marca
// Par�metros:
// vehiculo: TDAvehiculo del que se obtiene la marca
// Devuelve un puntero char representando la marca
char* getMarca(vehiculoPtr vehiculo)

// Operaci�n de obtenci�n de modelo
// Precondici�n: vehiculo debe haberse creado
// Postcondici�n: se obtiene el modelo
// Par�metros:
// vehiculo: TDAvehiculo del que se obtiene el modelo
// Devuelve un puntero char representando el modelo
char* getModelo(vehiculoPtr vehiculo)

// Operaci�n de obtenci�n de patente
// Precondici�n: vehiculo debe haberse creado
// Postcondici�n: se obtiene la patente
// Par�metros:
// vehiculo: TDAvehiculo del que se obtiene la patente
// Devuelve un puntero a char representando la patente
char* getPatente(vehiculoPtr vehiculo)

#endif // TDAVEHICULO_INCLUDED
