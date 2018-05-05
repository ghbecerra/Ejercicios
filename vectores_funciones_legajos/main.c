#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define TAM 5

int cargarAlumno(int[], char[][50], int[], int[], float[], int);
int buscarLibre(int[], int);
float calcularPromedio(int, int);
void bajaAlumnos(int[], char[][50], int[], int[], float[], int);
void mostrarAlumnos(int[], char[][50], int[], int[], float[], int);
void modificarAlumnos(int[], char[][50], int[], int[], float[], int);
void ordenarAlumnos(int[], char[][50], int[], int[], float[], int);

int main()
{
    int legajos[TAM]={};//todos los legajos en 0
    char nombres[TAM][50];//={"juan","maria","ana","pedro","carlos"};
    int nota1[TAM];//={4,10,5,8,1};
    int nota2[TAM];//={8,8,5,2,3};
    float promedios[TAM];//={6,9,5,5,2};
    int opcion;
    int index;
    do
    {
        printf("1. ALTAS\n2. BAJA(incompleto)\n3. MODIFICAR\n4. MOSTRAR\n5. ORDENAR\n9. SALIR");
        printf("\n\nElegir una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                system("cls");
                index=cargarAlumno(legajos, nombres, nota1, nota2, promedios, TAM);
                if(index==-1)
                    {
                    printf("\nCapacidad agotada.\n\n");
                    }else{
                        printf("\nAlumno ingresado.\n\n");
                        }
                break;

            case 2:
                system("cls");
                bajaAlumnos(legajos, nombres, nota1, nota2, promedios, TAM);
                break;

            case 3:
                system("cls");
                modificarAlumnos(legajos, nombres, nota1, nota2, promedios, TAM);
                break;

            case 4:
                system("cls");
                mostrarAlumnos(legajos, nombres, nota1, nota2, promedios, TAM);
                break;

            case 5:
                system("cls");
                ordenarAlumnos(legajos, nombres, nota1, nota2, promedios, TAM);
                break;
        }
    }while(opcion!=9);
    return 0;
}

int cargarAlumno(int legajos[], char nombres[][50], int nota1[], int nota2[], float promedios[], int tam)
{
    int index;
    index=buscarLibre(legajos, tam);
            if(index!=-1)
            {
                printf("Menu de Carga: ");
                printf("\nIngrese legajo: ");
                scanf("%d", &legajos[index]);
                printf("Ingrese nombre: ");
                fflush(stdin);
                gets(nombres[index]);
                printf("Ingrese Nota 1: ");
                scanf("%d", &nota1[index]);
                printf("Ingrese Nota 2: ");
                scanf("%d", &nota2[index]);
                promedios[index]=calcularPromedio(nota1[index],nota2[index]);
            }
            return index;
}

int buscarLibre(int legajos[], int tam)
{
    int index=-1;
    int i;
    for(i=0;i<tam; i++)
    {
        if(legajos[i]==0)
        {
            index=i;
            break; //si encuentra lugar libre frena y sale
        }
    }
    return index;
}

float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio=(float)(nota1+nota2)/2;
    return promedio;
}

void bajaAlumnos(int legajos[], char nombres[][50], int nota1[], int nota2[], float promedios[], int tam)
{
    int i;
    int auxElim;
    char rta;
    int encontro=0;
    mostrarAlumnos(legajos, nombres, nota1, nota2, promedios, TAM);
    printf("Ingrese el legajo a eliminar: ");
    scanf("%d", &auxElim);
    for(i=0;i<tam;i++)
    {
        if(auxElim==legajos[i])
        {
            printf("\nEsta seguro de realizar la baja? (s/n)");
            rta=getche();
            if(rta=='s')
            {
                legajos[i]=0;
                nombres[i][10]=0;
                nota1[i]=0;
                nota2[i]=0;
                promedios[i]=0;
                system("cls");
            }else{
                printf("\nAccion cancelada por el usuario\n\n");
                }
            encontro=1;
        }
    }
    if(encontro==0)
    {
        printf("\nLegajo no existe.\n\n");
    }
}

void modificarAlumnos(int legajos[], char nombres[][50], int nota1[], int nota2[], float promedios[], int tam)
{
    int i;
    int auxMod;
    char rta;
    int encontro=0;
    mostrarAlumnos(legajos, nombres, nota1, nota2, promedios, TAM);
    printf("Ingrese el legajo a modificar: ");
    scanf("%d", &auxMod);
    for(i=0;i<tam;i++)
    {
        if(auxMod==legajos[i])
        {
            printf("\nReingrese valor de nota 1: ");
            scanf("%d", &auxMod);
            printf("\nEsta seguro de realizar la modificacion? (s/n)");
            rta=getche();
            if(rta=='s')
            {
                nota1[i]=auxMod;
                promedios[i]=calcularPromedio(nota1[i],nota2[i]);
                system("cls");
            }else{
                printf("\nAccion cancelada por el usuario\n\n");
                }
            encontro=1;
        }
    }
    if(encontro==0)
    {
        printf("\nLegajo no existe.\n\n");
    }
}

void mostrarAlumnos(int legajos[], char nombres[][50], int nota1[], int nota2[], float promedios[], int tam)
{
    int i;
    printf("Alumnos: \n");
    for(i=0;i<tam;i++)
    {
        if(legajos[i]!=0)
        {
            printf("Legajo: %d Alumno: %s Nota 1: %d Nota 2: %d  Promedio: %.2f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedios[i]);
        }
    }
    printf("\n\nMENU: \n");
}

void ordenarAlumnos(int legajos[], char nombres[][50], int nota1[], int nota2[], float promedios[], int tam)
{
    int i;
    int j;
    int auxLegajos;
    char auxNombres[50];
    int auxNota1;
    int auxNota2;
    float auxPromedios;
    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            //if(strcmp(nombres[i],nombres[j])<0)
            if(promedios[i]<promedios[j])
            {
                auxLegajos=legajos[i];
                legajos[i]=legajos[j];
                legajos[j]=auxLegajos;
                strcpy(auxNombres, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], auxNombres);
                auxNota1=nota1[i];
                nota1[i]=nota1[j];
                nota1[j]=auxNota1;
                auxNota2=nota2[i];
                nota2[i]=nota2[j];
                nota2[j]=auxNota2;
                auxPromedios=promedios[i];
                promedios[i]=promedios[j];
                promedios[j]=auxPromedios;
            }
        }
    }
}
