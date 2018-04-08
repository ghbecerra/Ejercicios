#include <stdio.h>
#include "funciones.h" //directorio absoluto " "

int pedirEntero(char mensaje[], int min, int max)
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    numero=validarEntero(numero, min, max); //a validarEntero le entrego el numero, el min y max
    return numero;
}

int validarEntero(int dato, int min, int max)
{
    while(dato<min || dato>max)
    {
        printf("Error: Ingrese entre %d y %d: ", min, max);
        scanf("%d", &dato);
    }
    return dato;
}
