#include <stdio.h>
#include <stdlib.h>
#include "TDAcuil.h"
#include "util.h"

cuilPtr crearCuil(char cuil[11]){
    cuilPtr cuil=(cuilPtr)obtenerMemoria(sizeof(cuil));
    cuil->cuil;
}

cuilPtr destruirCuil(cuilPtr cuil){
    free(cuil->cuil);
    free(cuil);
}

void validarCuil(char cuil[11]){

    int calculo;        //suma de cada digito de xy12345678 + cada dígito de 5432765432
    int resto;
    int z;              //codigo verificador.(ejemplo: xy-12345678-z)

    calculo=(((cuil[0]-'0')*5)+((cuil[1]-'0')*4)+((cuil[2]-'0')*3)+((cuil[3]-'0')*2)+((cuil[4]-'0')*7)+((cuil[5]-'0')*6)+((cuil[6]-'0')*5)+((cuil[7]-'0')*4)+((cuil[8]-'0')*3)+((cuil[9]-'0')*2));
          printf("\n%d\n",calculo);
          resto=calculo%11;
          printf("%d\n",resto);
          if(resto==0){
                z=0;
          }
          else{
                z=11-resto;
          }
    if((cuil[10]-'0')==z){
        printf("CUIT/CUIL fue validado con exito.");}
        else{
            printf("CUIT/CUIL invalido.");
        }
}

char* getCuil(cuilPtr cuil){
    return cuil->cuil;
}

void setCuil(clientePtr cliente,cuilPtr cuil){
    cliente->cuil=cuil;
}

void mostrarCuil(cuilPtr cuil){
    printf("%s",cuil);
}

