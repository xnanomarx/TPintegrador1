#include <stdio.h>
#include <stdlib.h>
int calcularDiaJuliano(int dia, int mes, int anio){
return (1461 * (anio + 4800 + (mes - 14)/12))/4
+ (367 * (mes - 2 - 12 * ((mes - 14)/12)))/12
- (3 * ((anio + 4900 + (mes - 14)/12)/100))/4 + dia - 32075;
}
FechaPtr crearFecha(int dia, int mes, int anio){
FechaPtr f=(FechaPtr)obtenerMemoria(sizeof(Fecha));
f->diaJuliano=calcularDiaJuliano(dia,mes,anio);
return f;
}

FechaPtr destruirFecha(FechaPtr fecha){
free(fecha);
return NULL;
}
int getDia(FechaPtr fecha){

return
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
//Pista: hay que setear fecha->diaJuliano de acuerdo a d�a, mes y a�o
}
void setMes(FechaPtr fecha, int mes){
// a implementar
}
void setAnio(FechaPtr fecha, int anio){
// a implementar
}
