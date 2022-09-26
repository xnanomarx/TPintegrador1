#include <stdio.h>
#include <stdlib.h>
#include "TDApaquete.h"

paquetePtr crearPaquete (char* motivo, bool estadoEntrega, int codigo, FechaSalidaPtr*, FechaEntregaPtr*, DimensionesPtr*);

paquetePtr destruirPaquete(PaquetePtr paquete);

char* getmotivo(PaquetePtr Paquete)

bool getEstadoEntrega(PaquetePtr paquete)

int getCodigo(PaquetePtr paquete);

void setmotivo(PaquetePtr paquete, char* motivo);

void setEstadoEntrega(PaquetePtr paquete, bool estadoEntrega);

void setCodigo(PaquetePtr paquete, int codigo);
