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
#include "mostrar.h"
#include "TDAentrega.h"

void menuModifChofer(PtrLista lista){
    fflush(stdin);
    system("cls");
    char* nomChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* apeChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* calleChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* localidadChof=(char*)obtenerMemoria(sizeof(char)*(50));
    bool validoChof;
    char* cuilChof=(char*)obtenerMemoria(sizeof(char)*(12));
    int alturaChof;
    int opcion;
    int modif;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->CHOFER\nSeleccione numero de chofer a modificar.\n");
    mostrarListaChoferes(lista);
    scanf("%d",&opcion);
    opcion--;
    printf("Que desea modificar? \n1 - Nombre \n2 - Apellido \n3 - Domicilio \n4 - CUIL/CUIT \n0 - Salir del programa\n");
    scanf("%d",&modif);
    switch(modif){
        case 1:
            system("cls");
            printf("Ingrese nuevo nombre de chofer\n");
            scanf(" %[^\n]%*c",nomChof);
            setNombreChofer((choferPtr)getDatoLista(lista,opcion),nomChof);
            break;
        case 2:
            system("cls");
            printf("Ingrese nuevo apellido de chofer\n");
            scanf(" %[^\n]%*c",apeChof);
            setApellidoChofer((choferPtr)getDatoLista(lista,opcion),apeChof);
            break;
        case 3:
            system("cls");
            printf("Ingrese nueva localidad de domicilio de chofer\n");
            scanf(" %[^\n]%*c",localidadChof);
            printf("Ingrese nueva calle de domicilio de chofer\n");
            scanf(" %[^\n]%*c",calleChof);
            printf("Ingrese nueva altura de calle de chofer\n");
            scanf(" %d",&alturaChof);
            setLocalidadChofer((choferPtr)getDatoLista(lista,opcion),localidadChof);
            setCalleChofer((choferPtr)getDatoLista(lista,opcion),calleChof);
            setAlturaChofer((choferPtr)getDatoLista(lista,opcion),alturaChof);
            break;
        case 4:
            system("cls");
            printf("Ingrese nuevo cuil de chofer (Sin espacio ni guion)\n");
            do{
                scanf(" %[^\n]%*c",cuilChof);
                validoChof=validarCuil(cuilChof);
                if(validoChof==false){
                    printf("Cuil/Cuit no valido. Intente otra vez.\n");
                }
            }while(validoChof==false);
            setCuilChofer((choferPtr)getDatoLista(lista,opcion),cuilChof);
            break;
    }
}

void menuModifCliente(PtrLista lista){
    fflush(stdin);
    system("cls");
    char* nomClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* apeClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* calleClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* localidadClien=(char*)obtenerMemoria(sizeof(char)*(50));
    bool validoClien;
    char* cuilClien=(char*)obtenerMemoria(sizeof(char)*(12));
    int alturaClien;
    int opcion;
    int modif;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->CLIENTE\nSeleccione numero de cliente a modificar.\n");
    mostrarListaClientes(lista);
    scanf("%d",&opcion);
    opcion--;
    printf("Que desea modificar? \n1 - Nombre \n2 - Apellido \n3 - Domicilio \n4 - CUIL/CUIT \n - Salir del programa\n");
    scanf("%d",&modif);
    switch(modif){
        case 1:
            system("cls");
            printf("Ingrese nuevo nombre de cliente\n");
            scanf(" %[^\n]%*c",nomClien);
            setNombreCliente((clientePtr)getDatoLista(lista,opcion),nomClien);
            break;
        case 2:
            system("cls");
            printf("Ingrese nuevo apellido de cliente\n");
            scanf(" %[^\n]%*c",apeClien);
            setApellidoCliente((clientePtr)getDatoLista(lista,opcion),apeClien);
            break;
        case 3:
            system("cls");
            printf("Ingrese nueva localidad de domicilio de cliente\n");
            scanf(" %[^\n]%*c",localidadClien);
            printf("Ingrese nueva calle de domicilio de cliente\n");
            scanf(" %[^\n]%*c",calleClien);
            printf("Ingrese nueva altura de calle de cliente\n");
            scanf(" %d",&alturaClien);
            setLocalidadCliente((clientePtr)getDatoLista(lista,opcion),localidadClien);
            setCalleCliente((clientePtr)getDatoLista(lista,opcion),calleClien);
            setAlturaCliente((clientePtr)getDatoLista(lista,opcion),alturaClien);
            break;
        case 4:
            system("cls");
            printf("Ingrese nuevo cuil de cliente (Sin espacio ni guion)\n");
            do{
                scanf(" %[^\n]%*c",cuilClien);
                validoClien=validarCuil(cuilClien);
                if(validoClien==false){
                    printf("Cuil/Cuit no valido. Intente otra vez.\n");
                }
            }while(validoClien==false);
            setCuilCliente((clientePtr)getDatoLista(lista,opcion),cuilClien);
            break;
    }
}

