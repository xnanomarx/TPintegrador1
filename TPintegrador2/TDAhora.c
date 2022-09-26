#include <stdio.h>
#include <stdlib.h>
#include "TDAhora.h"

HoraPtr crearHora(int horas, int minutos);

HoraPtr destruirHora(HoraPtr hora);

int getMinutos(HoraPtr Hora);

int gethoras(HoraPtr Hora);

void setMinutos(HoraPtr Hora, int minutos);

void setHoras(HoraPtr Hora, int horas);
