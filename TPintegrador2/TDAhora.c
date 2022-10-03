#include <stdio.h>
#include <stdlib.h>
#include "TDAhora.h"
horaPtr crearHora(int horas, int minutos){
    horaPtr hora=(horaPtr)obtenerMemoria(sizeof(hora));
    hora->horas=horas;
    hora->minutos=minutos;
}

horaPtr destruirHora(horaPtr hora){
    free(hora);
}

int getMinutos(horaPtr hora){
    return hora->minutos;
}

int gethoras(horaPtr hora){
    return hora->horas;
}

void setMinutos(horaPtr hora, int minutos){
    hora->minutos;
}

void sethoras(horaPtr hora, int horas){
    return hora->horas;
}
