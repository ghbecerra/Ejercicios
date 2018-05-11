#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funciones.h"
#define LIBRE 1
#define OCUPADO 0
#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTRO 4

int imprimirMenu(void)
{
    int retorno=0;
    do
    {
        system("cls");
        printf("MENU\n");
        printf("1. ALTA DE PROPIETARIO\n");
        printf("2. MODIFICACION DE TARJETA DE CREDITO DE PROPIETARIO\n");
        printf("3. BAJA DE PROPIETARIO\n");
        printf("4. INGRESO DE AUTOMOVIL\n");
        printf("5. EGRESO DE AUTOMOVIL\n");
        printf("6. RECAUDACION TOTAL\n");
        printf("7. RECAUDACION POR MARCA\n");
        printf("8. LISTAR AUTOS DE UN PROPIETARIO\n");
        printf("9. LISTAR DATOS DE PROPIETARIO QUE TENGA AUDI\n");
        printf("10. LISTADO DE AUTOS ESTACIONADOS ORDENADOS POR PATENTE\n\n");
        printf("11. SALIR\n\n");
        printf("Opcion: ");
        fflush(stdin);
        scanf("%d",&retorno);
    }while(retorno<1 || retorno>11);
    return retorno;
}

void ePropietario_init(ePropietario listado[],int limite)
{
    int i;
    if(limite>0 && listado!=NULL)
    {
        for(i=0;i<limite;i++)
        {
            listado[i].estado=LIBRE;
        }
    }
}

void ePropietario_alta(ePropietario listado[],int limite)
{
    int indice;
    if(limite>0 && listado!=NULL)
    {
        indice=ePropietario_buscarLugarLibre(listado,limite);
        if(indice>=0)
        {
            listado[indice].idPropietario=indice+100;
            system("cls");
            printf("ALTA DE CLIENTE\n");
            printf("Ingrese nombre y apellido: ");
            fflush(stdin);
            gets(listado[indice].nombreApellido);
            printf("Ingrese direccion: ");
            fflush(stdin);
            gets(listado[indice].direccion);
            printf("Ingrese tarjeta de credito: ");
            fflush(stdin);
            gets(listado[indice].tarjetaCredito);
            listado[indice].estado=OCUPADO;
        }else{
            system("cls");
            printf("No hay espacio libre para agregar al registro de clientes.\n\n");
            system("pause");
        }
    }
}

int ePropietario_buscarLugarLibre(ePropietario listado[],int limite)
{
    int retorno=-1;
    int i;
    if(limite>0 && listado!=NULL)
    {
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado==LIBRE)
            {
                retorno=i;
                break;
            }
        }
    }
    return retorno;
}

void ePropietario_mostrarListado(ePropietario listado[],int limite)
{
    int i;
    if(limite>0 && listado!=NULL)
    {
        system("cls");
        printf("CLIENTES:\n");
        printf("Id\tNombre y Apellido\tDireccion\tTarjeta de credito\n");
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado==OCUPADO)
            {
                printf("%d", listado[i].idPropietario);
                printf("\t%s", listado[i].nombreApellido);
                printf("\t\t%s", listado[i].direccion);
                printf("\t%s\n", listado[i].tarjetaCredito);
            }
        }
        system("pause");
    }
}

void ePropietario_modificacionTarjeta(ePropietario listado[],int limite)
{
    int i;
    int auxId;
    int flag=0;
    printf("\nIngrese Id del cliente a modificar: ");
    fflush(stdin);
    scanf("%d", &auxId);
    for(i=0;i<limite;i++)
    {
        if(listado[i].idPropietario==auxId)
        {
            printf("\nIngrese nueva tarjeta de credito: ");
            fflush(stdin);
            gets(listado[i].tarjetaCredito);
            flag=1;
        }
    }
    if(i==limite && flag!=1)
    {
        printf("\nNo existe cliente ingresado.\n\n");
        system("pause");
    }
}

