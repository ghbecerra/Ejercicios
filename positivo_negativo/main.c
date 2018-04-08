#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Ingrese numero: ");
    scanf("%d",&n);
    if (n>=0){
        printf("El numero %d es positivo",n);
        }else{
            printf("El numero %d es negativo",n);
            }
    return 0;
}
