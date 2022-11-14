#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "TDAhora.h"
#include "util.h"
horaPtr crearHora(int horaingr, int minutoingr){
    horaPtr hora1=(horaPtr)obtenerMemoria(sizeof(hora));
    hora1->horas=horaingr;
    hora1->minutos=minutoingr;
    return hora1;
}

horaPtr destruirHora(horaPtr hora){
    free(hora);
    return NULL;
}

int getMinutos(horaPtr hora){
    return hora->minutos;
}

int gethoras(horaPtr hora){
    return hora->horas;
}

void setMinutos(horaPtr hora, int newminuto){
    hora->minutos=newminuto;
}

void sethoras(horaPtr hora, int newhora){
    hora->horas=newhora;
}

void mostrarHora(horaPtr hora){
    printf("%d:%d",hora->horas,hora->minutos);
}

horaPtr pedirHora(){
    int hor;
    int minut;
    bool validado=false;
    printf("Ingrese hora:\n");
    do{
        scanf(" %d",&hor);
        if((hor>-1)&&(hor<24)){
            validado=true;
        }
        else{
            printf("Hora no valida. Intente otra vez.\n");
        }
    }while(validado==false);
    validado=false;
    printf("Ingrese minutos:\n");
    do{
        scanf(" %d",&minut);
        if((minut>-1)&&(minut<61)){
            validado=true;
        }
        else{
            printf("Hora no valida. Intente otra vez.\n");
        }
    }while(validado==false);
    horaPtr hora1=crearHora(hor,minut);
    return hora1;
}
