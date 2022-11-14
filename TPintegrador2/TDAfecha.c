#include <stdio.h>
#include <stdlib.h>
#include "TDAfecha.h"
#include <stdbool.h>
#include "TDAhora.h"
#include "util.h"
int calcularDiaJuliano(int dia, int mes, int anio){
    return (1461 * (anio + 4800 + (mes - 14)/12))/4 + (367 * (mes - 2 - 12 * ((mes - 14)/12)))/12 - (3 * ((anio + 4900 + (mes - 14)/12)/100))/4 + dia - 32075;
}
FechaPtr crearFecha(horaPtr hora,int dia, int mes, int anio){
    FechaPtr f=(FechaPtr)obtenerMemoria(sizeof(Fecha));
    f->diaJuliano=calcularDiaJuliano(dia,mes,anio);
    f->hora=hora;
    return f;
}

FechaPtr destruirFecha(FechaPtr fecha){
    free(fecha);
    return NULL;
}
int getDia(FechaPtr fecha){
    int j = fecha->diaJuliano;
    int f = j + 1401 + (((4 * j + 274277) / 146097) * 3) / 4 -38;
    int e = 4 * f + 3;
    int g = (e % 1461) / 4;
    int h = 5 * g + 2;
    return ((h % 153) / 5) + 1;
}
int getMes(FechaPtr fecha){
    int j = fecha->diaJuliano;
    int f = j + 1401 + (((4 * j + 274277) / 146097) * 3) / 4 -38;
    int e = 4 * f + 3;
    int g = (e % 1461) / 4;
    int h = 5 * g + 2;
    return ((h / 153 + 2) % 12) + 1;
}
int getAnio(FechaPtr fecha){
    int j = fecha->diaJuliano;
    int f = j + 1401 + (((4 * j + 274277) / 146097) * 3) / 4 -38;
    int e = 4 * f + 3;
    int g = (e % 1461) / 4;
    int h = 5 * g + 2;
    int mes =((h / 153 + 2) % 12) + 1;
    return (e / 1461) - 4716 + (12 + 2 - mes) / 12;
}
void setDia(FechaPtr fecha, int dia){
// a implementar
//Pista: hay que setear fecha->diaJuliano de acuerdo a día, mes y año
}
void setMes(FechaPtr fecha, int mes){
// a implementar
}
void setAnio(FechaPtr fecha, int anio){
// a implementar
}

void mostrarFecha(FechaPtr fecha){
    printf("%d/%d/%d ",getDia(fecha),getMes(fecha),getAnio(fecha));
}

void mostrarFechaYHora(FechaPtr horaFecha){
    printf("%d/%d/%d ",getDia(horaFecha),getMes(horaFecha),getAnio(horaFecha));
    printf("%d:%d",horaFecha->hora->horas,horaFecha->hora->minutos);
}

FechaPtr pedirFecha(){
    fflush(stdin);
    system("cls");
    bool validado=false;
    int dia;
    int mes;
    int anio;
    printf("Ingrese dia:\n");
    do{
        scanf(" %d",&dia);
        if((dia>0)&&(dia<32)){
            validado=true;
        }
        else{
            printf("Dia no valido. Intente otra vez.\n");
        }
    }while(validado==false);
    validado=false;
    printf("Ingrese mes:\n");
    do{
        scanf(" %d",&mes);
        if((mes>0)&&(mes<13)){
            validado=true;
        }
        else{
            printf("Mes no valido. Intente otra vez.\n");
        }
    }while(validado==false);
    validado=false;
    printf("Ingrese anio:\n");
    do{
        scanf(" %d",&anio);
        if(anio>2021){
            validado=true;
        }
        else{
            printf("Anio no valido. Intente otra vez.\n");
        }
    }while(validado==false);
    FechaPtr fecha1=crearFecha(pedirHora(),dia,mes,anio);
    return fecha1;
}
