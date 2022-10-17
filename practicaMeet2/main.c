#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*g) Realizar una función
void invertirString(char *string)
que invierta el string recibido, utilizando notación de punteros.
*/
void invertirString(char *string);

int main()
{
    char* string1=(char*)malloc(sizeof(char)*20);
    scanf("%s",string1);//ingresó "palabra"

    invertirString(string1);
    for(int i=0;i<strlen(string1);i++){
        printf("%c",*(string1+i));
    }

    return 0;
}
void invertirString(char *string){
    char aux;
    for(int i=0;i<(strlen(string)/2);i++){
        aux=*(string+i);
        *(string+i)=*(string+strlen(string)-1-i);
        *(string+strlen(string)-1-i)=aux;
    }
}
