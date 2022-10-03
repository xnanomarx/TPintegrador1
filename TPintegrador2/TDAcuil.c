#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED
#include "TDAcuil.h"

void validarCuil(char cuil[11]){

    int calculo;        //suma de cada digito de xy12345678 + cada dígito de 5432765432
    int resto;
    int z;              //codigo verificador.(ejemplo: xy-12345678-z)

    scanf("%s",cuil);

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
