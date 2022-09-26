#include <stdio.h>
#include <stdlib.h>
#include "TDAcliente.h"

clientePtr crearCliente (char* nombre,char* apellido,domicilio,cuilPtr);


clientePtr destruirCLiente(clientePtr cliente);



char* getNombre(clientePtr nombre);


char* getApellido(clientePtr nombre);


domicilio getDomicilio(clientePtr domicilio);


cuil getCuil(clientePtr domicilio);
