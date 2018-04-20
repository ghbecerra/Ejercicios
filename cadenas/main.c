#include <stdio.h>
#include <stdlib.h>
#include <string.h> //funciones para el manejo de la cedena de caracteres

int main()
{
    char cadena[20];    //siempre declarar un espacio mas para el "/0"

    //luego de la declaracion de la variable no se puede asignar valor a una cadena
    int len;

    printf("ingrese una frase: ");
    /*scanf("%s", cadena);  //scanf nos permite ingresar cualquier tipo de dato  // cadena - &cadena - &cadena[0]*/
    gets(cadena);

    len=strlen(cadena); //devuelve la cantidad de caracteres ingresados en la cadena

    puts(cadena); //recibe la cadena y la muestra

    printf("la frase ingresada es: %s y tiene %d caracteres.", cadena, len);
    return 0;
}
