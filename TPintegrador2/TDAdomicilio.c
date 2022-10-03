#include <stdio.h>
#include <stdlib.h>
#include "TDAdomicilio.h"
#include "util.h"

domicilioPtr crearDomicilio(char*Calle, char*Localidad, int Numero){

}


domicilioPtr destruirDomicilio(domicilioPtr domicilio);


char* getCalle(domicilioPtr domicilio);


char* getLocalidad(domicilioPtr domicilio);


int getNumero(domicilioPtr domicilio);


void* setCalle (domicilioPtr calle);


void* setNumero (domicilioPtr numero);


void* setLocalidad (domicilioPtr localidad);
