#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "mostrar.h"
#include "MenuCreacion.h"
#include "TDAmenu.h"
#include "MenuCarga.h"
#include "TDApaquete.h"
#include "TDAchofer.h"
#include "TDAdomicilio.h"
#include "TDAcuil.h"
#include "TDAcliente.h"
#include "util.h"
#include "TDAcuil.h"
#include "TDAvehiculo.h"
#include "lista.h"
#include "cola.h"
#include "TDAPila.h"

void menuInfoChofer(PtrLista listaChofer){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("->CHOFER\nLista de choferes\n");
        mostrarListaChoferes(listaChofer);
        printf("Ingrese cualquier tecla para volver.");  //lista
        scanf("%d",&opcion);
}

void mostrarListaChoferes(PtrLista lista){
    int codigoChofer=1;
    PtrLista listaAux=crearLista();
    agregarLista(listaAux,lista);
    while(!listaVacia(listaAux)){
        mostrarChofer((choferPtr)getCabecera(listaAux),codigoChofer);
        PtrLista listaADestruir=listaAux;
        listaAux=getResto(listaAux);
        destruirLista(listaADestruir,false);
        codigoChofer++;
    }
    destruirLista(listaAux,false);
    printf("\n");
}

void menuInfoCliente(PtrLista listaCliente){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("->CLIENTE\nLista de clientes:\n\n");
        mostrarListaClientes(listaCliente);
        printf("Ingrese cualquier tecla para volver.");  //lista
        scanf("%d",&opcion);
}

void mostrarListaClientes(PtrLista lista){
    int codigoCliente=1;
    PtrLista listaAux=crearLista();
    agregarLista(listaAux,lista);
    while(!listaVacia(listaAux)){
        mostrarCliente((clientePtr)getCabecera(listaAux),codigoCliente);
        PtrLista listaADestruir=listaAux;
        listaAux=getResto(listaAux);
        destruirLista(listaADestruir,false);
        codigoCliente++;
    }
    destruirLista(listaAux,false);
    printf("\n");
}

void menuInfoVehiculo(PtrLista listaVehiculo){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("->VEHICULO\nLista de vehiculos:\n\n");
        mostrarListaVehiculo(listaVehiculo);
        printf("Ingrese cualquier tecla para volver.");  //lista
        scanf("%d",&opcion);
}

void mostrarListaVehiculo(PtrLista lista){
    int codigoVehiculo=1;
    PtrLista listaAux=crearLista();
    agregarLista(listaAux,lista);
    while(!listaVacia(listaAux)){
        mostrarVehiculo((vehiculoPtr)getCabecera(listaAux),codigoVehiculo);
        PtrLista listaADestruir=listaAux;
        listaAux=getResto(listaAux);
        destruirLista(listaADestruir,false);
        codigoVehiculo++;
    }
    destruirLista(listaAux,false);
    printf("\n");
}


void menuInfoReparto(PtrCola colaReparto){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->REPARTO\nSeleccione dato a solicitar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver\n0 - Salir del programa\n");
    scanf("%d",&opcion);
}
void menuInfoPaquete(PtrPila pilaReparto){
    system("cls");
    int codigo;
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->PAQUETE\nPila de reparto.\n\n");
}

int EstadoDeEntrega(int codigo,bool estadoEntrega){
    system("cls");
    int verMotivo=0;
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n");
    if(estadoEntrega==true){
        printf("El paquete %d fue entregado con éxito.\n",codigo);
    }
    else{
        printf("El paquete %d no fue entregado.\n",codigo);
        printf("Desea ver el motivo?\n1 - Si\n2 - No\n");
        scanf("%d",&verMotivo);
    }
    return verMotivo;
}

