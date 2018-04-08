#include <stdio.h>
#include <stdlib.h>

/** \brief permite sumar dos numeros enteros
 *
 * \param el primer numero a sumar
 * \param el segundo numero a sumar
 * \return la suma de los numeros
 *
 */

//prototipo o declaracion de la funcion (siempre con ;)
//el int representa el tipo de dato devuelto por la funcion (int, float, char, double)
//sumarNumeros es el identificador de la funcion
//(int, int) representa los parametros que recibe la funcionn

int sumarNumeros (int, int);

int main()
{
    int numero1;
    int numero2;
    int resultado;
    //la llamada a la funcion
    printf("Ingrese numero1: ");
    scanf("%d", &numero1);
    printf("\nIngrese numero2: ");
    scanf("%d", &numero2);
    resultado=sumarNumeros(numero1, numero2);
    printf("\nEl resultado de la suma es: %d\n", resultado);
    return 0;
}
//desarrollo o la implementacion de la funcion (codigo o algoritmo que resuelve el problema)
//darle nombre a los parametros!
//void "funcion", es para una funcion sumidero, mostrar un msj, etc.
int sumarNumeros (int primerNumero, int segundoNumero)
{
    //desarrollo de la funcion
    int sumaRetorno;
    sumaRetorno=primerNumero+segundoNumero;
    return sumaRetorno;
}
