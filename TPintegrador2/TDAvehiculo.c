#include <stdio.h>
#include <stdlib.h>
#include "TDAvehiculo.h"

vehiculoPtr crearVehiculo(char*tipo, char*marca,char*modelo,char*patente);

vehiculoPtr destruirVehiculo(vehiculoPtr vehiculo);

char* getTipo(vehiculoPtr vehiculo);

char* getMarca(vehiculoPtr vehiculo);

char* getModelo(vehiculoPtr vehiculo);

char* getPatente(vehiculoPtr vehiculo);
