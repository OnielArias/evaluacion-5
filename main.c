#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char palabra1[20] = "perro";
    char palabra2[20];
    int contador = 0;

    printf("|Adivine la palabra|\n");
    printf("Pista: Es el mejor amigo del hombre\n " );
    while(contador!=3){

        printf("\n Ingrese una palabra: ");
        scanf("%s", palabra2);

        if(strcmp(palabra1,palabra2)==0){
            printf("\n Ganaste\n");
            break;
        }else if(strcmp(palabra1,palabra2)!=0){
            printf("Esa no es la palabra\n");
            contador++;
        }
    }

    if (contador==3){
        printf("Perdiste");
    }
    return 0;
}



