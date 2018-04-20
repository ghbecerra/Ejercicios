#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void mostrarVector(int[], int); // pasamos una cadena por eso los corchetes
void cargarVector(int[], int);

int main()
{
    int vector[TAM]={};
    printf("Antes de cargar el vector: \n");
    cargarVector(vector, TAM);
    printf("Despues de cargar el vector: \n");
    mostrarVector(vector, TAM); //llamamos a la funcion, mandamos el vector y la cantidad de elementos
    //pasaje por valor y referencia, crea una copia de la variable, por referencia pasa la direccion
    return 0;
}

void cargarVector(int vector[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
        {
            printf("ingrese un numero: ");
            scanf("%d", &vector[i]);
        }
}

void mostrarVector(int vector[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
        {
            printf("%d\n", vector[i]);
        }
}
