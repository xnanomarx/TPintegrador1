#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "TDAmenu.h"
#include "MenuCarga.h"
#include "TDApaquete.h"
#include "TDAchofer.h"


int seleccionAccion(){
    int opcion;
    opcion=menuPrincipal();
        switch(opcion){
            case 1:
                system("cls");
                opcion=menuSet();
                break;
            case 2:
                system("cls");
                opcion=menuInfo();
                break;
        }
    return opcion;
}

int menuPrincipal(){
        system("cls");
        int opcion;
        printf("\r\n\r\n"); // inicio
        printf("-----------------------------\n|      Menu principal       |\r\n");
        printf("-----------------------------\r\n\r\n");
        printf("Seleccione accion a realizar\r\n\n");
        printf("1 - Cargar datos \n2 - Solicitar datos \n\n ");
        scanf("%d",&opcion);
    return opcion;
}

int menuInfo(){
        system("cls");
        int opcion;
        printf("\r\n\r\n"); // inicio
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n\r\n");
        printf("Seleccione campo a solicitar\n");
        printf("1 - Chofer \n2 - Cliente \n3 - Reparto \n0 - Volver al menu principal\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                system("cls");
                opcion=menuInfoChofer();
                opcion+=10;
                break;
            case 2:
                system("cls");
                opcion=menuInfoCliente();
                opcion+=10;
                break;
            case 3:
                system("cls");
                opcion=menuInfoReparto();
                opcion+=10;
                break;
        }
    return opcion;
}
int menuInfoChofer(){
        system("cls");
        int opcion;
        printf("\r\n\r\n"); // inicio
        printf("-----------------------------\n|      Solicitar datos      |\r\n");
        printf("-----------------------------\r\n\r\n");
        printf("\r\n\n->CHOFER\nSeleccione dato a solicitar\n");
        printf("1 - Nombre y apellido \n2 - Domicilio \n3 - CUIL/CUIT \n9 - Volver\n0 - Menu Principal\n");
        scanf("%d",&opcion);
        return opcion;
}
int menuInfoCliente(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->CLIENTE\nSeleccione dato a solicitar\n");
    printf("1 - Nombre y apellido \n2 - Domicilio \n3 - CUIL/CUIT \n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuInfoReparto(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->REPARTO\nSeleccione dato a solicitar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuInfoPaquete(){
    system("cls");
    int codigo;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->PAQUETE\nIngrese codigo de paquete.\n");
    scanf("%d",&codigo);
    return codigo;
}
int menuInfoPaquete2(){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->PAQUETE\nSeleccione dato a solicitar\n");
    printf("1 - Codigo \n2 - Altura \n3 - Ancho \n4 - Largo\n5 - Peso\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int EstadoDeEntrega(int codigo,bool estadoEntrega){
    system("cls");
    int verMotivo=0;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
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
//void EstadoDeEntrega2(int mostrar){
//    if(mostrar==1){
//        printf("%s",getmotivo());
//    }
//}
/*int menuCuil(char cuil[11]){
    system("cls");
    printf("Ingrese CUIL/CUIT a validar (sin espacios ni guiones).");
    validarCuil(cuil);
}*/
