#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5];//={1,2,365,4,365};
    int i;

    // vector[2]=20;
    // printf("%d", vector[2]);
    // printf("direccion de memoria de vector: %d\n\n", &vector);

    for(int i=0;i<5;i++){  //carga de un vector
            printf("ingrese un numero: ");
            scanf("%d", &vector[i]);
    }
    for(i=0;i<5;i++){ //muestra elementos cargados en el vector
            printf("%d\n", vector[i]);
    }
    for(i=0;i<5;i++){  //ubicar posicion de memoria de un vector
        if(vector[i]==365){
            printf("\nposicion de memoria del vector con el numero 365 es: %d ", i);
            }
        }
    return 0;
}
