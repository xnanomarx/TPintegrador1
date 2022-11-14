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
#include "util.h"

int main()
    {
        PtrPila pilaReparto=crearPila();             //Se apila porque el último en acomodarse es el primer paquete en salir

        PtrLista repartosCompletados=crearLista();
        PtrLista choferes=crearLista();
        PtrLista clientes=crearLista();
        PtrLista vehiculos=crearLista();
        PtrLista DepositoPaquetes=crearLista();
        PtrLista entregas=crearLista();
        PtrLista entregasFinalizadas=crearLista();
        PtrLista repartosEnCurso=crearLista();
 /*       int seleccion=1;

        do{
            menuNuevoPaquete(DepositoPaquetes);
            menuNuevoCliente(clientes);
            apilar(pilaReparto,getCabecera(entregas));
            scanf(" %d",&seleccion);
        }while(seleccion!=0);

        menuNuevaEntrega(entregas,clientes,DepositoPaquetes);
        mostrarListaPaquete(DepositoPaquetes);
        mostrarListaEntregas(entregas);

        mostrarPila(pilaReparto);*/

        int seleccion=1;

        do{
            seleccion=seleccionAccion(menuPrincipal());    //menu principal para elegir cargar datos o ver datos
            switch(seleccion){
                case 11:
                    system("cls");
                    menuNuevoChofer(choferes);
                    break;
                case 12:
                    system("cls");
                    menuNuevoCliente(clientes);
                    break;
                case 13:
                    system("cls");
                    menuNuevoVehiculo(vehiculos);
                    break;
                case 14:
                    system("cls");
                    menuNuevoPaquete(DepositoPaquetes);
                    break;
                case 15:
                    system("cls");
                    menuNuevaEntrega(entregas,clientes,DepositoPaquetes);
                    break;
                case 21:
                    system("cls");
                    menuModifChofer(choferes);
                    break;
                case 22:
                    system("cls");
                    menuModifCliente(clientes);
                    break;
                case 23:
                    system("cls");
                    menuModifVehiculo(vehiculos);
                    break;
                case 24:
                    system("cls");
                    menuModifPaquete();
                    break;
                case 25:
                    system("cls");
                    menuModifEstadoEntrega(entregas,entregasFinalizadas,DepositoPaquetes);
                    break;
                case 31:
                    system("cls");
                    menuInfoChofer(choferes);
                    break;
                case 32:
                    system("cls");
                    menuInfoCliente(clientes);
                    break;
                case 33:
                    system("cls");
                    menuInfoVehiculo(vehiculos);
                    break;
                case 34:
                    system("cls");
                    menuInfoPaquete(DepositoPaquetes);
                    break;
                case 35:
                    system("cls");
                    menuInfoEntregas(entregas);
                    break;
                case 36:
                    system("cls");
                    menuInfoEntregasCurso(entregas);
                    break;
                case 37:
                    system("cls");
                    menuInfoEntregasFinalizadas(entregasFinalizadas);
                    break;
                case 38:
                    system("cls");
                    menuInfoReparto(repartosEnCurso);
                    break;
                case 41:
                    menuNuevoReparto(vehiculos,choferes,entregas,pilaReparto,repartosEnCurso);
                    break;
                case 42:
                    menuModifReparto();
                    break;
                case 43:
                    menuBorrarReparto();
                    break;
            }

        }while(seleccion!=0);

        return 0;
}
