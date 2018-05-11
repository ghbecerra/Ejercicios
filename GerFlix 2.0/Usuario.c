#include <stdio.h>
#include <string.h>
#include "Usuario.h"
#include "Serie.h"
/*
typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void inicializarUsuariosHardCode(eUsuario[]);
void mostrarListaUsuarios(eUsuario[], int);
*/
void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{
    int id[15] = {1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1014};
    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,101,100,103};
    char nombre[][50]={"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};
    int i;
    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);
    }
}
void mostrarListaUsuarios(eUsuario usuarios[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        if(usuarios[i].estado==1)
        {
            printf("Id: %d Usuario: %s \n", usuarios[i].idUsuario, usuarios[i].nombre);
        }
    }
}
//3.Mostrar el listado de Usuarios con el nombre de la serie que ve
void mostrarUsuarioConSuSerie(eUsuario usuarios[], int cantU, eSerie series[], int cantS)
{
    int i;
    int j;
    for(i=0;i<cantU;i++)
    {
        if(usuarios[i].estado==1)
        {
            printf("Id: %d Usuario: %s \n", usuarios[i].idUsuario, usuarios[i].nombre);
            for(j=0;j<cantS;j++)
            {
                if(series[j].estado==1 && usuarios[i].idSerie==series[j].idSerie)
                {
                    printf("Id: %d Serie: %s \n", series[j].idSerie, series[j].nombre);
                }

            }
        }

    }
}
