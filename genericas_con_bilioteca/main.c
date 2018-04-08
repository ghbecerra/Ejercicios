#include <stdio.h> // directorio relativo entre <>
#include <conio.h>
#include "funciones.h"

int main()
{
    int edad;
    int legajo;
    edad=pedirEntero("Ingrese edad: ", 18, 60);
    legajo=pedirEntero("Ingrese legajo: ", 1, 1500);
    printf("La edad es: %d\n", edad);
    printf("El legajo es: %d\n", legajo);
    return 0;
}
