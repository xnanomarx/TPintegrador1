#ifndef TDADIMENSION_INCLUDED
#define TDADIMENSION_INCLUDED

typedef struct dimension{
    int altura;
    int ancho;
    int largo;
    int peso;
} dimension;

typedef dimension* dimensionPtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: La dimension no ha sido creada
// Postcondici�n: Se crea dimension con altura, ancho, peso, largo, peso
// Par�metros:
// altura: representa la altura del paquete
// ancho: representa el ancho del paquete
// largo: representa el largo del paquete
// peso: representa el peso del paquete
// Devuelve un puntero a la esctructura Dimension
dimensionPtr crearDimension(int altura, int ancho, int largo, int peso);

// Operaci�n de destrucci�n (Destructor)
// Precondici�n: dimension debe haberse creado con crearDimension
// Postcondici�n: se destruye dimension y se libera la memoria ocupada
// Par�metros:
// dimension: TDAdimension a destruir
// Devuelve NULL
dimensionPtr destruirDimension(dimensionPtr dimension);

// Operaci�n de obtenci�n de altura
// Precondici�n: dimension debe haber sido creada
// Postcondici�n: se obtiene la altura
// Par�metros:
// dimension: TDAdimension del que se obtiene la altura
// Devuelve un entero representando la altura
int getAltura (dimensionPtr dimension);

// Operaci�n de obtenci�n de ancho
// Precondici�n: dimension debe haberse creado
// Postcondici�n: se obtiene el ancho
// Par�metros:
// dimension: TDAdimension del que se obtiene el ancho
// Devuelve un entero representando el ancho
int getAncho (dimensionPtr dimension);

// Operaci�n de obtenci�n de largo
// Precondici�n: dimension debe haberse creado
// Postcondici�n: se obtiene el largo
// Par�metros:
// dimension: TDAdimension del que se obtiene el largo
// Devuelve un entero representando el largo
int getLargo (dimensionPtr dimension);

// Operaci�n de obtenci�n de peso
// Precondici�n: dimension debe haberse creado
// Postcondici�n: se obtiene el peso
// Par�metros:
// dimension: TDAdimension del que se obtiene el peso
// Devuelve un entero representando el peso
int getPeso (dimensionPtr dimension);

// Operaci�n de asignaci�n de altura a dimension
// Precondici�n: Dimension debe haberse creado
// Postcondici�n: Dimension cambia con el nuevo valor de altura
// Par�metros:
//  altura: entero representando el valor de la altura del paquete
// No devuelve nada
void setAltura(dimensionPtr dimension, int altura);

// Operaci�n de asignaci�n de ancho a dimension
// Precondici�n: Dimension debe haberse creado
// Postcondici�n: Dimension cambia con el nuevo valor de ancho
// Par�metros:
//  ancho: entero representando el valor del ancho del paquete
// No devuelve nada
void setAltura(dimensionPtr dimension, int altura);

// Operaci�n de asignaci�n de largo a dimension
// Precondici�n: Dimension debe haberse creado
// Postcondici�n: Dimension cambia con el nuevo valor de largo
// Par�metros:
//  largo: entero representando el valor del largo del paquete
// No devuelve nada
void setLargo(dimensionPtr dimension, int largo);

// Operaci�n de asignaci�n de peso a dimension
// Precondici�n: Dimension debe haberse creado
// Postcondici�n: Dimension cambia con el nuevo valor de peso
// Par�metros:
//  peso: entero representando el valor del peso del paquete
// No devuelve nada
void setPeso(dimensionPtr dimension, int peso);

#endif // TDADIMENSION_INCLUDED
