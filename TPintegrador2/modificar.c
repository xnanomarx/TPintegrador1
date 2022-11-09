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

int obtenerPosicionChof(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->CHOFER\nSeleccione el chofer a modificar:\n");
    printf("");
    return opcion;
}

int obtenerPosicionClien(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->CLIENTE\nSeleccione el cliente a modificar:\n");
    return opcion;
}

int obtenerPosicionVeh(){
    system("cls");
    int opcion;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->VEHÍCULO\nSeleccione el vehiculo a modificar:\n");
    return opcion;
}

void modifChofer(PtrLista listaChoferes,int posicionCh){
    int opcion=listaModifChofer();
    system("cls");
    char* newCalleChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newLocalidadChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newAlturaChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newNombreChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newApellidoChof=(char*)obtenerMemoria(sizeof(char)*(50));
    switch(opcion){
        case 1:
            setNombreChofer(getDatoLista(listaChoferes,posicionCh),newNombreChof);
            break;
        case 2:
            setApellidoChofer(getDatoLista(listaChoferes,posicionCh),newApellidoChof);
            break;
        case 3:
            printf("Ingrese nueva localidad.\n");                                   //pido nuevo dato
            scanf(" %[^\n]%*c",newLocalidadChof);                                  //leo
            setLocalidad(getDatoLista(listaChoferes,posicionCh),newLocalidadChof); //seteo
            scanf(" %[^\n]%*c",newCalleChof);
            printf("Ingrese nueva calle.\n");
            setCalle(getDatoLista(listaChoferes,posicionCh),newCalleChof);
            printf("Ingrese nueva altura.\n");
            scanf(" %[^\n]%*c",newCalleChof);
            setNumero(getDatoLista(listaChoferes,posicionCh),newAlturaChof);
            break;
    }
}


void modifCliente(int opcion,PtrLista listaClientes,int posicionCl){
    system("cls");
    char* newCalleClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newLocalidadClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newAlturaClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newNombreClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newApellidoClien=(char*)obtenerMemoria(sizeof(char)*(50));
    switch(opcion){
        case 1:
            setNombreCliente(getDatoLista(listaClientes,posicionCl),newNombreClien);
        case 2:
            setApellidoCliente(getDatoLista(listaClientes,posicionCl),newApellidoClien);
        case 3:
            printf("Ingrese nueva localidad.\n");                                   //pido nuevo dato
            scanf(" %[^\n]%*c",newLocalidadClien);                                  //leo
            setLocalidad(getDatoLista(listaClientes,posicionCl),newLocalidadClien); //seteo
            scanf(" %[^\n]%*c",newCalleClien);
            printf("Ingrese nueva calle.\n");
            setCalle(getDatoLista(listaClientes,posicionCl),newCalleClien);
            printf("Ingrese nueva altura.\n");
            scanf(" %[^\n]%*c",newCalleClien);
            setNumero(getDatoLista(listaClientes,posicionCl),newAlturaClien);
    }
}

void modifVehiculo(int opcion,PtrLista listaVehiculos,int posicionV){
    system("cls");
    char* newtipo=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newmarca=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newmodelo=(char*)obtenerMemoria(sizeof(char)*(50));
    char* newpatente=(char*)obtenerMemoria(sizeof(char)*(50));
    switch(opcion){
        case 1:
            setTipo(getDatoLista(listaVehiculos,posicionV),newtipo);
        case 2:
            setMarca(getDatoLista(listaVehiculos,posicionV),newmarca);
        case 3:
            setModelo(getDatoLista(listaVehiculos,posicionV),newmodelo);
        case 4:
            setPatente(getDatoLista(listaVehiculos,posicionV),newpatente);
        }
}

