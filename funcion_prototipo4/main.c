#include <stdio.h>
#include <stdlib.h>

int sumarNumeros (void);

int main()
{
    int resultado;
    resultado=sumarNumeros();
    printf("\nel resultado de la suma es: %d\n", resultado);
    return 0;
}

int sumarNumeros (void)
{
    int numero1;
    int numero2;
    int sumaRetorno;

    printf("ingrese un numero: ");
    scanf("%d", &numero1);

    printf("ingrese otro numero: ");
    scanf("%d", &numero2);

    sumaRetorno=numero1+numero2;

    return sumaRetorno;
}
