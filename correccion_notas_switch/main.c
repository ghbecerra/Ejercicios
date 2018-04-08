#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;

    printf("Calificacion: ");
    scanf("%d",&nota);

    switch(nota)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        printf("Desaprobado");
        break;
        case 4:
        case 5:
        case 6:
        printf("Aprobado");
        break;
        case 7:
        case 8:
        printf("Notable");
        break;
        case 9:
        case 10:
        printf("Sobresaliente");
        break;
        default:
        printf("Error al ingresar nota");
        }
    return 0;
}
