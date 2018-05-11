#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codigo;  //campos de la estructura o atributos
    char descripcion[30];
    int stock;
    float precioCosto;
}eProducto;

void mostrarProducto(eProducto);

int main()
{
    eProducto unProducto; //declaracion de la variable
    eProducto otroProducto;

    unProducto.codigo=3; //hardcodeo
    strcpy(unProducto.descripcion, "Pa¤uelitos de hojaldre"); //alt 0164 imprime ñ
    unProducto.stock=10;
    unProducto.precioCosto=25.39;

    /*eProducto inventario[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d", &inventario[i].codigo);
    }*/
    //scanf("%d", &p.codigo);
    //gets(p.descripcion);

    otroProducto=unProducto;
    mostrarProducto(otroProducto);

    printf("\n\nunProducto:");
    printf("\ncodigo: %d \ndescripcion: %s \nstock: %d \nprecioCosto: %.2f", unProducto.codigo, unProducto.descripcion, unProducto.stock, unProducto.precioCosto);
    printf("\n\notroProducto:");
    printf("\ncodigo: %d \ndescripcion: %s \nstock: %d \nprecioCosto: %.2f", otroProducto.codigo, otroProducto.descripcion, otroProducto.stock, otroProducto.precioCosto);
    printf("\n\nbytes: %d", sizeof (eProducto));
    return 0;
}

void mostrarProducto(eProducto p)
{
    printf("\notroProducto (via funcion), envio de estructura:");
    printf("\ncodigo: %d \ndescripcion: %s \nstock: %d \nprecioCosto: %.2f", p.codigo, p.descripcion, p.stock, p.precioCosto);
}
