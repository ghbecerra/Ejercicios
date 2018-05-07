#include <stdio.h>
#include <stdlib.h>

int sumaNumeros(int[], int);

int main()
{
    int numeros[10]={1,2,3,4,5,6,7,8,9,10};
    int resultado;
    resultado=sumaNumeros(numeros, 10);
    printf("la suma es: %d", resultado);
}

int sumaNumeros(int numeros[], int tam)
{
    int i;
    int suma=0;
    for(i=0;i<tam;i++)
    {
        suma=suma+numeros[i];
    }
    return suma;
}
