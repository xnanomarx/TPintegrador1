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
#include "archivosGuardar.h"

//CHOFER

void leerChofer(PtrLista listaChofer){
    int noPudoLeer;
    FILE* archivoCantChofer;
    int cantChofer=0; //inicializá siempre!
    archivoCantChofer=fopen("cantChofer.bin","rb");
    if(archivoCantChofer!=NULL){
        fread(&cantChofer,sizeof(int),1,archivoCantChofer);
        fclose(archivoCantChofer);
    }else{
        printf("No pudo abrirse el archivo para su lectura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }

  //  archivo
    choferPtr choferAux[cantChofer];
    for(int i=0;i<cantChofer;i++){


}
}
//CLIENTE

void leerCliente(PtrLista listaCliente){
    int noPudoLeer;
    FILE* archivoCantCliente;
    int cantCliente=longitudLista(listaCliente); //inicializá siempre!
    archivoCantCliente=fopen("cantCliente.bin","rb");
    if(archivoCantCliente!=NULL){
        fread(&cantCliente,sizeof(int),1,archivoCantCliente);
        fclose(archivoCantCliente);
    }else{
        printf("No pudo abrirse el archivo para su lectura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}

//CUIL

void leerCuil(PtrLista listaCuil){
    int noPudoLeer;
    FILE* archivoCantCuil;
    int cantCuil=longitudLista(listaCuil); //inicializá siempre!
    archivoCantCuil=fopen("cantCuil.bin","rb");
    if(archivoCantCuil!=NULL){
        fread(&cantCuil,sizeof(int),1,archivoCantCuil);
        fclose(archivoCantCuil);
    }else{
        printf("No pudo abrirse el archivo para su lectura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}

//DOMICILIO

void leerDomicilio(PtrLista listaDomicilio){
    int noPudoLeer;
    FILE* archivoCantDomicilio;
    int cantDomicilio=longitudLista(listaDomicilio); //inicializá siempre!
    archivoCantDomicilio=fopen("cantDomicilio.bin","rb");
    if(archivoCantDomicilio!=NULL){
        fread(&cantDomicilio,sizeof(int),1,archivoCantDomicilio);
        fclose(archivoCantDomicilio);
    }else{
        printf("No pudo abrirse el archivo para su lectura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}

//ENTREGA

void leerEntrega(PtrLista listaEntrega){
    int noPudoLeer;
    FILE* archivoCantEntrega;
    int cantEntrega=longitudLista(listaEntrega); //inicializá siempre!
    archivoCantEntrega=fopen("cantEntrega.bin","rb");
    if(archivoCantEntrega!=NULL){
        fread(&cantEntrega,sizeof(int),1,archivoCantEntrega);
        fclose(archivoCantEntrega);
    }else{
        printf("No pudo abrirse el archivo para su lectura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}

//FECHA

void leerFecha(PtrLista listaFecha){
    int noPudoLeer;
    FILE* archivoCantFecha;
    int cantFecha=longitudLista(listaFecha); //inicializá siempre!
    archivoCantFecha=fopen("cantFecha.bin","rb");
    if(archivoCantFecha!=NULL){
        fread(&cantFecha,sizeof(int),1,archivoCantFecha);
        fclose(archivoCantFecha);
    }else{
        printf("No pudo abrirse el archivo para su lectura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}

//HORA

void leerHora(PtrLista listaHora){
    int noPudoLeer;
    FILE* archivoCantHora;
    int cantHora=longitudLista(listaHora); //inicializá siempre!
    archivoCantHora=fopen("cantHora.bin","rb");
    if(archivoCantHora!=NULL){
        fread(&cantHora,sizeof(int),1,archivoCantHora);
        fclose(archivoCantHora);
    }else{
        printf("No pudo abrirse el archivo para su lectura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}

//PAQUETE

void leerPaquete(PtrLista listaPaquete){
    int noPudoLeer;
    FILE* archivoCantPaquete;
    int cantPaquete=longitudLista(listaPaquete); //inicializá siempre!
    archivoCantPaquete=fopen("cantPaquete.bin","rb");
    if(archivoCantPaquete!=NULL){
        fread(&cantPaquete,sizeof(int),1,archivoCantPaquete);
        fclose(archivoCantPaquete);
    }else{
        printf("No pudo abrirse el archivo para su lectura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}

//REPARTO

void leerReparto(PtrLista listaReparto){
    int noPudoLeer;
    FILE* archivoCantReparto;
    int cantReparto=longitudLista(listaReparto); //inicializá siempre!
    archivoCantReparto=fopen("cantReparto.bin","rb");
    if(archivoCantReparto!=NULL){
        fread(&cantReparto,sizeof(int),1,archivoCantReparto);
        fclose(archivoCantReparto);
    }else{
        printf("No pudo abrirse el archivo para su lectura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}

//VEHICULO

void leerVehiculo(PtrLista listaVehiculo){
    int noPudoLeer;
    FILE* archivoCantVehiculo;
    int cantVehiculo=longitudLista(listaVehiculo); //inicializá siempre!
    archivoCantVehiculo=fopen("cantVehiculo.bin","rb");
    if(archivoCantVehiculo!=NULL){
        fread(&cantVehiculo,sizeof(int),1,archivoCantVehiculo);
        fclose(archivoCantVehiculo);
    }else{
        printf("No pudo abrirse el archivo para su lectura");
        scanf(" %d",&noPudoLeer);// acá convendría poner una espera de alguna tecla para que el usuario tenga la oportunidad de leer el mensaje
        return ; // salimos para no seguir ejecutando lo que sigue en caso de no poder abrir el archivo
        exit(1);
    }
}