void ePropietario_baja(ePropietario listadoP[],int limite,eAutomovil listadoA[])
{
    int i;
    int j;
    int flag=0;
    int auxId;
    char resp;
    int costoALPHA_ROMEO=0;
    int costoFERRARI=0;
    int costoAUDI=0;
    int costoOTROS=0;
    int costoTotal=0;
    printf("\nIngrese Id del cliente a dar de baja: ");
    fflush(stdin);
    scanf("%d", &auxId);
    for(i=0;i<limite;i++)
    {
        if(listadoP[i].idPropietario==auxId)
        {
            flag=1;
            printf("\nConfirma la baja de %s, id: %d", listadoP[i].nombreApellido, listadoP[i].idPropietario);
            printf("\nIngrese 's' para confirmar, cualquier otra tecla para cancelar: ");
            fflush(stdin);
            scanf("%c",&resp);
            if(resp=='s')
            {
                for(j=0;j<limite;j++)
                {
                    if(listadoP[i].idPropietario==listadoA[j].idPropietario && listadoA[j].estado!=LIBRE)
                    {
                        if(listadoA[j].marca==1)
                            {costoALPHA_ROMEO=costoALPHA_ROMEO+devolverHorasEstadia()*150;}
                        if(listadoA[j].marca==2)
                            {costoFERRARI=costoFERRARI+devolverHorasEstadia()*175;}
                        if(listadoA[j].marca==3)
                            {costoAUDI=costoAUDI+devolverHorasEstadia()*200;}
                        if(listadoA[j].marca==4)
                            {costoOTROS=costoOTROS+devolverHorasEstadia()*250;}
                        listadoA[j].estado=LIBRE;
                        costoTotal=costoTotal+costoALPHA_ROMEO+costoFERRARI+costoAUDI+costoOTROS;
                    }
                    if(listadoA[j].estado==LIBRE)
                    {
                        listadoP[i].estado=LIBRE;
                    }
                }
            }
        }
    }
    printf("\nImporte total a pagar: %d\n\n",costoTotal);
    system("pause");
    if(i==limite && flag!=1)
    {
        printf("\nNo existe cliente ingresado.\n\n");
        system("pause");
    }
}

void eAutomovil_init(eAutomovil listado[],int limite)
{
    int i;
    if(limite>0 && listado!=NULL)
    {
        for(i=0;i<limite;i++)
        {
            listado[i].estado=LIBRE;
        }
    }
}

void eAutomovil_ingreso(eAutomovil listadoA[],int limite,ePropietario listadoP[])
{
    int i;
    int indice;
    int auxId;
    int marca;
    int flag=0;
    indice=eAutomovil_buscarLugarLibre(listadoA,limite);
    if(indice>=0)
    {
        printf("\nIngrese Id del cliente: ");
        fflush(stdin);
        scanf("%d",&auxId);
        for(i=0;i<limite;i++)
        {
            if(listadoP[i].idPropietario==auxId)
            {
                listadoA[indice].idPropietario=auxId;
                printf("\nIngrese Patente: ");
                fflush(stdin);
                gets(listadoA[indice].patente);
                do
                {
                    printf("\nIngrese Marca:\n");
                    printf("\t1. ALPHA_ROMEO\n");
                    printf("\t2. FERRARI\n");
                    printf("\t3. AUDI\n");
                    printf("\t4. OTRO\n");
                    printf("Opcion: ");
                    fflush(stdin);
                    scanf("%d", &marca);
                }while(marca<1 || marca>4);
                listadoA[indice].marca=marca;
                listadoA[indice].estado=OCUPADO;
                flag=1;
            }
        }
        if(i==limite && flag!=1)
        {
            printf("\nNo existe cliente ingresado.\n\n");
            system("pause");
        }
    }else{
        system("cls");
        printf("\nESTACIONAMIENTO COMPLETO - NO SE PUEDEN INGRESAR VEHICULOS.");
        system("pause");
    }
}

int eAutomovil_buscarLugarLibre(eAutomovil listadoA[],int limite)
{
    int retorno=-1;
    int i;
    if(limite>0 && listadoA!=NULL)
    {
        for(i=0;i<limite;i++)
        {
            if(listadoA[i].estado==LIBRE)
            {
                retorno=i;
                break;
            }
        }
    }
    return retorno;
}

int devolverHorasEstadia()
{
    int horas;
    srand(time(NULL));
    horas=(rand()%24)+1;
    return horas ;
}

void eAutomovil_egreso(eAutomovil listadoA[],int limite,ePropietario listadoP[])
{
    char auxPatente[20];
    int i;
    int j;
    int costoALPHA_ROMEO=0;
    int costoFERRARI=0;
    int costoAUDI=0;
    int costoOTROS=0;
    int costoTotal=0;
    int flag=0;
    char resp;
    printf("\nIngrese patente del vehiculo a dar de baja: ");
    fflush(stdin);
    gets(auxPatente);
    for(i=0;i<limite;i++)
    {
        if(strcmp(listadoA[i].patente,auxPatente)==0)
        {
            flag=1;
            printf("\nConfirma la baja del vehiculo patente %s, id: %d", listadoA[i].patente, listadoA[i].idPropietario);
            printf("\nIngrese 's' para confirmar, cualquier otra tecla para cancelar: ");
            fflush(stdin);
            scanf("%c",&resp);
            if(resp=='s')
            {
                if(listadoA[j].marca==1)
                    {costoALPHA_ROMEO=costoALPHA_ROMEO+devolverHorasEstadia()*150;}
                if(listadoA[j].marca==2)
                    {costoFERRARI=costoFERRARI+devolverHorasEstadia()*175;}
                if(listadoA[j].marca==3)
                    {costoAUDI=costoAUDI+devolverHorasEstadia()*200;}
                if(listadoA[j].marca==4)
                    {costoOTROS=costoOTROS+devolverHorasEstadia()*250;}
                costoTotal=costoALPHA_ROMEO+costoFERRARI+costoAUDI+costoOTROS;
                for(j=0;j<limite;j++)
                {
                    if(listadoA[i].idPropietario==listadoP[j].idPropietario)
                    {
                        printf("\nPropietario: %s\n",listadoP[j].nombreApellido);
                        printf("Patente: %s\n",listadoA[i].patente);
                        printf("Marca: %d\n", listadoA[i].marca);
                        printf("Valor de estadia: %d\n\n",costoTotal);
                        system("pause");
                    }
                }
                listadoA[i].estado=LIBRE;
            }
        }
    }
    if(i==limite && flag!=1)
    {
        printf("\nNo existe patente ingresada.\n\n");
        system("pause");
    }
}

