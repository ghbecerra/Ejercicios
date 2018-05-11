#include <stdio.h>
#include <string.h>
#include "Usuario_Serie.h"

void inicializarUsuarioySeries(eUsuario_Serie usuario_serie[], int cant)
{
   int i;
   for(i=0; i<cant; i++)
   {
       usuario_serie[i].idUsuario=0;
       usuario_serie[i].idSerie=0;
   }

}

void mostrarUsuarioConSerie(eUsuario usuarios[], eSerie series[],int cantUsuarios, int cantSeries, usuarioSerie lista[] )
{
     {
    int i;
    int j;
    int z;
    for(i=0;i<cantUsuarios;i++)
        {
            if(usuarios[i].estado==1)
            {
                printf("\n %s \n", usuarios[i].nombre);
                for(j=0;j<cantSeries;j++)
                {
                    for(z=0;z<100;z++)
                    {

                        if(usuarios[i].idUsuario==lista[z].idUsuario&&series[j].idSerie==lista[z].idSerie)
                        {

                           printf(" %s ", series[j].nombre);
                        }
                    }
                }
}
