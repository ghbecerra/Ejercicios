#include <stdio.h>
/**
 * \brief Solicita un n�mero y lo retorna
 * \return N�mero ingresado por el usuario
 *
 */
float pedirRadio()
{
    float aux;
    printf("Ingrese el radio del circulo: ");
    scanf("%f",&aux);
    return aux;
}

/**
 * \brief Recibe el radio y calcula el �rea del c�rculo
 * \param Radio correspondiente al radio del c�rculo
 * \return El �rea del c�rculo
 *
 */
float calcularAreaCirculo(float radio)
{
    float resultado;
    resultado = 3.14 * radio * radio;
    return resultado;
}
