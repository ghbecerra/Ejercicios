#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int (numero entero) "%d", float (numero con coma) "%f" y char (caracter) "%c" */
    int numero;
    int minimo;
    int maximo;
    int contador=0;
    int contadorpares=0;
    int contadorimpares=0;
    char respuesta='s';

    while(respuesta!='n'){  //respuesta diferente a "n"
        printf("Ingrese un numero: ");
        scanf("%d",&numero);
        printf("\nEl numero es: %d", numero);
        if((numero%2)==0 && numero!=0){
            contadorpares++;
            }else{
                if(numero!=0)
                    contadorimpares++;
                }
        if(contador==0){
            maximo=numero;
			minimo=numero;
			}else{
				if(numero>maximo)
					maximo=numero;
				if(numero<minimo)
					minimo=numero;
                }
        contador++;
        fflush(stdin); //para limpiar el buffer
        printf("\nIngrese 'n' para salir, 's' para continuar: ");
        scanf("%c",&respuesta);
        }
    //system("cls");
    printf("\nEl numero maximo: %d", maximo);
    printf("\nEl numero minimo: %d", minimo);
    printf("\nLa cantidad de numeros pares: %d", contadorpares);
    printf("\nLa cantidad de numeros impares: %d\n", contadorimpares);
    system("\n pause");
    return 0;
}
