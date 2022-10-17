#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int busquedaSecuencial(char* vector, int longitud, char* aBuscar);

void* obtenerMemoria(size_t tamanio);

int main()
{
    char* vector1="abcdef";
    char* aBuscar=(char*)obtenerMemoria(sizeof(char));
    int longitudString;

    printf("Ingrese la letra a buscar:");
    scanf("%c", aBuscar);       //c

    longitudString=strlen(vector1);

    printf("Se encontro una coincidencia en la posicion %d", busquedaSecuencial(vector1, longitudString, aBuscar));

    return 0;
}

int busquedaSecuencial(char* vector, int longitud, char* aBuscar){
       bool bandera=false;
       int i=0;
       int posicion=-1;
       while(i<longitud && bandera==false){
            if(*(vector+i)==*aBuscar){
                bandera=true;
                posicion=i;
            };
            i++;
    } return posicion;
}

void* obtenerMemoria(size_t tamanio){
    void* ptr=malloc(tamanio);
    if(ptr==NULL){
        printf("No se ha podido obtener memoria\n");
        exit(1);
    }
    return ptr;
}


/*  Utilizando el array anterior, crear una función
int busquedaSecuencial(char *vector, int longitud, char aBuscar)
que devuelva la posición del string aBuscar en vector por el método de búsqueda
secuencial, utilizando punteros para el acceso al vector. En caso de no encontrarse , debe
devolver -1*/
