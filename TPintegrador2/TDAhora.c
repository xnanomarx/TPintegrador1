#include <stdio.h>
#include <stdlib.h>
#include "TDAhora.h"
#include "util.h"
horaPtr crearHora(int horaingr, int minutoingr){
    horaPtr hora1=(horaPtr)obtenerMemoria(sizeof(horaingr+minutoingr));
    hora1->horas=horaingr;
    hora1->minutos=minutoingr;
    return hora1;
}

horaPtr destruirHora(horaPtr hora){
    free(hora);
    return NULL;
}

int getMinutos(horaPtr hora){
    return hora->minutos;
}

int gethoras(horaPtr hora){
    return hora->horas;
}

void setMinutos(horaPtr hora, int newminuto){
    hora->minutos=newminuto;
}

void sethoras(horaPtr hora, int newhora){
    hora->horas=newhora;
}
