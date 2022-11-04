#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "TDAmenu.h"
#include "TDApaquete.h"

int menuSet(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\nSeleccione campo a modificar\n");
    printf("1 - Chofer \n2 - Cliente \n3 - Reparto \n0 - Volver al menu principal\n");
    scanf("%d",&opcion);
    switch(opcion){
        case 1:
            system("cls");
            opcion=menuSetChofer();
            break;
        case 2:
            system("cls");
            opcion=menuSetCliente();
            break;
        case 3:
            system("cls");
            opcion=menuReparto();
            break;
    }
    return opcion;
}
int menuSetChofer(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("->CHOFER\nSeleccione dato a modificar\n");
    printf("1 - Nombre y apellido \n2 - Domicilio \n3 - CUIL/CUIT \n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuSetDomicilio(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->DOMICILIO\nSeleccione dato a modificar\n");
    printf("1 - Direccion \n3 - Localidad \n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuSetCliente(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->CLIENTE\nSeleccione dato a modificar\n");
    printf("1 - Nombre y apellido \n2 - Domicilio \n3 - CUIL/CUIT \n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuReparto(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->REPARTO\nSeleccione accion a realizar\n");
    printf("1 - Nuevo reparto\n2 - Modificar reparto\n3 - Eliminar reparto\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuNuevoReparto(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->NUEVO REPARTO\nSeleccione dato a ingresar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuModifReparto(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->MODIFICAR REPARTO\nSeleccione dato a modificar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver\n0 - Menu Principal\n");
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
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->PILA DE REPARTO\nSeleccione accion a realizar\n");
    printf("1 - Agregar paquete \n2 - Modificar paquete \n3 - Borrar paquete\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuNuevoPaquete(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->NUEVO PAQUETE\nSeleccione dato a ingresar\n");
    printf("1 - Codigo \n2 - Altura \n3 - Ancho \n4 - Largo\n5 - Peso\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuModifPaquete(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->MODIFICAR PAQUETE\nSeleccione dato a ingresar\n");
    printf("1 - Codigo \n2 - Altura \n3 - Ancho \n4 - Largo\n5 - Peso\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuBorrarPaquete(){
    system("cls");
    int paquete;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->ELIMINAR PAQUETE\nIngrese codigo de paquete a eliminar.\n");
    scanf("%d",&paquete);
    return paquete;
}
int menuVehiculo(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->VEHICULO\nSeleccione accion a realizar\n");
    printf("1 - Agregar vehiculo \n2 - Modificar vehiculo \n3 - Borrar vehiculo\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuNuevoVehiculo(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->NUEVO VEHICULO\nSeleccione dato a ingresar\n");
    printf("1 - Tipo \n2 - Marca \n3 - Modelo \n4 - Patente\n\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuModifVehiculo(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->MODIFICAR VEHICULO\nSeleccione dato a modificar\n");
    printf("1 - Tipo \n2 - Marca \n3 - Modelo \n4 - Patente\n\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuBorrarVehiculo(int seleccion){
    system("cls");
    int vehiculo;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->ELIMINAR VEHICULO\nIngrese patente de vehiculo a eliminar.\n");
    scanf("%d",&vehiculo);
    return vehiculo;
}
