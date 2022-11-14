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

// Operación de creación (Constructor)
// Precondición: La paquete no ha sido creada
// Postcondición: Se crea paquete con altura, ancho, peso, largo, peso
// Parámetros:
// altura: representa la altura del paquete
// ancho: representa el ancho del paquete
// largo: representa el largo del paquete
// peso: representa el peso del paquete
// Devuelve un puntero a la esctructura paquete
paquetePtr crearPaquete(int altura, int ancho, int largo, int peso, domicilioPtr direccretiro, domicilioPtr direccEntrega);

// Operación de destrucción (Destructor)
// Precondición: paquete debe haberse creado con crearpaquete
// Postcondición: se destruye paquete y se libera la memoria ocupada
// Parámetros:
// paquete: TDApaquete a destruir
// Devuelve NULL
paquetePtr destruirpaquete(paquetePtr paquete);

int getCodigo(paquetePtr paquete);

// Operación de obtención de altura
// Precondición: paquete debe haber sido creada
// Postcondición: se obtiene la altura
// Parámetros:
// paquete: TDApaquete del que se obtiene la altura
// Devuelve un entero representando la altura
int getAltura (paquetePtr paquete);

// Operación de obtención de ancho
// Precondición: paquete debe haberse creado
// Postcondición: se obtiene el ancho
// Parámetros:
// paquete: TDApaquete del que se obtiene el ancho
// Devuelve un entero representando el ancho
int getAncho (paquetePtr paquete);

// Operación de obtención de largo
// Precondición: paquete debe haberse creado
// Postcondición: se obtiene el largo
// Parámetros:
// paquete: TDApaquete del que se obtiene el largo
// Devuelve un entero representando el largo
int getLargo (paquetePtr paquete);

// Operación de obtención de peso
// Precondición: paquete debe haberse creado
// Postcondición: se obtiene el peso
// Parámetros:
// paquete: TDApaquete del que se obtiene el peso
// Devuelve un entero representando el peso
int getPeso (paquetePtr paquete);
// Operaciòn de asignaciòn de altura a paquete
// Precondiciòn: paquete debe haberse creado
// Postcondiciòn: paquete cambia con el nuevo valor de altura
// Paràmetros:
//  altura: entero representando el valor de la altura del paquete
// No devuelve nada

char* getLocalidadRetiroPaq(paquetePtr paquete);

char* getCalleRetiroPaq(paquetePtr paquete);

char* getcalleEntregaPaq(paquetePtr paquete);

int getAlturaRetiroPaq(paquetePtr paquete);

int getAlturaEntregaPaq(paquetePtr paquete);

char* getLocalidadEntregaPaq(paquetePtr paquete);


void setCodigo(paquetePtr paquete, int codigo);

// Operaciòn de asignaciòn de ancho a paquete
// Precondiciòn: paquete debe haberse creado
// Postcondiciòn: paquete cambia con el nuevo valor de ancho
// Paràmetros:
//  ancho: entero representando el valor del ancho del paquete
// No devuelve nada
void setAltura(paquetePtr paquete, int altura);

void setAncho(paquetePtr paquete, int ancho);

// Operaciòn de asignaciòn de largo a paquete
// Precondiciòn: paquete debe haberse creado
// Postcondiciòn: paquete cambia con el nuevo valor de largo
// Paràmetros:
//  largo: entero representando el valor del largo del paquete
// No devuelve nada
void setLargo(paquetePtr paquete, int largo);

// Operaciòn de asignaciòn de peso a paquete
// Precondiciòn: paquete debe haberse creado
// Postcondiciòn: paquete cambia con el nuevo valor de peso
// Paràmetros:
//  peso: entero representando el valor del peso del paquete
// No devuelve nada
void setPeso(paquetePtr paquete, int peso);
void setDomEPaq(paquetePtr paquete,domicilioPtr domE);
void setDomRPaq(paquetePtr paquete,domicilioPtr domR);
void mostrarPaquete(paquetePtr paquete,int numero);

#endif // TDApaquete_INCLUDED
