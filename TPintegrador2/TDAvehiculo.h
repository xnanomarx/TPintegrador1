#ifndef TDAVEHICULO_INCLUDED
#define TDAVEHICULO_INCLUDED

struct vehiculo{
    char* tipo;
    char* marca;
    char* modelo;
    char* patente;
}vehiculo;

typedef vehiculo vehiculoPtr;


// Operación de creación (Constructor)
// Precondición: El vehiculo no ha sido creado
// Postcondición: Se crea vechiculo con tipo, marca, modelo, patente
// Parámetros:
// tipo: representa el tipo de vehiculo(auto, moto, camion)
// Marca: representa la marca de vehiculo
// Modelo: representa el modelo de vehiculo
// Patente: representa la patente del vechiculo
// Devuelve un puntero a la estructura Vehiculo
vehiculoPtr crearVehiculo(char*tipo, char*marca,char*modelo,char*patente)


// Operación de destrucción (Destructor)
// Precondición: vehiculo debe haberse creado con crearVehiculo
// Postcondición: se destruye vehiculo y libera la memoria ocupada
// Parámetros:
// vehiculo: TDAvehiculo a destruir
// Devuelve NULL
vehiculoPtr destruirVehiculo(vehiculoPtr vehiculo)


// Operación de obtención de tipo
// Precondición: vehiculo debe haberse creado
// Postcondición: se obtiene el tipo
// Parámetros:
// vehiculo: TDAvehiculo del que se obtiene el tipo
// Devuelve un puntero char representando el tipo
char* getTipo(vehiculoPtr vehiculo)

// Operación de obtención de marca
// Precondición: vehiculo debe haberse creado
// Postcondición: se obtiene la marca
// Parámetros:
// vehiculo: TDAvehiculo del que se obtiene la marca
// Devuelve un puntero char representando la marca
char* getMarca(vehiculoPtr vehiculo)

// Operación de obtención de modelo
// Precondición: vehiculo debe haberse creado
// Postcondición: se obtiene el modelo
// Parámetros:
// vehiculo: TDAvehiculo del que se obtiene el modelo
// Devuelve un puntero char representando el modelo
char* getModelo(vehiculoPtr vehiculo)

// Operación de obtención de patente
// Precondición: vehiculo debe haberse creado
// Postcondición: se obtiene la patente
// Parámetros:
// vehiculo: TDAvehiculo del que se obtiene la patente
// Devuelve un puntero a char representando la patente
char* getPatente(vehiculoPtr vehiculo)

#endif // TDAVEHICULO_INCLUDED