void eAutomovil_mostrarListado(eAutomovil listadoA[],int limite)
{
    int i;
    if(limite>0 && listadoA!=NULL)
    {
        system("cls");
        printf("VEHICULOS:\n");
        printf("Id\tPatente\tMarca\n");
        for(i=0;i<limite;i++)
        {
            if(listadoA[i].estado==OCUPADO)
            {
                printf("%d", listadoA[i].idPropietario);
                printf("\t%s", listadoA[i].patente);
                printf("\t%d\n", listadoA[i].marca);
            }
        }
        system("pause");
    }
}

void recaudacionTotal(eAutomovil listadoA[],int limite,ePropietario listadoP[])
{
    int i;
    int j;
    int costoParcial=0;
    int costoTotal=0;
    int costoALPHA_ROMEO=0;
    int costoFERRARI=0;
    int costoAUDI=0;
    int costoOTROS=0;
    for(i=0;i<limite;i++)
    {
        if(listadoP[i].estado==OCUPADO)
        {
            for(j=0;j<limite;j++)
            {
                if(listadoA[j].estado==OCUPADO)
                {
                    if(listadoA[j].marca==1)
                        {costoALPHA_ROMEO=costoALPHA_ROMEO+devolverHorasEstadia()*150;}
                    if(listadoA[j].marca==2)
                        {costoFERRARI=costoFERRARI+devolverHorasEstadia()*175;}
                    if(listadoA[j].marca==3)
                        {costoAUDI=costoAUDI+devolverHorasEstadia()*200;}
                    if(listadoA[j].marca==4)
                        {costoOTROS=costoOTROS+devolverHorasEstadia()*250;}
                    costoParcial=costoParcial+costoALPHA_ROMEO+costoFERRARI+costoAUDI+costoOTROS;
                }
            }
        system("cls");
        printf("\nImporte total a pagar por %s : %d",listadoP[i].nombreApellido,costoParcial);
        costoTotal=costoTotal+costoParcial;
        }
    }
    printf("\n\nRecaudacion total : %d\n\n",costoTotal);
    system("pause");
}

void recaudacionPorMarca(eAutomovil listadoA[],int limite)
{
    int i;
    int costoALPHA_ROMEO=0;
    int costoFERRARI=0;
    int costoAUDI=0;
    int costoOTROS=0;
    for(i=0;i<limite;i++)
    {
        if(listadoA[i].estado==OCUPADO)
        {
            if(listadoA[i].marca==1)
                {costoALPHA_ROMEO=costoALPHA_ROMEO+devolverHorasEstadia()*150;}
            if(listadoA[i].marca==2)
                {costoFERRARI=costoFERRARI+devolverHorasEstadia()*175;}
            if(listadoA[i].marca==3)
                {costoAUDI=costoAUDI+devolverHorasEstadia()*200;}
            if(listadoA[i].marca==4)
                {costoOTROS=costoOTROS+devolverHorasEstadia()*250;}
        }
    }
    system("cls");
    printf("\nRecaudacion por marca de vehiculo:\n");
    printf("\nALPHA_ROMEO: %d",costoALPHA_ROMEO);
    printf("\nFERRARI: %d",costoFERRARI);
    printf("\nAUDI: %d",costoAUDI);
    printf("\nOTROS: %d\n\n",costoOTROS);
    system("pause");
}

void ePropietario_mostrarVehiculo(ePropietario listadoP[],int limite,eAutomovil listadoA[])
{
    int i;
    int j;
    int auxId;
    int flag=0;
    printf("\nIngrese Id del cliente: ");
    fflush(stdin);
    scanf("%d",&auxId);
    for(i=0;i<limite;i++)
    {
        if(listadoP[i].idPropietario==auxId)
        {
            flag=1;
            printf("\nPropietario: %s\n",listadoP[i].nombreApellido);
            for(j=0;j<limite;j++)
            {
                if(listadoA[j].estado==OCUPADO)
                {
                    printf("Patente: %s\tMarca: %d\n",listadoA[j].patente,listadoA[j].marca);
                }
            }
            system("pause");
        }
    }
    if(i==limite && flag!=1)
    {
        printf("\nNo existe cliente ingresado.\n\n");
        system("pause");
    }
}
