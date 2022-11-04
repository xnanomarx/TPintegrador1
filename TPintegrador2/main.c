#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include "nodo.h"
#include "TDAchofer.h"
#include "TDAcliente.h"
#include "TDAcuil.h"
#include "TDAdimension.h"
#include "TDAdomicilio.h"
#include "TDAfecha.h"
#include "TDAhora.h"
#include "TDAmenu.h"
#include "TDApaquete.h"
#include "TDAPila.h"
#include "TDAreparto.h"
#include "TDAvehiculo.h"
#include "util.h"
#include "TDAmenu.h"
#include "MenuCarga.h"

int main()
    {
        int seleccion;
        do{
            seleccion=seleccionAccion();
            printf("%d",seleccion);
            scanf("%d",seleccion);























        }while(seleccion!=0);
        return 0;
}

