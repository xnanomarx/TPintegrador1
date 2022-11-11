#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "TDAmenu.h"
#include "MenuCarga.h"
#include "TDApaquete.h"
#include "TDAchofer.h"
#include "mostrar.h"

int seleccionAccion(int seleccion){
    switch(seleccion){
            case 1:
                system("cls");
                seleccion=menuSet();
                break;
            case 2:
                system("cls");
                seleccion=menuInfo();
                break;
            case 3:
                system("cls");
                seleccion=menuReparto();
                break;
        }
    return seleccion;
}

int menuPrincipal(){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Menu principal       |\r\n");
        printf("-----------------------------\r\n");
        printf("Seleccione accion a realizar\r\n\n");
        printf("1 - Cargar datos \n2 - Solicitar datos \n3 - Armar reparto \n0 - Salir\n ");
        scanf("%d",&opcion);
    return opcion;
}

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
    printf("1 - Chofer \n2 - Cliente \n3 - Vehiculo \n0 - Salir del programa\n");
    scanf("%d",&opcion);
    opcion=opcion+20;
    return opcion;
}




int menuInfo(){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("Seleccione campo a solicitar\n");
        printf("1 - Lista de choferes \n2 - Lista de clientes \n3 - Lista de vehiculos \n4 - Repartos \n0 - Salir del programa\n");
        scanf("%d",&opcion);
        opcion+=30;
    return opcion;
}



int menuReparto(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|       Menu reparto      |\r\n");
    printf("-----------------------------\r\n");
    printf("->REPARTO\nSeleccione accion a realizar\n");
    printf("1 - Nuevo reparto\n2 - Modificar reparto\n3 - Eliminar reparto\n9 - Volver\n0 - Salir del programa\n");
    scanf("%d",&opcion);
    opcion+=40;
    return opcion;
}
