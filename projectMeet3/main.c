#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/*Realizar una función
int enString(char *string, char *aBuscar)
que devuelva la primera posición de string en la que se encuentra aBuscar
Devolver -1 si
aBuscar no se encuentra contenido en string. Ejemplos:
enString("Buenos días", "nos") // debe devolver 3
enString("Buenos días", "noche") // debe devolver -1*/
int enString(char *string, char *aBuscar);

int main()
{
    char* string1=(char*)malloc(sizeof(char)*20);
    char* aBuscar=(char*)malloc(sizeof(char)*20);
    scanf(" %[^\n]%*c",string1);
    scanf(" %[^\n]%*c",aBuscar);
    printf("%d", enString(string1,aBuscar));

    return 0;
}
int enString(char *string, char *aBuscar){
    char* stringAux=(char*)malloc(sizeof(char)*20);
    int posicion=-1;
    bool encontrado=false;
    int i=0;
    while(i<strlen(string)&&encontrado==false){           //buenos  //nos
        if(*(string+i)==(*aBuscar)){                 //stringaux= nos
            for(int k=0;k<strlen(aBuscar);k++){
                *(stringAux+k)=*(string+i+k);
            }
            if(strcmp(stringAux,aBuscar)==0){
                encontrado=true;
                posicion=i;
            }
        }
        i++;
    }printf("%s\n",stringAux);
    return posicion;
}
