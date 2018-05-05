#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
#define T 10

int main()
{
    int idProducto[T]= {100,101,102};
    char descripcion[T][50]={"Pepas","CocaCola","Prity"};
    int stock[T]={10,15,50};
    float precioUnitario[T]={10,12.5,22.36};
    int opcion;
    int posicion;
    char seguir;
    int i;
    int id;
    int nuevoStock;
    int flag;

    do
    {
        printf("1. Cargar\n2. Mostrar\n3. Ordenar\n4. Modificar\n9. Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                printf("CARGO\n");
                posicion = buscarLibre(idProducto, T);
                if(posicion!=-1)
                {
                    printf("Ingrese ID: ");
                    scanf("%d", &idProducto[posicion]);
                    printf("Ingrese descripcion: ");
                    fflush(stdin);
                    scanf("%[^\n]", descripcion[posicion]);
                    //gets(descripcion[posicion-1]);
                    printf("Ingrese stock: ");
                    scanf("%d", &stock[posicion]);
                    printf("Ingrese precio unitario: ");
                    scanf("%f", &precioUnitario[posicion]);
                }else{
                    printf("No hay espacio!");
                    }
                break;
            case 2:
                printf("Listado:\n");
                mostrarProductos(idProducto, descripcion, stock, precioUnitario, T);
                break;
            case 3:
                printf("ORDENO\n");
                ordenarProductos(idProducto, descripcion, stock, precioUnitario, T);
                break;
            case 4:
                flag =0;
                mostrarProductos(idProducto, descripcion, stock, precioUnitario, T);
                printf("\nIngrese el id del producto: ");
                scanf("%d", &id);
                for(i=0; i<T; i++)
                {
                    if(id == idProducto[i])//lo encontro
                    {
                         printf("%5d %20s %5d %.2f\n", idProducto[i], descripcion[i], stock[i], precioUnitario[i]);
                         printf("\nIngrese el nuevo stock: ");
                         scanf("%d", &nuevoStock);
                         printf("Desea realizar el cambio: ");
                         seguir = getche();
                         if(seguir=='s')
                         {
                             stock[i] = nuevoStock;
                         }else{
                            printf("Accion cancelada!");
                            }
                         flag = 1;
                         break;
                    }
                }
                if(flag == 0)
                {
                    printf("id no existe");
                }
                break;
        }
        system("pause");
        system("cls");
    }while(opcion!=9);
    return 0;
}
