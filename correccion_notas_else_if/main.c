#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;

    printf ("Ingrese nota: ");
    scanf ("%f",&nota);

    if (nota==9||nota==10)
        {
        printf("Sobresaliente");
        }else if(nota==7||nota==8)
            {
            printf("Notable");
            }else if(nota>=4&&nota<7)
                {
                printf("Aprobado");
                }else if(nota<4)
                    {
                    printf ("Desaprobado");
                    }else
                        {
                        printf("Error al ingresar nota");
                        }
    return 0;
}
