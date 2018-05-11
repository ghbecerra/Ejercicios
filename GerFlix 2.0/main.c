#include <stdio.h>
#include <stdlib.h>
#include "Usuario_Serie.h"
#define TAMSERIE 20
#define TAMUSUARIO 100
#define TAMUSUARIO_SERIE 2000

/* Mostrar:
1. Listado de series.
2. Listado de usuarios.eSerie listaDeSeries[TAMSERIE];
3. Listado de Usuarios con el nombre de la serie que ve.
4. Por cada serie, el nombre de los usuarios que la ven.

5. Usuario con sus series.
6. Serie con sus usuarios.
7. Ingresar un usuario y mostrar sus serie.
8. Usuarios que ven TBBT.
9. Serie/s mas popular/es.
*/

int main()
{
    int opcion;
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];
    eUsuario_Serie listaDeUsuario_Serie[TAMUSUARIO_SERIE];
    do
    {
        printf("1. Inicializar/Cargar\n2. Listado de series/usuarios\n3. Listado de Usuarios con el nombre de la serie que ve.\n4. Por cada serie, el nombre de los usuarios que la ven.\n9.Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                inicializarSeriesEstado(listaDeSeries, TAMSERIE);
                inicializarSeriesHardCode(listaDeSeries);
                inicializarUsuariosEstado(listaDeUsuarios, TAMUSUARIO);
                inicializarUsuariosHardCode(listaDeUsuarios);
                inicializarUsuario_Serie(listaDeUsuario_Serie, TAMUSUARIO_SERIE);
                break;
            case 2:
                mostrarListaSeries(listaDeSeries, TAMSERIE);
                mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
                break;
            case 3:
                mostrarUsuarioConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
                break;
            case 4:
                mostrarPorSerieUsuariosQueLaVen(listaDeSeries, TAMSERIE, listaDeUsuarios, TAMUSUARIO);
                break;
            case 5:
                mostrarUsuariosConSusSeries(listaDeUsuario_Serie, TAMUSUARIO_SERIE, listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
                break;
        }
        system("pause");
        system("cls");
    }while(opcion!=9);
    return 0;
}
