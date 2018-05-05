#include <stdio.h>
/**
 * \brief Solicita un número y lo retorna
 * \return Número ingresado por el usuario
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
 * \brief Recibe el radio y calcula el área del círculo
 * \param Radio correspondiente al radio del círculo
 * \return El área del círculo
 *
 */
float calcularAreaCirculo(float radio)
{
    float resultado;
    resultado = 3.14 * radio * radio;
    return resultado;
}
