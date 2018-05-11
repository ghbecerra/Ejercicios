#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANTIDAD 20

int main()
{
    int opcion=0;
    char seguir='s';
    ePropietario listadoPropietario[CANTIDAD];
    ePropietario_init(listadoPropietario,CANTIDAD);
    eAutomovil listadoAutomovil[CANTIDAD];
    eAutomovil_init(listadoAutomovil,CANTIDAD);
    while(seguir=='s')
    {
        opcion=imprimirMenu();
        switch(opcion)
        {
            case 1:
                // ALTA DE PROPIETARIO
                ePropietario_alta(listadoPropietario,CANTIDAD);
                break;
            case 2:
                // MODIFICACION DE PROPIETARI (TARJ DE CREDITO)
                ePropietario_mostrarListado(listadoPropietario,CANTIDAD);
                ePropietario_modificacionTarjeta(listadoPropietario,CANTIDAD);
                break;
            case 3:
                // BAJA DE PROPIETARIO
                ePropietario_mostrarListado(listadoPropietario,CANTIDAD);
                ePropietario_baja(listadoPropietario,CANTIDAD,listadoAutomovil);
                break;
            case 4:
                // INGRESO DE AUTOMOVIL
                ePropietario_mostrarListado(listadoPropietario,CANTIDAD);
                eAutomovil_ingreso(listadoAutomovil,CANTIDAD,listadoPropietario);
                break;
            case 5:
                // EGRESO DE AUTOMOVIL
                eAutomovil_mostrarListado(listadoAutomovil,CANTIDAD);
                eAutomovil_egreso(listadoAutomovil,CANTIDAD,listadoPropietario);
                break;
            case 6:
                //RECAUDACION TOTAL
                recaudacionTotal(listadoAutomovil,CANTIDAD,listadoPropietario);
                break;
            case 7:
                //RECAUDACION POR MARCA
                recaudacionPorMarca(listadoAutomovil,CANTIDAD);
                break;
            case 8:
                ePropietario_mostrarListado(listadoPropietario,CANTIDAD);
                ePropietario_mostrarVehiculo(listadoPropietario,CANTIDAD,listadoAutomovil);
                //LISTAR AUTOS DE UN PROPIETARIO
                break;
            case 9:
                //LISTAR DATOS DE PROPIETARIO QUE TENGA AUDI
                break;
            case 10:
                //LISTARDO DE AUTOS ESTACIONADOS ORDENADOS POR PATENTE
                break;
            case 11:
                seguir='n';
                break;
        }
    }
    return 0;
}
