#ifndef TDADIMENSION_INCLUDED
#define TDADIMENSION_INCLUDED

typedef struct dimension{
    int altura;
    int ancho;
    int largo;
    int peso;
} dimension;

typedef dimension* dimensionPtr;

// Operación de creación (Constructor)
// Precondición: La dimension no ha sido creada
// Postcondición: Se crea dimension con altura, ancho, peso, largo, peso
// Parámetros:
// altura: representa la altura del paquete
// ancho: representa el ancho del paquete
// largo: representa el largo del paquete
// peso: representa el peso del paquete
// Devuelve un puntero a la esctructura Dimension
dimensionPtr crearDimension(int altura, int ancho, int largo, int peso);

// Operación de destrucción (Destructor)
// Precondición: dimension debe haberse creado con crearDimension
// Postcondición: se destruye dimension y se libera la memoria ocupada
// Parámetros:
// dimension: TDAdimension a destruir
// Devuelve NULL
dimensionPtr destruirDimension(dimensionPtr dimension);

// Operación de obtención de altura
// Precondición: dimension debe haber sido creada
// Postcondición: se obtiene la altura
// Parámetros:
// dimension: TDAdimension del que se obtiene la altura
// Devuelve un entero representando la altura
int getAltura (dimensionPtr dimension);

// Operación de obtención de ancho
// Precondición: dimension debe haberse creado
// Postcondición: se obtiene el ancho
// Parámetros:
// dimension: TDAdimension del que se obtiene el ancho
// Devuelve un entero representando el ancho
int getAncho (dimensionPtr dimension);

// Operación de obtención de largo
// Precondición: dimension debe haberse creado
// Postcondición: se obtiene el largo
// Parámetros:
// dimension: TDAdimension del que se obtiene el largo
// Devuelve un entero representando el largo
int getLargo (dimensionPtr dimension);

// Operación de obtención de peso
// Precondición: dimension debe haberse creado
// Postcondición: se obtiene el peso
// Parámetros:
// dimension: TDAdimension del que se obtiene el peso
// Devuelve un entero representando el peso
int getPeso (dimensionPtr dimension);

#endif // TDADIMENSION_INCLUDED
