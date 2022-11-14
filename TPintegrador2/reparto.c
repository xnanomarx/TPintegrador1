#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include "mostrar.h"
#include "cola.h"
#include "lista.h"
#include "TDAPila.h"
#include "nodo.h"
#include "TDAmenu.h"
#include "MenuCreacion.h"
#include "MenuCarga.h"
#include "modificar.h"
#include "TDAchofer.h"
#include "TDAcliente.h"
#include "TDAvehiculo.h"
#include "TDAcuil.h"
#include "TDApaquete.h"
#include "TDAdomicilio.h"
#include "TDAfecha.h"
#include "TDAhora.h"
#include "TDApaquete.h"
#include "TDAreparto.h"
#include "TDAentrega.h"
#include "util.h"


void menuNuevoReparto(PtrLista vehic,PtrLista chofers,PtrLista listaEntr,PtrPila pilaEntregas,PtrLista repartos){
    fflush(stdin);
    system("cls");
    int agregar=1;
    int selecVehic;
    int selecChof;
    int selecEntr=1;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVO REPARTO\n\n");
    printf("Seleccione un vehiculo a asignar:\n\n");
    mostrarListaVehiculo(vehic);
    scanf(" %d",&selecVehic);
    selecVehic--;
    system("cls");
    printf("Ingrese chofer a asignar:\n\n");
    mostrarListaChoferes(chofers);
    scanf(" %d",&selecChof);
    selecChof--;
    system("cls");
    printf("Ingrese fecha y hora de salida\n");
    FechaPtr fechaRepSalida=pedirFecha();
    do{
        system("cls");
        printf("Seleccione entrega a asignar segun su numero.\n");
        mostrarListaEntregas(listaEntr);
        scanf(" %d",&selecEntr);
        selecEntr--;
        apilar(pilaEntregas,removerDeLista(listaEntr,selecEntr));
        printf("Desea apilar mas?\n1 - Si\n2 - No\n");
        scanf(" %d",&agregar);
    }while((agregar==1)&&(!listaVacia(listaEntr)));
    repartoPtr reparto1=crearReparto((choferPtr)getDatoLista(chofers,selecChof),(vehiculoPtr)getDatoLista(vehic,selecVehic),pilaEntregas,fechaRepSalida);
    agregarDatoLista(repartos,reparto1);
}

int menuModifReparto(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->MODIFICAR REPARTO\nSeleccione dato a modificar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver al inicio\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuBorrarReparto(){
    system("cls");
    int reparto;
    printf("\r\n\n->ELIMINAR REPARTO\nIngrese referencia de reparto a eliminar.\n");
    scanf("%d",&reparto);
    return reparto;
}


