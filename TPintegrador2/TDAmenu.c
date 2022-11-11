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
        }
    return seleccion;
}

int menuPrincipal(){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Menu principal       |\r\n");
        printf("-----------------------------\r\n");
        printf("Seleccione accion a realizar\r\n\n");
        printf("1 - Cargar datos \n2 - Solicitar datos \n\n ");
        scanf("%d",&opcion);
    return opcion;
}

int menuInfo(){
        system("cls");
        int opcion;
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n");
        printf("Seleccione campo a solicitar\n");
        printf("1 - Lista de choferes \n2 - Lista de clientes \n3 - Repartos \n0 - Salir del programa\n");
        scanf("%d",&opcion);
        opcion+=30;
    return opcion;
}
