#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDAreparto.h"
#include "TDAchofer.h"
#include "TDAvehiculo.h"
#include "TDAfecha.h"
#include "TDAhora.h"

repartoPtr crearReparto(choferPtr chof, vehiculoPtr vehic, PtrPila pil,FechaPtr fechaSalida){
    repartoPtr repart=(repartoPtr)obtenerMemoria(sizeof(reparto));
    repart->chofer=chof;
    repart->vehiculo=vehic;
    repart->pila=pil;
    repart->fechaSalida=fechaSalida;
    repart->horaLlegada=NULL;
    return repart;
}

repartoPtr destruirReparto(repartoPtr reparto){
    free(reparto);
    return NULL;
}



void mostrarReparto(repartoPtr rep,int numRep){
    printf("--------Reparto %d--------\nFecha: ",numRep);
    mostrarFechaYHora(rep->fechaSalida);
    printf("\nVehiculo: %s. %s %s. Dominio %s",getTipo(rep->vehiculo),getMarca(rep->vehiculo),getModelo(rep->vehiculo),getPatente(rep->vehiculo));
    printf("\nChofer: %s, %s. CUIL/CUIT %s\n",getApellidoChofer(rep->chofer),getNombreChofer(rep->chofer),rep->chofer->cuil->cuilUsuario);
}
