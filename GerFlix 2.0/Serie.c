#include <stdio.h>
#include <string.h>
#include "Serie.h"
#include "Usuario.h"
/*
typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
}eSerie;

void inicializarSeriesEstado(eSerie[], int);
void inicializarSeriesHardCode(eSerie[]);
void mostrarListaSeries(eSerie[], int);
*/
void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        series[i].estado=0;
    }
}

void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};
    int i;
    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}
void mostrarListaSeries(eSerie series[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        if(series[i].estado==1)
        {
            printf("Id: %d Serie: %s \n", series[i].idSerie, series[i].nombre);
        }
    }
}
//4. Mostrar por cada serie, el nombre de los usuarios que la ven.
void mostrarPorSerieUsuariosQueLaVen(eSerie series[], int cantS, eUsuario usuarios[], int cantU)
{
    int i;
    int j;
    for(i=0;i<cantS;i++)
    {
        if(series[i].estado==1)
        {
            printf("Id: %d Serie: %s \n", series[i].idSerie, series[i].nombre);
            for(j=0;j<cantU;j++)
            {
                if(usuarios[j].estado==1 && series[i].idSerie==usuarios[j].idSerie)
                {
                    printf("Id: %d Usuario: %s \n", usuarios[j].idUsuario, usuarios[j].nombre);
                }

            }
        }
    }


}
