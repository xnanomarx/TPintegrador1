#ifndef MENUCREACION_H_INCLUDED
#define MENUCREACION_H_INCLUDED
#include "lista.h"
#include "TDAcuil.h"



void menuNuevoCliente(PtrLista listaClien);

void menuNuevoChofer(PtrLista listaChoferes);
int cuilRepetidoChof(PtrLista lista,cuilPtr cuil);
void menuNuevoVehiculo(PtrLista listaVehic);

void menuNuevoPaquete(PtrLista listaPaquetes);

void menuNuevaEntrega(PtrLista listaEntregas,PtrLista listaClientes,PtrLista listaPaquete);

#endif // MENUCREACION_H_INCLUDED
