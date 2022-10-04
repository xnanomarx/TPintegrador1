#ifndef TDADOMICILIO_INCLUDED
#define TDADOMICILIO_INCLUDED

typedef struct domicilio{
    char* calle;
    char* localidad;
    int numero;
}domicilio;

typedef domicilio* domicilioPtr;

// Operación de creación (Constructor)
// Precondición: El domicilio no ha sido creado
// Postcondición: Se crea un domicilio con calle, numero y localidad
// Parámetros:
//Calle: Representando la calle del domicilio
//Localidad: Representando la localidad
//Numero: Representando el numero del domicilio
// Devuelve un puntero a la estructura domicilio
domicilioPtr crearDomicilio(char*Calle, int Numero, char*Localidad);


// Operación de destrucción (Destructor)
// Precondición: El domicilio debe haberse creado con crearDomicilio
// Postcondición: Se destruye el domicilio liberando el espacio ocupado
// Parámetros:
//domicilio: TDADomicilio a destruir
// Devuelve NULL
domicilioPtr destruirDomicilio(domicilioPtr domicilio);


// Operación de obtención de Calle
// Precondición: Domicilio debe haberse creado
// Postcondición: Se obtiene la calle del domicilio
// Parámetros:
//Domicilio: TDAdomicilio del que se obtiene la calle
// Devuelve un puntero representando la calle
char* getCalle(domicilioPtr domicilio);

// Operación de obtención de Localidad
// Precondición: Domicilio debe haberse creado
// Postcondición: Se obtiene la localidad del domicilio
// Parámetros:
// Domicilio: TDAdomicilio del que se obtiene la localidad
// Devuelve puntero representando la localidad
char* getLocalidad(domicilioPtr domicilio);

// Operación de obtención de Numero
// Precondición: Domicilio debe haberse creado
// Postcondición: Se obtiene el numero del domicilio
// Parámetros:
// Domicilio: TDAdomicilio del que se obtiene el numero
// Devuelve un puntero representando el numero
int getNumero(domicilioPtr domicilio);

// Operaciòn de asignaciòn de calle de domicilio
// Precondiciòn: Domicilio debe haberse creado
// Postcondiciòn: Domicilio cambia con el nuevo valor de calle
// Paràmetros:
//  calle: puntero a char repreasentando el valor de calle
// No devuelve nada
void* setCalle (domicilioPtr domicilio, char* calle);

// Operaciòn de asignaciòn de numero de domicilio
// Precondiciòn: Domicilio debe haberse creado
// Postcondiciòn: Domicilio cambia con el nuevo valor de numero
// Paràmetros:
//  numero: entero representando el valor de calle
// No devuelve nada
void* setNumero (domicilioPtr domicilio, int numero);

// Operaciòn de asignaciòn de localidad de domicilio
// Precondiciòn: Domicilio debe haberse creado
// Postcondiciòn: Domicilio cambia con el nuevo valor de localidad
// Paràmetros:
//  localidad: puntero a char representando el valor de localidad
// No devuelve nada
void* setLocalidad (domicilioPtr domicilio, char* localidad);


#endif // TDADOMICILIO_INCLUDED
