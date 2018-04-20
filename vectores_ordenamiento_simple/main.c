#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int vector[TAM]={1,3,4,2,9};
    int i;
    int j;
    int aux;

    printf("Antes de ordenar: \n");
    for(i=0;i<TAM;i++)
    {
        printf("%d\n", vector[i]);
    }

    for(i=0;i<TAM-1;i++)
    {
        for(j=i+1;j<TAM;j++)
        {
            if(vector[i]<vector[j])
            {
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
        }
    }

    printf("Despues de ordenar de Mayor a Menor: \n");
    for(i=0;i<TAM;i++)
    {
        printf("%d\n", vector[i]);
    }

    for(i=0;i<TAM-1;i++)
    {
        for(j=i+1;j<TAM;j++)
        {
            if(vector[i]>vector[j])
            {
                aux=vector[j];
                vector[j]=vector[i];
                vector[i]=aux;
            }
        }
    }

    printf("Despues de ordenar de Menor a Mayor: \n");
    for(i=0;i<TAM;i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
}
