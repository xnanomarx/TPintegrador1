#ifndef TDADOMICILIO_INCLUDED
#define TDADOMICILIO_INCLUDED

typedef struct domicilio{
    char* calle;
    char* localidad;
    int numero;
}domicilio;

typedef domicilio* domicilioPtr;

// Operaci�n de creaci�n (Constructor)
// Precondici�n: El domicilio no ha sido creado
// Postcondici�n: Se crea un domicilio con calle, numero y localidad
// Par�metros:
//Calle: Representando la calle del domicilio
//Localidad: Representando la localidad
//Numero: Representando el numero del domicilio
// Devuelve un puntero a la estructura domicilio
domicilioPtr crearDomicilio(char*Calle, int Numero, char*Localidad);


// Operaci�n de destrucci�n (Destructor)
// Precondici�n: El domicilio debe haberse creado con crearDomicilio
// Postcondici�n: Se destruye el domicilio liberando el espacio ocupado
// Par�metros:
//domicilio: TDADomicilio a destruir
// Devuelve NULL
domicilioPtr destruirDomicilio(domicilioPtr domicilio);


// Operaci�n de obtenci�n de Calle
// Precondici�n: Domicilio debe haberse creado
// Postcondici�n: Se obtiene la calle del domicilio
// Par�metros:
//Domicilio: TDAdomicilio del que se obtiene la calle
// Devuelve un puntero representando la calle
char* getCalle(domicilioPtr domicilio);

// Operaci�n de obtenci�n de Localidad
// Precondici�n: Domicilio debe haberse creado
// Postcondici�n: Se obtiene la localidad del domicilio
// Par�metros:
// Domicilio: TDAdomicilio del que se obtiene la localidad
// Devuelve puntero representando la localidad
char* getLocalidad(domicilioPtr domicilio);

// Operaci�n de obtenci�n de Numero
// Precondici�n: Domicilio debe haberse creado
// Postcondici�n: Se obtiene el numero del domicilio
// Par�metros:
// Domicilio: TDAdomicilio del que se obtiene el numero
// Devuelve un puntero representando el numero
int getNumero(domicilioPtr domicilio);

// Operaci�n de asignaci�n de calle de domicilio
// Precondici�n: Domicilio debe haberse creado
// Postcondici�n: Domicilio cambia con el nuevo valor de calle
// Par�metros:
//  calle: puntero a char repreasentando el valor de calle
// No devuelve nada
void* setCalle (domicilioPtr domicilio, char* calle);

// Operaci�n de asignaci�n de numero de domicilio
// Precondici�n: Domicilio debe haberse creado
// Postcondici�n: Domicilio cambia con el nuevo valor de numero
// Par�metros:
//  numero: entero representando el valor de calle
// No devuelve nada
void* setNumero (domicilioPtr domicilio, int numero);

// Operaci�n de asignaci�n de localidad de domicilio
// Precondici�n: Domicilio debe haberse creado
// Postcondici�n: Domicilio cambia con el nuevo valor de localidad
// Par�metros:
//  localidad: puntero a char representando el valor de localidad
// No devuelve nada
void* setLocalidad (domicilioPtr domicilio, char* localidad);


#endif // TDADOMICILIO_INCLUDED
