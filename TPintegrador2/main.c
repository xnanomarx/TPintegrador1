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
#include "TDAdimension.h"
#include "TDAdomicilio.h"
#include "TDAfecha.h"
#include "TDAhora.h"
#include "TDApaquete.h"
#include "TDAreparto.h"
#include "util.h"



int main()
    {
        PtrPila pilaPaquetes=crearPila();             //Se apila porque el último en acomodarse es el primer paquete en salir
        PtrCola colaEntregas=crearCola();             //La primer entrega es la primera en realizarse

        PtrLista choferes=crearLista();
        PtrLista clientes=crearLista();
        PtrLista vehiculos=crearLista();

        int seleccion=0;

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
                case 21:
                    system("cls");

             //     modifChofer(choferes,);
                    break;
                case 22:
                    system("cls");
                    menuModifCliente();
                    break;
                case 23:
                    system("cls");
                    menuModifVehiculo();
                    break;
                case 31:
                    system("cls");
                    menuInfoChofer(choferes);
                    break;
                case 32:
                    system("cls");
                    menuInfoCliente(clientes);
                    break;
            }








        }while(seleccion!=0);





















        return 0;
}