void menuModifVehiculo(PtrLista listaVehic){
    fflush(stdin);
    system("cls");
    int opcion;
    int modif;
    char* tipoAux=(char*)obtenerMemoria(sizeof(char)*(50));
    char* marcaAux=(char*)obtenerMemoria(sizeof(char)*(50));
    char* modeloAux=(char*)obtenerMemoria(sizeof(char)*(50));
    char* patenteAux=(char*)obtenerMemoria(sizeof(char)*(50));
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->VEHICULO\nSeleccione numero de vehiculo a modificar.\n");
    mostrarListaVehiculo(listaVehic);
    scanf("%d",&opcion);
    opcion--;
    printf("Que desea modificar? \n1 - Tipo \n2 - Marca \n3 - Modelo \n4 - Patente \n - Salir del programa\n");
    scanf("%d",&modif);
    switch(modif){
        case 1:
            printf("Ingrese nuevo tipo de vehiculo.\n");
            scanf(" %[^\n]%*c",tipoAux);
            setTipo((vehiculoPtr)getDatoLista(listaVehic,opcion),tipoAux);
            break;
        case 2:
            printf("Ingrese nueva marca.\n");
            scanf(" %[^\n]%*c",marcaAux);
            setMarca((vehiculoPtr)getDatoLista(listaVehic,opcion),marcaAux);
            break;
        case 3:
            printf("Ingrese nuevo modelo.\n");
            scanf(" %[^\n]%*c",modeloAux);
            setModelo((vehiculoPtr)getDatoLista(listaVehic,opcion),modeloAux);
            break;
        case 4:
            printf("Ingrese nueva patente (Formato AAA123 sin espacios ni guiones).\n");
            scanf(" %[^\n]%*c",patenteAux);
            setPatente((vehiculoPtr)getDatoLista(listaVehic,opcion),patenteAux);
            break;
    }
    /*free(tipoAux);                                                                        //libero la memoria pedida
    free(marcaAux);
    free(modeloAux);
    free(patenteAux);*/
}

void menuModifPaquete(PtrLista listaPaq){
    fflush(stdin);
    system("cls");
    int opcion;
    int modi;
    int codNew;
    int altNew;
    int anchNew;
    int larNew;
    int pes0New;
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n");
    printf("->MODIFICAR PAQUETE\nSeleccione numero de paquete a modificar:\n");
    mostrarListaPaquete(listaPaq);
    scanf("%d",&modi);
    modi--;
    printf("Que desea modificar?\n1 - Altura \n2 - Ancho \n3 - Largo\n4 - Peso \n5 - Domicilio \n9 - Volver al inicio \n0 - Salir del programa\n");
    scanf("%d",&opcion);

    switch(opcion){
        case 1:
            printf("Ingrese nueva altura.\n");
            scanf(" %d",&altNew);
            setAltura((paquetePtr)getDatoLista(listaPaq,modi),altNew);
            break;
        case 2:
            printf("Ingrese nuevo ancho.\n");
            scanf(" %d",&anchNew);
            setAncho((paquetePtr)getDatoLista(listaPaq,modi),anchNew);
            break;
        case 3:
            printf("Ingrese nuevo largo.\n");
            scanf(" %d",&larNew);
            setLargo((paquetePtr)getDatoLista(listaPaq,modi),larNew);
            break;
        case 4:
            printf("Ingrese nuevo peso.\n");
            scanf(" %d",&pes0New);
            setPeso((paquetePtr)getDatoLista(listaPaq,modi),pes0New);
            break;
        case 5:
            printf("Ingrese nuevo domicilio de retiro.\n");
            setDomRPaq(listaPaq,ingresarDomicilio());
            printf("Ingrese nuevo domicilio de entrega.\n");
            setDomEPaq(listaPaq,ingresarDomicilio());
            break;
    }
    return opcion;
}


void menuModifEstadoEntrega(PtrLista listaEntrega,PtrLista listaEntregasCompletadas,PtrLista deposito){
    fflush(stdin);
    system("cls");
    char* motivo=(char*)obtenerMemoria(sizeof(char)*(100));
    int opcion;
    int estado;
    bool completa;
    printf("Seleccione la entrega a modificar estado\n");
    mostrarListaEntregas(listaEntrega);
    scanf(" %d",&opcion);
    opcion--;
    printf("La entrega se realizo con exito?\n1 - Si\n2 - No\n");
    scanf(" %d",&estado);
    if(estado==1){
        completa=true;
        setEstadoEntrega((entregaPtr)getDatoLista(listaEntrega,opcion),completa);
        printf("Cuando se realizó la entrega?");
        FechaPtr fechaEnt=pedirFecha();
        setFechaEntrega((entregaPtr)getDatoLista(listaEntrega,opcion),fechaEnt);
        agregarDatoLista(listaEntregasCompletadas,removerDeLista(listaEntrega,opcion));
    }else{
        printf("Motivo?");
        scanf(" %[^\n]%*c",motivo);
        setMotivo((entregaPtr)getDatoLista(listaEntrega,opcion),motivo);
        paquetePtr paqDevuelto=getPaquete((entregaPtr)getDatoLista(listaEntrega,opcion));
        agregarDatoLista(deposito,paqDevuelto);
        agregarDatoLista(listaEntregasCompletadas,removerDeLista(listaEntrega,opcion));
    }
}
