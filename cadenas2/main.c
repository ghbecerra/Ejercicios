#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena1[10]="hoLa Sol";
    char cadena2[150]="CHAu LUna";
    int len;
    int comp;

    puts(cadena1);   //recibe la cadena y la muestra
    puts(cadena2);

    strupr(cadena1); //pasa todo a mayuscula
    strlwr(cadena2); //pasa todo a minuscula

    //strcat(cadena2, cadena); //para concatenar la cadena
    //strcat(cadena2, " espacio");

    //printf("ingrese una frase: ");
    //gets(cadena1);

    //strcpy(cadena2, cadena1); //copia el contenido de una cadena en otra
    strcpy(cadena2, "Pirulo");

    comp=strcmp(cadena1, cadena2); //devuelve 0 si son iguales + o - si son distintas
    printf("\nEl resultado de la comparacion es: %d\n", comp);

    len=strlen(cadena1);   //devuelve la cantidad de caracteres ingresados en la cadena
    printf("\nLa primer frase ingresada es: %s y tiene %d caracteres.\n", cadena1, len);
    printf("\nLa segunda frase ingresada, pero reemplazada es: %s y tiene %d caracteres.\n", cadena2, len);
    return 0;
}
