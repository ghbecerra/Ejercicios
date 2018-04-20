#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

int main()
{
    int legajos[TAM];
    char nombres[TAM][50];
    int nota1[TAM];
    int nota2[TAM];
    float promedios[TAM];
    int i;
    int j;
    float auxPromedios;
    int auxLegajos;
    char auxNombres[50];
    //int auxNota1;
    //int auxNota2;

    for(i=0;i<TAM;i++)
    {
        printf("\nIngrese numero de legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);
        printf("Ingrese nota 1: ");
        scanf("%d", &nota1[i]);
        printf("Ingrese nota 2: ");
        scanf("%d", &nota2[i]);
        promedios[i]=((float)(nota1[i]+nota2[i])/2);
    }

    printf("\n\nAntes de ordenar: \n");

    for(i=0;i<TAM;i++)
    {
        printf("\nEl alumno: %s (legajo: %d) tiene de promedio: %.2f", nombres[i], legajos[i], promedios[i]);
    }

    for(i=0;i<TAM-1;i++)
    {
        for(j=i+1;j<TAM;j++)
        {
            if(promedios[i]<promedios[j])
            {
                auxPromedios=promedios[i];
                promedios[i]=promedios[j];
                promedios[j]=auxPromedios;
                auxLegajos=legajos[i];
                legajos[i]=legajos[j];
                legajos[j]=auxLegajos;
                strcpy(auxNombres, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], auxNombres);
            }
        }
    }

    printf("\n\nDespues de ordenar: \n");

    for(i=0;i<TAM;i++)
    {
        printf("\nEl alumno: %s (legajo: %d) tiene de promedio: %.2f", nombres[i], legajos[i], promedios[i]);
    }

    return 0;
}
