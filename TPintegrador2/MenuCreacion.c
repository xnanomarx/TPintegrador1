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
#include "TDAentrega.h"
#include "archivosGuardar.h"

void menuNuevoChofer(PtrLista listaChoferes){
    fflush(stdin);
    system("cls");
    char* nomAuxChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* apeAuxChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* calleAuxChof=(char*)obtenerMemoria(sizeof(char)*(50));
    char* localidadAuxChof=(char*)obtenerMemoria(sizeof(char)*(50));
    int alturaAuxChof;
    bool validoChof;
    char* cuilAuxChof=(char*)obtenerMemoria(sizeof(char)*(12));
    printf("-----------------------------\n|           Crear           |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVO CHOFER\n");
    printf("Ingrese cuil de chofer (Sin espacio ni guion)\n");
    do{
        scanf(" %[^\n]%*c",cuilAuxChof);
        validoChof=validarCuil(cuilAuxChof);
        if(validoChof==false){
            printf("Cuil/Cuit no valido. Intente otra vez.\n");
        }
    }while(validoChof==false);
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

    domicilioPtr dom1=crearDomicilio(calleAuxChof,alturaAuxChof,localidadAuxChof);
    cuilPtr cuil1=crearCuil(cuilAuxChof);
    choferPtr chof1=crearChofer(nomAuxChof,apeAuxChof,dom1,cuil1);
    agregarDatoLista(listaChoferes,chof1);
    free(nomAuxChof);
    free(apeAuxChof);
    free(calleAuxChof);
    free(localidadAuxChof);
    free(cuilAuxChof);
    printf("Guardar cambios?");


}

/*int cuilRepetidoChof(PtrLista lista,cuilPtr cuil){
    int result=2;
    if(!listaVacia(lista)){
        choferPtr choferCheq;
        int contador=0;
        while(contador<longitudLista(lista)&&(result==2)){
            choferCheq=(choferPtr)getDatoLista(lista,contador);
            if(getCuilChofer(choferCheq)==cuil){
                result=1;
            }
            contador++;
        }
        destruirChofer(choferCheq);
    }

    return result;
}*/

void menuNuevoCliente(PtrLista listaClien){
    fflush(stdin);
    system("cls");
    bool validoClien=false;                                                               //flag
    char* nomAuxClien=(char*)obtenerMemoria(sizeof(char)*(50));                           //Pido memoria para auxiliares
    char* apeAuxClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* calleAuxClien=(char*)obtenerMemoria(sizeof(char)*(50));
    char* localidadAuxClien=(char*)obtenerMemoria(sizeof(char)*(50));
    int alturaAuxClien;
    char* cuilAuxClien=(char*)obtenerMemoria(sizeof(char)*(12));
    printf("-----------------------------\n|           Crear           |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVO CLIENTE\n");
    printf("Ingrese cuil de cliente (Sin espacio ni guion)\n");
    do{                                                                                      //verificador  de cuil
        scanf(" %[^\n]%*c",cuilAuxClien);
        validoClien=validarCuil(cuilAuxClien);
        if(validoClien==false){
            printf("Cuil/Cuit no valido. Intente otra vez.\n");
        }
    }while(validoClien==false);
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
    cuilPtr cuilCliente=crearCuil(cuilAuxClien);                                               //llamo a constructor
    domicilioPtr domCliente=crearDomicilio(calleAuxClien,alturaAuxClien,localidadAuxClien);
    clientePtr client=crearCliente(nomAuxClien,apeAuxClien,domCliente,cuilCliente);
    agregarDatoLista(listaClien,client);                                                        //Cargo a lista
 /*   free(nomAuxClien);                                                                        //libero la memoria pedida
    free(apeAuxClien);
    free(calleAuxClien);
    free(localidadAuxClien);*/
}

void menuNuevoVehiculo(PtrLista listaVehic){
    fflush(stdin);
    system("cls");
    char* tipoAux=(char*)obtenerMemoria(sizeof(char)*(50));
    char* marcaAux=(char*)obtenerMemoria(sizeof(char)*(50));
    char* modeloAux=(char*)obtenerMemoria(sizeof(char)*(50));
    char* patenteAux=(char*)obtenerMemoria(sizeof(char)*(50));
    printf("-----------------------------\n|           Crear           |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVO VEHICULO\n");
    printf("Ingrese tipo de vehiculo.\n");
    scanf(" %[^\n]%*c",tipoAux);
    printf("Ingrese marca.\n");
    scanf(" %[^\n]%*c",marcaAux);
    printf("Ingrese modelo.\n");
    scanf(" %[^\n]%*c",modeloAux);
    printf("Ingrese patente (Formato AAA123 sin espacios ni guiones).\n");
    scanf(" %[^\n]%*c",patenteAux);
    vehiculoPtr vehic=crearVehiculo(tipoAux,marcaAux,modeloAux,patenteAux);
    agregarDatoLista(listaVehic,vehic);
    free(tipoAux);                                                                        //libero la memoria pedida
    free(marcaAux);
    free(modeloAux);
    free(patenteAux);
}

void menuNuevoPaquete(PtrLista listaPaquetes){
    fflush(stdin);
    system("cls");
    int alt;
    int anch;
    int lar;
    int pes0;
    printf("-----------------------------\n|           Crear           |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVO PAQUETE\n");
    printf("Ingrese alto.\n");
    scanf(" %d",&alt);
    printf("Ingrese ancho.\n");
    scanf(" %d",&anch);
    printf("Ingrese ancho\n");
    scanf(" %d",&lar);
    printf("Ingrese peso.\n");
    scanf(" %d",&pes0);
    printf("Direccion de retiro:\n");
    domicilioPtr domRet=ingresarDomicilio();
    printf("Direccion de entrega:\n");
    domicilioPtr domDest=ingresarDomicilio();

    paquetePtr paque=crearPaquete(alt,anch,lar,pes0,domRet,domDest);
    agregarDatoLista(listaPaquetes,paque);
}

void menuNuevaEntrega(PtrLista listaEntregas,PtrLista listaClientes,PtrLista listaPaquete){
    fflush(stdin);
    system("cls");
    printf("-----------------------------\n|           Crear           |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVA ENTREGA\n");
    int selecClient;
    int seleccPaq;
    int salir;
    printf("Quien solicita la entrega?\n");
    mostrarListaClientes(listaClientes);
    scanf(" %d",&selecClient);
    selecClient--;
    system("cls");
    printf("Cual es su paquete?\n");
    mostrarListaPaquete(listaPaquete);
    scanf(" %d",&seleccPaq);
    seleccPaq--;
    entregaPtr entrega1=crearEntrega((paquetePtr)getDatoLista(listaPaquete,seleccPaq),(clientePtr)getDatoLista(listaClientes,selecClient));
    agregarDatoLista(listaEntregas,entrega1);
    system("cls");
    printf("-----------------------------\n|           Crear           |\r\n");
    printf("-----------------------------\r\n");
    printf("->NUEVA ENTREGA\n");
    printf("\nEntrega cargada con exito.\n\nIngrese cualquier numero para volver.\n");
    scanf(" %d",&salir);
}
