#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "TDAmenu.h"
#include "MenuCarga.h"
#include "TDApaquete.h"
#include "lista.h"

int menuSet(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("Seleccione accion a realizar\n");
    printf("1 - Crear \n2 - Modificar \n0 - Salir del programa\n");
    scanf("%d",&opcion);
    switch(opcion){
    case 1:
        system("cls");
        opcion=menuCrear();
        break;
    case 2:
        system("cls");
        opcion=menuModificar();
        break;
    }
    return opcion;
}

int menuModificar(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("Seleccione campo a modificar\n");
    printf("1 - Chofer \n2 - Cliente \n3 - Vehiculo \n4 - Reparto\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    switch(opcion){
    case 1:
        system("cls");
        opcion=listaModifChofer();
        break;
    case 2:
        system("cls");
        opcion=menuModifCliente();
        break;
    }
    return opcion;
}

int menuChofer(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->CHOFER\nSeleccione acción a realizar\n");
    printf("1 - Nuevo chofer \n2 - Modificar chofer\n");
    scanf("%d",&opcion);
    if(opcion==1){
            opcion=menuNuevoChofer();}
    else{
            opcion=listaModifChofer();}
    return opcion;
}

int listaModifChofer(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->CHOFER\nSeleccione chofer a modificar\n");
    printf("");  //lista de choferes
    scanf("%d",&opcion);
    return opcion;
}

int menuModifCliente(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->CLIENTE\nSeleccione campo a modificar\n");
    printf("1 - Nombre y apellido \n2 - Domicilio \n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}

int menuReparto(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->REPARTO\nSeleccione accion a realizar\n");
    printf("1 - Nuevo reparto\n2 - Modificar reparto\n3 - Eliminar reparto\n9 - Volver\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuNuevoReparto(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->NUEVO REPARTO\nSeleccione dato a ingresar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuModifReparto(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->MODIFICAR REPARTO\nSeleccione dato a modificar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver\n0 - Salir del programa\n");
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
int menuPila(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->PILA DE REPARTO\nSeleccione accion a realizar\n");
    printf("1 - Agregar paquete \n2 - Modificar paquete \n3 - Borrar paquete\n9 - Volver\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuNuevoPaquete(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->NUEVO PAQUETE\nSeleccione dato a ingresar\n");
    printf("1 - Codigo \n2 - Altura \n3 - Ancho \n4 - Largo\n5 - Peso\n9 - Volver\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuModifPaquete(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->MODIFICAR PAQUETE\nSeleccione dato a ingresar\n");
    printf("1 - Codigo \n2 - Altura \n3 - Ancho \n4 - Largo\n5 - Peso\n9 - Volver\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuBorrarPaquete(){
    system("cls");
    int paquete;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->ELIMINAR PAQUETE\nIngrese codigo de paquete a eliminar.\n");
    scanf("%d",&paquete);
    return paquete;
}
int menuVehiculo(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->VEHICULO\nSeleccione accion a realizar\n");
    printf("1 - Agregar vehiculo \n2 - Modificar vehiculo \n3 - Borrar vehiculo\n9 - Volver\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}

int menuModifVehiculo(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->MODIFICAR VEHICULO\nSeleccione dato a modificar\n");
    printf("1 - Tipo \n2 - Marca \n3 - Modelo \n4 - Patente\n\n9 - Volver\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuBorrarVehiculo(int seleccion){
    system("cls");
    int vehiculo;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->ELIMINAR VEHICULO\nIngrese patente de vehiculo a eliminar.\n");
    scanf("%d",&vehiculo);
    return vehiculo;
}
