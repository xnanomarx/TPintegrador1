#include <stdio.h>
#include <stdlib.h>
#include "TDAfecha.h"

FechaPtr crearFecha(int hora, int dia, int mes, int anio);

FechaPtr destruirFecha(FechaPtr fecha);

int getDia(FechaPtr Fecha);


int getMes(FechaPtr Fecha);


int getAnio(FechaPtr Fecha);


void setDia(FechaPtr fecha, int dia);


void setMes(FechaPtr fecha, int mes);


void setAnio(FechaPtr fecha, int anio);
