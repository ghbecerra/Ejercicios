#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void cargarVector(int[], int);
void mostrarVector(int[], int);
void ordenarVector(int[], int[]);
int buscarMaximo(int[], int);


/*
1. Cargar datos
2. Mostrar datos
3. Ordenar
4. Buscar Maximo y mostrar su posicion
5. Salir
 */

int main()
{
    int maximo;
    int vector[TAM]={1,3,4,2,9};

    //printf("antes de cargar el vector: \n");
    //cargarVector(vector, TAM);

    printf("despues de cargar el vector: \n");
    mostrarVector(vector, TAM);

    maximo=buscarMaximo(vector, TAM);
    printf("El valor maximo es: %d", maximo);

    return 0;
}

void cargarVector(int vector[], int tam)
{
    int i;
    for(i=0;i<tam;i++){
        printf("ingrese un numero: ");
        scanf("%d", &vector[i]);
        }
}

void mostrarVector(int vector[], int tam)
{
    int i;
    for(i=0;i<tam;i++){
        printf("%d\n", vector[i]);
        }
}

int buscarMaximo(int vector[], int tam)
{
    int i;
    int maximo;
    int flag=0;
    for(i=0;i<tam;i++)
    {
        if(flag==0 || vector[i]>maximo)
        {
                maximo=vector[i];
                flag=1;
        }
    }
    return maximo;
}
