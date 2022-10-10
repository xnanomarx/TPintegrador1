#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include "nodo.c"
#include "TDAchofer.c"
#include "TDAcliente.c"
#include "TDAcuil.c"
#include "TDAdimension.c"
#include "TDAdomicilio.c"
#include "TDAfecha.c"
#include "TDAhora.c"
#include "TDAmenu.c"
#include "TDApaquete.c"
#include "TDAPila.c"
#include "TDAreparto.c"
#include "TDAvehiculo.c"
#include "util.c"

int main()
    {
        // Programa demostraci�n men� de usuario
        // Se presenta un men� al usuario y �ste deber� elegir una opci�n
        char tecla;
        int seleccion=1;
        while(seleccion!=0){
         //   menuPrincipal
            switch(seleccion){
                case 1:
                    system("clear");
                    printf("Ha elegido la opci�n 1.\r\n");
                    break;
                case 2:
                    system("clear");
                    printf("Ha elegido la opci�n 2.\r\n");
                    break;
                case 0:
                    break;
                default: // default es opcional
                    system("clear");
                    printf("La opci�n %d no existe en el men�.\r\n",seleccion);
                break;
             }
            if(seleccion!=0){
                printf("Presione Enter para continuar.");
                tecla=getchar();
                while (tecla != '\n' && tecla != EOF ) {
                    tecla=getchar();
                }
                //m�s compacto: while ((tecla=getchar()) != '\n' && tecla != EOF) {}
                getchar();
        }
        }
        system("cls");
        printf("Gracias! Vuelva pronto!\r\n");

        return 0;
}
