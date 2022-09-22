#ifndef TDAPAQUETE_INCLUDED
#define TDAPAQUETE_INCLUDED

// Operaci�n de creaci�n (Constructor)
// Precondici�n: el Paquete no ha sido creado
// Postcondici�n: se crea un paquete con altura, ancho, largo, peso y un c�digo.
// Par�metros:
//  altura: entero representando la altura del paquete
//  ancho: entero representando el ancho del paquete
//  largo: entero representando el largo del paquete
//  peso: entero representando el peso del paquete
//  codigo: entero representando el c�digo del paquete
// Devuelve un puntero a la estructura Paquete en memoria din�mica
paquetePtr crearPaquete (int altura, int ancho, int largo, int peso, int codigo);

// Operaci�n de destrucci�n (Destructor)
// Precondici�n: Paquete debe haber sido creado
// Postcondici�n: Se destruye paquete y se libre el espacio que utilizaba
// Par�metros:
//  paquete: TDA paquete a destruir.
// Devuelve NULL
paquetePtr destruirPaquete(paquetePtr paquete);

// Operaci�n de asignaci�n de dimensiones de paquete
// Precondici�n: Paquete debe haber sido creado.
// Postcondici�n: Paquete cambia con el nuevo valor de dimensiones
// Par�metros:
//  dimensiones: TDAdimensiones al que se le asignar� el nuevo valor de dimensiones
//  altura: Entero representando el nuevo valor de altura
//  ancho: Entero representando el nuevo valor de ancho
//  largo: Entero representando el nuevo valor de largo
//  Peso: Entero representando el nuevo valor de peso
// No devuelve valor.
void* setDimensiones (dimensionesPtr altura, ancho, largo, peso);


// Operaci�n de obtencion de dimensiones de paquete
// Precondici�n: Paquete debe haber sido creado
// Postcondici�n: Se obtiene dimensiones de paquete
// Par�metros:
//  dimensiones: TDAdimensiones del que se obtiene dimensiones de paquete
// Devuelve un puntero a la estructura TDAdimensiones de paquete
dimensionesPtr getDimensiones(paquetePtr dimensiones);

// Operaci�n de obtenci�n de c�digo de paquete
// Precondici�n: Paquete debe haber sido creado
// Postcondici�n: Se obtiene codigo de paquete
// Par�metros:
//  codigo: TDApaquete del que se obtiene el codigo
// Devuelve un entero representando el c�digo del paquete
int getCodigo(paquete Ptr codigo);

#endif // TDAPAQUETE_INCLUDED
