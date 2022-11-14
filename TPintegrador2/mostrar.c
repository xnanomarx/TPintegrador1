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
#include "TDApaquete.h"
#include "TDAentrega.h"
#include "TDAreparto.h"

void menuInfoChofer(PtrLista listaChofer){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("->CHOFER\nLista de choferes\n");
        if(!listaVacia(listaChofer)){
            mostrarListaChoferes(listaChofer);}
        else{
            printf("No hay choferes ingresados.\n\n");
        }
        printf("Ingrese cualquier tecla para volver.");  //lista
        scanf("%d",&opcion);
}

void mostrarListaChoferes(PtrLista lista){
    int numChof=1;
    for(int i=0;i<longitudLista(lista);i++){
        mostrarChofer((choferPtr)getDatoLista(lista,i),numChof);
        numChof++;
    }
    printf("\n");
}

void menuInfoCliente(PtrLista listaCliente){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("->CLIENTE\nLista de clientes:\n\n");
        if(!listaVacia(listaCliente)){
            mostrarListaClientes(listaCliente);}
        else{
            printf("No hay clientes ingresados.\n\n");
        }
        printf("Ingrese cualquier tecla para volver.");  //lista
        scanf("%d",&opcion);
}

void mostrarListaClientes(PtrLista lista){
    int numClien=1;
    for(int i=0;i<longitudLista(lista);i++){
        mostrarCliente((clientePtr)getDatoLista(lista,i),numClien);
        numClien++;
    }
    printf("\n");
}

void menuInfoVehiculo(PtrLista listaVehiculo){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("->VEHICULO\nLista de vehiculos:\n\n");
        if(!listaVacia(listaVehiculo)){
            mostrarListaVehiculo(listaVehiculo);}
        else{
            printf("No hay vehiculos ingresados.\n\n");
        }
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

void menuInfoPaquete(PtrLista listaPaquetes){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->PAQUETE\nDeposito.\n\n");
    if(!listaVacia(listaPaquetes)){
        mostrarListaPaquete(listaPaquetes);}
    else{
        printf("No hay paquetes ingresados.\n\n");
    }
    printf("Ingrese cualquier tecla para volver.\n");  //lista
    scanf("%d",&opcion);
}

void mostrarListaPaquete(PtrLista lista){
    int numPaq=1;
    for(int i=0;i<longitudLista(lista);i++){
        mostrarPaquete((paquetePtr)getDatoLista(lista,i),numPaq);
        numPaq++;
    }
    printf("\n");
}

void menuInfoEntregas(PtrLista listaEntr){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("->ENTREGAS\nLista de entregas:\n\n");
        if(!listaVacia(listaEntr)){
            mostrarListaEntregas(listaEntr);}
        else{
            printf("No hay entregas ingresadas.\n\n");
        }
        printf("Ingrese cualquier tecla para volver.");  //lista
        scanf("%d",&opcion);
}

void menuInfoEntregasFinalizadas(PtrLista listaEntr){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("->ENTREGAS\nLista de entregas finalizadas:\n\n");
        if(!listaVacia(listaEntr)){
            mostrarListaEstadoEntregas(listaEntr);}
        else{
            printf("No hay entregas finalizadas.\n\n");
        }
        printf("Ingrese cualquier tecla para volver.");  //lista
        scanf("%d",&opcion);
}


void menuInfoEntregasCurso(PtrLista listaEntr){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("->ENTREGAS\nLista de entregas en curso:\n\n");
        if(!listaVacia(listaEntr)){
            mostrarListaEstadoEntregas(listaEntr);}
        else{
            printf("No hay entregas en curso por el momento.\n\n");
        }
        printf("Ingrese cualquier tecla para volver.");  //lista
        scanf("%d",&opcion);
}

void mostrarListaEntregas(PtrLista listaEntr){
    int numEnt=1;
    for(int i=0;i<longitudLista(listaEntr);i++){
        mostrarEntrega((entregaPtr)getDatoLista(listaEntr,i),numEnt);
        numEnt++;
    }
    printf("\n");
}

void mostrarListaEstadoEntregas(PtrLista listaEntr){
    int numEnt=1;
    for(int i=0;i<longitudLista(listaEntr);i++){
        mostrarEstadoEntr((entregaPtr)getDatoLista(listaEntr,i),numEnt);
        numEnt++;
    }
    printf("\n");
}

void menuInfoReparto(PtrLista listaReparto){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("->REPARTO\nLista de repartos:\n\n");
        if(!listaVacia(listaReparto)){
            mostrarListaReparto(listaReparto);}
        else{
            printf("No hay repartos ingresados.\n\n");
        }
        printf("Ingrese cualquier tecla para volver.");  //lista
        scanf("%d",&opcion);
}

void mostrarListaReparto(PtrLista listaReparto){
    int codigoRep=1;
    int posicion=0;
    PtrLista listaAux=crearLista();
    agregarLista(listaAux,listaReparto);
    while(!listaVacia(listaAux)){
        mostrarReparto((repartoPtr)getDatoLista(listaAux,posicion),codigoRep);
        PtrLista listaADestruir=listaAux;
        listaAux=getResto(listaAux);
        destruirLista(listaADestruir,false);
        codigoRep++;
    }
    destruirLista(listaAux,false);
    printf("\n");
}

void mostrarPila(PtrPila pila){
    int cont=1;
    PtrPila pilaAux=crearPila();
    entregaPtr entregaAux;
    while(pilaVacia(pila)==false){
        entregaAux=desapilar(pila);
        mostrarEntrega(entregaAux,cont);
        apilar(pilaAux,entregaAux);
        cont++;
    }
}
