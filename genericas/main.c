#include <stdio.h>
#include <stdlib.h>

/** \brief pide un numero y lo valida
 *
 * \param el texto del mensaje a mostrar
 * \param el valor minimo del intervalo de validacion
 * \param el valor maximo del intervalo de validacion
 * \return un numero entero validado
 *
 */

int pedirEntero(char[], int, int);
int validarEntero(int, int, int);

int main()
{
    int edad;
    int legajo;
    edad=pedirEntero("Ingrese edad: ", 18, 60);
    legajo=pedirEntero("Ingrese legajo: ", 1, 1500);
    printf("La edad es: %d\n", edad);
    printf("El legajo es: %d\n", legajo);
    return 0;
}

int pedirEntero(char mensaje[], int min, int max)
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    numero=validarEntero(numero, min, max);  //a validarEntero le entrego el numero, el min y max
    return numero;
}

int validarEntero(int dato, int min, int max)
{
    while(dato<min || dato>max){
        printf("Error: Ingrese entre %d y %d: ", min, max);
        scanf("%d", &dato);
        }
    return dato;
}
