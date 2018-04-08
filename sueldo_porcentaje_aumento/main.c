#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int (numero entero) "%d", float (numero con coma) "%f" y char (caracter) "%c" */
    int porcentajeAumento;
    float sueldo;
    float sueldototal;
    char nombre;
    float aumento;
    printf("\nIngrese sueldo: ");
    scanf("%f",&sueldo);
    printf("\nIngrese nombre: ");
    nombre=getche();
    printf("\nIngrese porcentaje de aumento: ");
    scanf("%d",&porcentajeAumento);
    aumento=((sueldo*porcentajeAumento)/100);
    sueldototal=(sueldo+aumento);
    printf("\nnombre: %c sueldo: %.2f aumento de sueldo: %.2f sueldo con aumento: %.2f porcentaje de aumento: %% %d\n",nombre,sueldo,aumento,sueldototal,porcentajeAumento);
    return 0;
    }
