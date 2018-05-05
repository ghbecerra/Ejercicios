#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones.h"
#define MAXINPUT 100

int main()
{
    char input[MAXINPUT] ;
    int length;
    printf("Ingrese un algo: ");
    scanf ("%s", input);
    length = strlen (input);
    if(length > 0)
    {
        if (esNumerico(input))
        {
            printf ("Si es un numero\n");
        }
        if (esTelefono(input))
        {
            printf ("Si es un telefono\n");
        }
        if (esAlfaNumerico(input))
        {
            printf ("Si es alfanumerico\n");
        }
        if (esSoloLetras(input))
        {
            printf ("Si es solo letras\n");
        }
    }
}
