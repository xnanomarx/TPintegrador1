#ifndef TDApaquete_INCLUDED
#define TDApaquete_INCLUDED
#include "TDAdomicilio.h"

typedef struct paquete{
    int codigo;
    int altura;
    int ancho;
    int largo;
    int peso;
    domicilioPtr direccRetiro;
    domicilioPtr direccEntrega;
} paquete;

typedef paquete* paquetePtr;

typedef struct paqueteAux{
    char calleRetiroAux[30];
    char localidadRetiroAux[30];
    char calleEntregaAux[30];
    char localidadEntregaAux[30];
    int codigoAux;
    int altoAux;
    int anchoAux;
    int largoAux;
    int pesoAux;
    int alturaRetiroAux;
    int alturaEntregaAux;
} paqueteAux;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: La paquete no ha sido creada
// Postcondici�n: Se crea paquete con altura, ancho, peso, largo, peso
// Par�metros:
// altura: representa la altura del paquete
// ancho: representa el ancho del paquete
// largo: representa el largo del paquete
// peso: representa el peso del paquete
// Devuelve un puntero a la esctructura paquete
paquetePtr crearPaquete(int altura, int ancho, int largo, int peso, domicilioPtr direccretiro, domicilioPtr direccEntrega);

// Operaci�n de destrucci�n (Destructor)
// Precondici�n: paquete debe haberse creado con crearpaquete
// Postcondici�n: se destruye paquete y se libera la memoria ocupada
// Par�metros:
// paquete: TDApaquete a destruir
// Devuelve NULL
paquetePtr destruirpaquete(paquetePtr paquete);

int getCodigo(paquetePtr paquete);

// Operaci�n de obtenci�n de altura
// Precondici�n: paquete debe haber sido creada
// Postcondici�n: se obtiene la altura
// Par�metros:
// paquete: TDApaquete del que se obtiene la altura
// Devuelve un entero representando la altura
int getAltura (paquetePtr paquete);

// Operaci�n de obtenci�n de ancho
// Precondici�n: paquete debe haberse creado
// Postcondici�n: se obtiene el ancho
// Par�metros:
// paquete: TDApaquete del que se obtiene el ancho
// Devuelve un entero representando el ancho
int getAncho (paquetePtr paquete);

// Operaci�n de obtenci�n de largo
// Precondici�n: paquete debe haberse creado
// Postcondici�n: se obtiene el largo
// Par�metros:
// paquete: TDApaquete del que se obtiene el largo
// Devuelve un entero representando el largo
int getLargo (paquetePtr paquete);

// Operaci�n de obtenci�n de peso
// Precondici�n: paquete debe haberse creado
// Postcondici�n: se obtiene el peso
// Par�metros:
// paquete: TDApaquete del que se obtiene el peso
// Devuelve un entero representando el peso
int getPeso (paquetePtr paquete);
// Operaci�n de asignaci�n de altura a paquete
// Precondici�n: paquete debe haberse creado
// Postcondici�n: paquete cambia con el nuevo valor de altura
// Par�metros:
//  altura: entero representando el valor de la altura del paquete
// No devuelve nada

char* getLocalidadRetiroPaq(paquetePtr paquete);

char* getCalleRetiroPaq(paquetePtr paquete);

char* getcalleEntregaPaq(paquetePtr paquete);

int getAlturaRetiroPaq(paquetePtr paquete);

int getAlturaEntregaPaq(paquetePtr paquete);

char* getLocalidadEntregaPaq(paquetePtr paquete);


void setCodigo(paquetePtr paquete, int codigo);

// Operaci�n de asignaci�n de ancho a paquete
// Precondici�n: paquete debe haberse creado
// Postcondici�n: paquete cambia con el nuevo valor de ancho
// Par�metros:
//  ancho: entero representando el valor del ancho del paquete
// No devuelve nada
void setAltura(paquetePtr paquete, int altura);

void setAncho(paquetePtr paquete, int ancho);

// Operaci�n de asignaci�n de largo a paquete
// Precondici�n: paquete debe haberse creado
// Postcondici�n: paquete cambia con el nuevo valor de largo
// Par�metros:
//  largo: entero representando el valor del largo del paquete
// No devuelve nada
void setLargo(paquetePtr paquete, int largo);

// Operaci�n de asignaci�n de peso a paquete
// Precondici�n: paquete debe haberse creado
// Postcondici�n: paquete cambia con el nuevo valor de peso
// Par�metros:
//  peso: entero representando el valor del peso del paquete
// No devuelve nada
void setPeso(paquetePtr paquete, int peso);
void setDomEPaq(paquetePtr paquete,domicilioPtr domE);
void setDomRPaq(paquetePtr paquete,domicilioPtr domR);
void mostrarPaquete(paquetePtr paquete,int numero);

#endif // TDApaquete_INCLUDED
