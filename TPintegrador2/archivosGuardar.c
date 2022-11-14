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
#include "reparto.h"
#include "TDAchofer.h"
#include "TDAcliente.h"
#include "TDAvehiculo.h"
#include "TDAcuil.h"
#include "TDApaquete.h"
#include "TDAdomicilio.h"
#include "TDAfecha.h"
#include "TDAhora.h"
#include "TDAentrega.h"
#include "TDAreparto.h"

//CHOFER

void guardarChofer(PtrLista listaChofer){
    int noPudoLeer;
    FILE* archivoCantChofer;
    int cantChofer=longitudLista(listaChofer); //inicializá siempre!
    archivoCantChofer=fopen("cantChofer.bin","wb");
    if(archivoCantChofer!=NULL){
        fwrite(&cantChofer,sizeof(int),1,archivoCantChofer);
        fclose(archivoCantChofer);
    }else{
        printf("No pudo abrirse el archivo para su escritura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
    FILE* archivoChofer;
    choferAux chofer1[cantChofer];
    for(int i=0;i<cantChofer;i++){
        strcpy(chofer1[i].apellidoChAux,getApellidoChofer(getDatoLista(listaChofer,i)));
        strcpy(chofer1[i].nombreChAux,getNombreChofer(getDatoLista(listaChofer,i)));
        strcpy(chofer1[i].localidadAux,getLocalidadChofer(getDatoLista(listaChofer,i)));
        strcpy(chofer1[i].calleAux,getCalleChofer(getDatoLista(listaChofer,i)));
        chofer1[i].alturaAux=getAlturaChofer(getDatoLista(listaChofer,i));
        strcpy(chofer1[i].cuilAux,getCuilChofer(getDatoLista(listaChofer,i)));
    }
    archivoChofer=fopen("archivoChoferes.bin","wb");
    if(archivoChofer!=NULL){
        fwrite(&chofer1,sizeof(choferAux),cantChofer,archivoChofer);
        fclose(archivoChofer);
    }else{
        printf("No pudo abrirse el archivo para su escritura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}



//CLIENTE

void guardarCliente(PtrLista listaCliente){
    int noPudoLeer;
    FILE* archivoCantCliente;
    int cantCliente=longitudLista(listaCliente); //inicializá siempre!
    archivoCantCliente=fopen("cantCliente.bin","wb");
    if(archivoCantCliente!=NULL){
        fwrite(&cantCliente,sizeof(int),1,archivoCantCliente);
        fclose(archivoCantCliente);
    }else{
        printf("No pudo abrirse el archivo para su escritura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
    FILE* archivoCliente;
    clienteAux cliente1[cantCliente];
    for(int i=0;i<cantCliente;i++){
        strcpy(cliente1[i].apellidoAux,getApellidoCliente(getDatoLista(listaCliente,i)));
        strcpy(cliente1[i].nombreAux,getNombreCliente(getDatoLista(listaCliente,i)));
        strcpy(cliente1[i].localidadAux,getLocalidadCliente(getDatoLista(listaCliente,i)));
        strcpy(cliente1[i].calleAux,getCalleCliente(getDatoLista(listaCliente,i)));
        cliente1[i].alturaAux=getAlturaCliente(getDatoLista(listaCliente,i));
        strcpy(cliente1[i].cuilAux,getCuilCliente(getDatoLista(listaCliente,i)));
    }
    archivoCliente=fopen("archivoClientees.bin","wb");
    if(archivoCliente!=NULL){
        fwrite(&cliente1,sizeof(clienteAux),cantCliente,archivoCliente);
        fclose(archivoCliente);
    }else{
        printf("No pudo abrirse el archivo para su escritura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}

//ENTREGA

void guardarEntrega(PtrLista listaEntrega){
    int noPudoLeer;
    FILE* archivoCantEntrega;
    int cantEntrega=longitudLista(listaEntrega); //inicializá siempre!
    archivoCantEntrega=fopen("cantEntrega.bin","wb");
    if(archivoCantEntrega!=NULL){
        fwrite(&cantEntrega,sizeof(int),1,archivoCantEntrega);
        fclose(archivoCantEntrega);
    }else{
        printf("No pudo abrirse el archivo para su escritura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
    FILE* archivoEntrega;
    entregaAux entrega1[cantEntrega];
    for(int i=0;i<cantEntrega;i++){
        strcpy(entrega1[i].nombreAux,getNombreClienteEntrega(getDatoLista(listaEntrega,i)));
        strcpy(entrega1[i].apellidoAux,getApellidoCliente(getDatoLista(listaEntrega,i)));
        strcpy(entrega1[i].calleAux,getCalleEntrega(getDatoLista(listaEntrega,i)));
        strcpy(entrega1[i].localidadAux,getLocalidadEntrega(getDatoLista(listaEntrega,i)));
        strcpy(entrega1[i].cuilAux,getCuilEntrega(getDatoLista(listaEntrega,i)));
        strcpy(entrega1[i].motivoAux,getMotivo(getDatoLista(listaEntrega,i)));
        strcpy(entrega1[i].calleRetiroAux,getCalleRetiro(getDatoLista(listaEntrega,i)));
        strcpy(entrega1[i].localidadRetiroAux,getLocalidadRetiro(getDatoLista(listaEntrega,i)));
        strcpy(entrega1[i].calleEntregaAux,getcalleEntrega(getDatoLista(listaEntrega,i)));
        strcpy(entrega1[i].localidadEntregaAux,getLocalidadEntrega(getDatoLista(listaEntrega,i)));
        entrega1[i].estadoEntregaAux=getEstadoEntrega(getDatoLista(listaEntrega,i));
        entrega1[i].alturaAux=getAltoEntr(getDatoLista(listaEntrega,i));
        entrega1[i].codigoAux=getCodigoEntr(getDatoLista(listaEntrega,i));
        entrega1[i].altoAux=getAltoEntr(getDatoLista(listaEntrega,i));
        entrega1[i].anchoAux=getAnchoEntr(getDatoLista(listaEntrega,i));
        entrega1[i].largoAux=getLargoEntr(getDatoLista(listaEntrega,i));
        entrega1[i].pesoAux=getPesoEntr(getDatoLista(listaEntrega,i));
        entrega1[i].alturaRetiroAux=getAlturaRetiro(getDatoLista(listaEntrega,i));
        entrega1[i].alturaEntregaAux=getAlturaEntrega(getDatoLista(listaEntrega,i));
        entrega1[i].diaAux=getDiaEntr(getDatoLista(listaEntrega,i));
        entrega1[i].mesAux=getMesEntr(getDatoLista(listaEntrega,i));
        entrega1[i].anioAux=getAnioEntr(getDatoLista(listaEntrega,i));
    }
    archivoEntrega=fopen("archivoEntrega.bin","wb");
    if(archivoEntrega!=NULL){
        fwrite(&entrega1,sizeof(entregaAux),cantEntrega,archivoEntrega);
        fclose(archivoEntrega);
    }else{
        printf("No pudo abrirse el archivo para su escritura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}

//PAQUETE

void guardarPaquete(PtrLista listaPaquete){
    int noPudoLeer;
    FILE* archivoCantPaquete;
    int cantPaquete=longitudLista(listaPaquete); //inicializá siempre!
    archivoCantPaquete=fopen("cantPaquete.bin","wb");
    if(archivoCantPaquete!=NULL){
        fwrite(&cantPaquete,sizeof(int),1,archivoCantPaquete);
        fclose(archivoCantPaquete);
    }else{
        printf("No pudo abrirse el archivo para su escritura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
    FILE* archivoPaquete;
    paqueteAux paquete1[cantPaquete];
    for(int i=0;i<cantPaquete;i++){
        strcpy(paquete1[i].calleEntregaAux,getcalleEntregaPaq(getDatoLista(listaPaquete,i)));
        strcpy(paquete1[i].localidadEntregaAux,getLocalidadEntregaPaq(getDatoLista(listaPaquete,i)));
        strcpy(paquete1[i].localidadRetiroAux,getLocalidadRetiroPaq(getDatoLista(listaPaquete,i)));
        strcpy(paquete1[i].calleRetiroAux,getCalleRetiroPaq(getDatoLista(listaPaquete,i)));

    }
    archivoPaquete=fopen("archivopaquetees.bin","wb");
    if(archivoPaquete!=NULL){
        fwrite(&paquete1,sizeof(paqueteAux),cantPaquete,archivoPaquete);
        fclose(archivoPaquete);
    }else{
        printf("No pudo abrirse el archivo para su escritura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}


//VEHICULO

void guardarVehiculo(PtrLista listaVehiculo){
    int noPudoLeer;
    FILE* archivoCantVehiculo;
    int cantVehiculo=longitudLista(listaVehiculo); //inicializá siempre!
    archivoCantVehiculo=fopen("cantVehiculo.bin","wb");
    if(archivoCantVehiculo!=NULL){
        fwrite(&cantVehiculo,sizeof(int),1,archivoCantVehiculo);
        fclose(archivoCantVehiculo);
    }else{
        printf("No pudo abrirse el archivo para su escritura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}













