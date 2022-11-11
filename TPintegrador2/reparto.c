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
#include "TDAdimension.h"
#include "TDAdomicilio.h"
#include "TDAfecha.h"
#include "TDAhora.h"
#include "TDApaquete.h"
#include "TDAreparto.h"
#include "util.h"


int menuNuevoReparto(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVO REPARTO\nSeleccione dato a ingresar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - Direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver al inicio\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuModifReparto(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->MODIFICAR REPARTO\nSeleccione dato a modificar\n");
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
int menuPila(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->PILA DE REPARTO\nSeleccione accion a realizar\n");
    printf("1 - Agregar paquete \n2 - Modificar paquete \n3 - Borrar paquete\n9 - Volver al inicio\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuNuevoPaquete(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->NUEVO PAQUETE\nSeleccione dato a ingresar\n");
    printf("1 - Codigo \n2 - Altura \n3 - Ancho \n4 - Largo\n5 - Peso\n9 - Volver al inicio \n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuModifPaquete(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("\r\n\n->MODIFICAR PAQUETE\nSeleccione dato a ingresar\n");
    printf("1 - Codigo \n2 - Altura \n3 - Ancho \n4 - Largo\n5 - Peso\n9 - Volver al inicio \n0 - Salir del programa\n");
    scanf("%d",&opcion);
    return opcion;
}
