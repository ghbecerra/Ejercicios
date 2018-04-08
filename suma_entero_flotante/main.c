#include <stdio.h>
// #include <stdlib.h>
#include <conio.h>

int main()
{
    /* int (numero entero) "%d", float (numero con coma) "%f" y char (caracter) "%c" */
    int numero1;
    float numero2;
    float suma;
    char letra;
    /* numero1=7;
    numero2=23.6987; */
    printf("Ingrese un numero entero: ");
    scanf("%d",&numero1);

    printf("Ingrese un numero flotante: ");
    scanf("%f",&numero2);

    printf("Ingrese una letra: ");
    /*fflush(stdin);
    scanf(" %c",&letra);*/
    //getch - getche
    letra=getche();

    suma=numero1+numero2;

    system("\n pause");
    system("cls");

    printf("\nEl numero entero es: %d y el numero flotante es: %.2f", numero1, numero2);
    printf("\nLa suma de los numeros es: %0.2f", suma);
    printf("\nLa letra ingresada es: %c\n", letra);
    system("pause");
    return 0;
}
