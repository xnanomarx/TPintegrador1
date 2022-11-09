#include <stdio.h>
#include <stdlib.h>
#include "TDAcuil.h"
#include "util.h"
#include <string.h>
#include <stdbool.h>
cuilPtr crearCuil(char cuilCreado[12]){
    cuilPtr cuil2=(cuilPtr)obtenerMemoria(sizeof(cuil)+1);
    char* cu=(char*)obtenerMemoria(sizeof(char)*(strlen(cuilCreado)+1));
    strcpy(cu,cuilCreado);
    return cuilCreado;
}

cuilPtr destruirCuil(cuilPtr cuil){
    free(cuil->cuilUsuario);
    free(cuil);
}

bool validarCuil(char cuil[12]){

    bool validado;
    int calculo;        //suma de cada digito de xy12345678 + cada dígito de 5432765432
    int resto;
    int z;              //codigo verificador.(ejemplo: xy-12345678-z)

    calculo=(((cuil[0]-'0')*5)+((cuil[1]-'0')*4)+((cuil[2]-'0')*3)+((cuil[3]-'0')*2)+((cuil[4]-'0')*7)+((cuil[5]-'0')*6)+((cuil[6]-'0')*5)+((cuil[7]-'0')*4)+((cuil[8]-'0')*3)+((cuil[9]-'0')*2));
          resto=calculo%11;
          if(resto==0){
                z=0;
          }
          else{
                z=11-resto;
          }
    if((cuil[10]-'0')==z){
        validado=true;}
        else{
            validado=false;
        }
    return validado;
}

char* getCuil(cuilPtr cuil){
    return cuil->cuilUsuario;
}

void mostrarCuil(cuilPtr cuil){
    printf("%s",cuil);
}

