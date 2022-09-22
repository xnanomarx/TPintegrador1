#ifndef TDAPAQUETE_INCLUDED
#define TDAPAQUETE_INCLUDED

// Operación de creación (Constructor)
// Precondición: el Paquete no ha sido creado
// Postcondición: se crea un paquete con altura, ancho, largo, peso y un código.
// Parámetros:
//  altura: entero representando la altura del paquete
//  ancho: entero representando el ancho del paquete
//  largo: entero representando el largo del paquete
//  peso: entero representando el peso del paquete
//  codigo: entero representando el código del paquete
// Devuelve un puntero a la estructura Paquete en memoria dinámica
paquetePtr crearPaquete (int altura, int ancho, int largo, int peso, int codigo);

// Operación de destrucción (Destructor)
// Precondición: Paquete debe haber sido creado
// Postcondición: Se destruye paquete y se libre el espacio que utilizaba
// Parámetros:
//  paquete: TDA paquete a destruir.
// Devuelve NULL
paquetePtr destruirPaquete(paquetePtr paquete);

// Operación de asignación de dimensiones de paquete
// Precondición: Paquete debe haber sido creado.
// Postcondición: Paquete cambia con el nuevo valor de dimensiones
// Parámetros:
//  dimensiones: TDAdimensiones al que se le asignará el nuevo valor de dimensiones
//  altura: Entero representando el nuevo valor de altura
//  ancho: Entero representando el nuevo valor de ancho
//  largo: Entero representando el nuevo valor de largo
//  Peso: Entero representando el nuevo valor de peso
// No devuelve valor.
void* setDimensiones (dimensionesPtr altura, ancho, largo, peso);


// Operación de obtencion de dimensiones de paquete
// Precondición: Paquete debe haber sido creado
// Postcondición: Se obtiene dimensiones de paquete
// Parámetros:
//  dimensiones: TDAdimensiones del que se obtiene dimensiones de paquete
// Devuelve un puntero a la estructura TDAdimensiones de paquete
dimensionesPtr getDimensiones(paquetePtr dimensiones);

// Operación de obtención de código de paquete
// Precondición: Paquete debe haber sido creado
// Postcondición: Se obtiene codigo de paquete
// Parámetros:
//  codigo: TDApaquete del que se obtiene el codigo
// Devuelve un entero representando el código del paquete
int getCodigo(paquete Ptr codigo);

#endif // TDAPAQUETE_INCLUDED
