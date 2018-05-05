#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float auxRadio;
    float area;
    auxRadio = pedirRadio();
    area = calcularAreaCirculo(auxRadio);
    printf("El area del circulo es: %.2f\n",area);
    return 0;
}
