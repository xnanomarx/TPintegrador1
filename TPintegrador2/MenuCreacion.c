#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
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

int menuCrear(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("Seleccione campo a crear\n");
    printf("1 - Chofer \n2 - Cliente \n3 - Vehiculo \n0 - Salir del programa\n");
    scanf("%d",&opcion);
    opcion=opcion+10;
    return opcion;
}

void menuNuevoChofer(PtrLista listaChoferes, PtrLista listaDomCh, PtrLista listaCuilCh){
    fflush(stdin);
    system("cls");
    char* nomAuxChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* apeAuxChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* calleAuxChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* localidadAuxChof=(char*)obtenerMemoria(sizeof(char)*(50));
    int alturaAuxChof;
    bool validoChof;
    char cuilAuxChof[12];// inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVO CHOFER\n");
    printf("Ingrese nombre de chofer\n");
    scanf(" %[^\n]%*c",nomAuxChof);
    printf("Ingrese apellido de chofer\n");
    scanf(" %[^\n]%*c",apeAuxChof);
    printf("Ingrese localidad de domicilio de chofer\n");
    scanf(" %[^\n]%*c",localidadAuxChof);
    printf("Ingrese calle de domicilio de chofer\n");
    scanf(" %[^\n]%*c",calleAuxChof);
    printf("Ingrese altura de calle de chofer\n");
    scanf(" %d",&alturaAuxChof);
    printf("Ingrese cuil de chofer (Sin espacio ni guion)\n");
    do{
        scanf(" %[^\n]%*c",cuilAuxChof);
        validoChof=validarCuil(cuilAuxChof);
        if(validoChof==false){
            printf("Cuil/Cuit no valido. Intente otra vez.\n");
        }
    }while(validoChof==false);
    cuilPtr cuilChof=crearCuil(cuilAuxChof);
    domicilioPtr domChof=crearDomicilio(calleAuxChof,alturaAuxChof,localidadAuxChof);
    choferPtr chof=crearChofer(nomAuxChof,apeAuxChof,domChof,cuilChof);
}

void menuNuevoCliente(PtrLista listaClien, PtrLista listaDomCl, PtrLista listaCuilCl){
    fflush(stdin);
    system("cls");
    bool validoClien=false;                                                               //flag
    char* nomAuxClien=(char*)obtenerMemoria(sizeof(char)*(50));                           //Pido memoria para auxiliares
    char* apeAuxClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* calleAuxClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* localidadAuxClien=(char*)obtenerMemoria(sizeof(char)*(50));
    int alturaAuxClien;
    char cuilAuxClien[12];// inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVO CLIENTE\n");
    printf("Ingrese nombre de cliente\n");
    scanf(" %[^\n]%*c",nomAuxClien);
    printf("Ingrese apellido de cliente\n");
    scanf(" %[^\n]%*c",apeAuxClien);
    printf("Ingrese localidad de domicilio de cliente\n");
    scanf(" %[^\n]%*c",localidadAuxClien);
    printf("Ingrese calle de domicilio de cliente\n");
    scanf(" %[^\n]%*c",calleAuxClien);
    printf("Ingrese altura de calle de cliente\n");
    scanf(" %d",&alturaAuxClien);
    printf("Ingrese cuil de cliente (Sin espacio ni guion)\n");
    do{                                                                                      //verificador  de cuil
        scanf(" %[^\n]%*c",cuilAuxClien);
        validoClien=validarCuil(cuilAuxClien);
        if(validoClien==false){
            printf("Cuil/Cuit no valido. Intente otra vez.\n");
        }
    }while(validoClien==false);
    cuilPtr cuilCliente=crearCuil(cuilAuxClien);                                               //llamo a constructor
    domicilioPtr domCliente=crearDomicilio(calleAuxClien,alturaAuxClien,localidadAuxClien);
    clientePtr client=crearCliente(nomAuxClien,apeAuxClien,domCliente,cuilAuxClien);
    free(nomAuxClien);                                                                        //libero la memoria pedida
    free(apeAuxClien);
    free(calleAuxClien);
    free(localidadAuxClien);
    agregarDatoLista(listaClien,client);                                                        //Cargo a lista
    agregarDatoLista(listaDomCl,domCliente);
    agregarDatoLista(listaCuilCl,cuilCliente);
}

void menuNuevoVehiculo(){
    fflush(stdin);
    system("cls");
    char* tipoAux=(char*)obtenerMemoria(sizeof(char)*(50));
    char* marcaAux=(char*)obtenerMemoria(sizeof(char)*(50));
    char* modeloAux=(char*)obtenerMemoria(sizeof(char)*(50));
    char* patenteAux=(char*)obtenerMemoria(sizeof(char)*(50));
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVO VEHICULO\n");
    printf("Ingrese tipo de vehiculo.\n");
    scanf(" %[^\n]%*c",tipoAux);
    printf("Ingrese marca.\n");
    scanf(" %[^\n]%*c",marcaAux);
    printf("Ingrese modelo.\n");
    scanf(" %[^\n]%*c",tipoAux);
    printf("Ingrese patente (Formato AAA123 sin espacios ni guiones).\n");
    scanf(" %[^\n]%*c",tipoAux);
    vehiculoPtr vehic=crearVehiculo(tipoAux,marcaAux,modeloAux,patenteAux);
}
