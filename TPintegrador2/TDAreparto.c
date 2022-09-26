#include <stdio.h>
#include <stdlib.h>
#include "TDAreparto.h"

repartoPtr crearReparto(char* direccEntrega, char* direccRetiro, Pilaptr*, horaSalidaPtr*, horaLlegadaPtr*)

repartoPtr destruirReparto(repartoPtr reparto)

char* getDirrecEntrega(repartoPtr reparto)

char* getDireccRetiro(repartoPtr reparto)

int getHoraEntrega(repartoPtr reparto)

int getHoraLlegada(repartoPtr reparto)

void* setDireccEntrega (repartoPtr direccEntrega);

void* setDireccRetiro (repartoPtr direccRetiro);

void* setHoraEntrega(repartoPtr HoraEntrega);

void* setHoraLlegada (repartoPtr HoraLlegada);
