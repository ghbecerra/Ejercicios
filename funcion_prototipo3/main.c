#include <stdio.h>
#include <stdlib.h>

void sumarNumeros (void);

int main()
{
    sumarNumeros();
}

void sumarNumeros (void)
{
    int numero1;
    int numero2;
    int resultado;

    printf("ingrese un numero: ");
    scanf("%d", &numero1);

    printf("ingrese otro numero: ");
    scanf("%d", &numero2);

    resultado=numero1+numero2;
    printf("la suma es: %d", resultado);
}
