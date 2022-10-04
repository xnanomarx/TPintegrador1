#include <stdio.h>
#include <stdlib.h>
#include "TDAreparto.h"

repartoPtr crearReparto(char* direccEntrega, char* direccRetiro, PilaPtr pila, horaPtr horaSalida, horaPtr horaLlegada){
/*  repartoPtr reparto=(repartoPtr)obtenerMemoria(sizeof(reparto));
    reparto->direccEntrega=direccEntrega;
    reparto->direccRetiro=direccRetiro;
    reparto->horaSalida=horaSalida;
    reparto->horaLlegada=horaLlegada;*/
    domicilioPtr->calle=direccEntrega;
    domicilioPtr
}

repartoPtr destruirReparto(repartoPtr reparto){
    free(reparto->direccEntrega);
    free(reparto->direccRetiro);
    free(reparto->pila);
    free(reparto);
    return NULL;
}

char* getDirrecEntrega(repartoPtr reparto){
    return reparto->direccEntrega;
}

char* getDireccRetiro(repartoPtr reparto){
    return reparto->direccRetiro;
}

int getHoraEntrega(repartoPtr reparto){
    return reparto->horaSalida;
}

int getHoraLlegada(repartoPtr reparto){
    return reparto->horaLlegada;
}

void* setDireccEntrega (repartoPtr reparto, char* direccEntrega){
    reparto->direccEntrega;
}

void* setDireccRetiro (repartoPtr reparto, char* direccRetiro){
    reparto->direccRetiro;
}
