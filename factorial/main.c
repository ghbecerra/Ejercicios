#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int numero;
    int auxiliar;
    int factorial=1;
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &numero);
    for(auxiliar=numero;auxiliar>1;auxiliar--)
        {
         factorial=factorial*auxiliar;
        }
  printf("El factorial de %d = %d\n", numero, factorial);
  getchar();
  return 0;
}
*/
int factorial(int numero);

int main()
{
    int numero;
    printf("ingrese un numero: ");
    scanf("%d", &numero);
    int factor=factorial(numero);
    printf("El factorial de %d = %d\n", numero, factor);
    return 0;

}

int factorial(int numero)
{
    int factor;
    if(numero==0)
    {
        factor=1;
    }else{
        factor=numero*factorial(numero-1);
        }
    return factor;  // SOLO UTILIZAR ESTE RETURN
}
