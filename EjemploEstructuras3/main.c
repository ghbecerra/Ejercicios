#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int idPersona;
    char nombrePersona[50];
    int idLocalidad;
}ePersona;

typedef struct
{
    int idLocalidad;
    char nombreLocalidad[50];
}eLocalidad;

void mostrarUnaPersona(ePersona auxPersona);
ePersona PedirDatosUnaPersona(void);

int main()
{
    ePersona unaPersona;
    unaPersona=PedirDatosUnaPersona();
    mostrarUnaPersona(unaPersona);
    return 0;
}

ePersona PedirDatosUnaPersona(void)
{
    ePersona nuevaPersona;
    nuevaPersona.idPersona=666;
    strcpy(nuevaPersona.nombrePersona,"natalia natalia");
    nuevaPersona.idLocalidad=777;
    return nuevaPersona;
}

void mostrarUnaPersona(ePersona auxPersona)
{
    printf("\nidPersona:%d",auxPersona.idPersona);
    printf("\nNombre:%s",auxPersona.nombrePersona);
    printf("\nidLocalidad:%d\n",auxPersona.idLocalidad);
}
