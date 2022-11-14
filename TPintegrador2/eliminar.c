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
#include "util.h"


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
    printf("1 - Agregar vehiculo \n2 - Modificar vehiculo \n3 - Borrar vehiculo\n9 - Volver al inicio \n0 - Salir del programa\n");
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
