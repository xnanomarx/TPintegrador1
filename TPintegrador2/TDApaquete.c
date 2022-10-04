#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "TDApaquete.h"
#include "TDAfecha.h"
#include "TDAfechaSalida.h"
#include "TDAfechaEntrega.h"
#include "TDAdimension.h"
#include "util.h"

paquetePtr crearPaquete(char* motivo, bool estadoEntrega, int codigo, FechaSalidaPtr FechaSalida, FechaEntregaPtr FechaEntrega, dimensionPtr dimension){
    paquetePtr paq=(paquetePtr)obtenerMemoria(sizeof(paquete));
    char* moti=(char*)obtenerMemoria(sizeof(char)*(strlen(motivo)+1));
    strcpy(moti,motivo);
    paq->FechaSalida=FechaSalida;
    paq->FechaEntrega=FechaEntrega;
    paq->dimension=dimension;
    paq->estadoEntrega=estadoEntrega, codigo=codigo;
    return paq;
}

paquetePtr destruirPaquete(paquetePtr paquete){
    free(paquete->motivo);
    free(paquete->FechaSalida);
    free(paquete->FechaEntrega);
    free(paquete->dimension);

    free(paquete);
    return NULL;
}
