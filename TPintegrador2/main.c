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
        // Programa demostración menú de usuario
        // Se presenta un menú al usuario y éste deberá elegir una opción
        char tecla;
        int seleccion=1;
        while(seleccion!=0){
         //   menuPrincipal
            switch(seleccion){
                case 1:
                    system("clear");
                    printf("Ha elegido la opción 1.\r\n");
                    break;
                case 2:
                    system("clear");
                    printf("Ha elegido la opción 2.\r\n");
                    break;
                case 0:
                    break;
                default: // default es opcional
                    system("clear");
                    printf("La opción %d no existe en el menú.\r\n",seleccion);
                break;
             }
            if(seleccion!=0){
                printf("Presione Enter para continuar.");
                tecla=getchar();
                while (tecla != '\n' && tecla != EOF ) {
                    tecla=getchar();
                }
                //más compacto: while ((tecla=getchar()) != '\n' && tecla != EOF) {}
                getchar();
        }
        }
        system("cls");
        printf("Gracias! Vuelva pronto!\r\n");

        return 0;
}
