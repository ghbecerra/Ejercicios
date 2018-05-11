#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int idPropietario;
    char nombreApellido[50];
    char direccion[50];
    char tarjetaCredito[50];
    int estado;
}ePropietario;

typedef struct
{
    char patente[20];
    int marca;
    int idPropietario;
    int estado;
}eAutomovil;

int imprimirMenu(void);
void ePropietario_init(ePropietario listadoP[],int limite);
void ePropietario_alta(ePropietario listadoP[],int limite);
int ePropietario_buscarLugarLibre(ePropietario listadoP[],int limite);
void ePropietario_mostrarListado(ePropietario listadoP[],int limite);
void ePropietario_modificacionTarjeta(ePropietario listadoP[],int limite);
void ePropietario_baja(ePropietario listadoP[],int limite,eAutomovil listadoA[]);
void eAutomovil_init(eAutomovil listadoA[],int limite);
void eAutomovil_ingreso(eAutomovil listadoA[],int limite,ePropietario listadoP[]);
int eAutomovil_buscarLugarLibre(eAutomovil listadoA[],int limite);
int devolverHorasEstadia(void);
void eAutomovil_egreso(eAutomovil listadoA[],int limite,ePropietario listadoP[]);
void eAutomovil_mostrarListado(eAutomovil listadoA[],int limite);
void recaudacionTotal(eAutomovil listadoA[],int limite,ePropietario listadoP[]);
void recaudacionPorMarca(eAutomovil listadoA[],int limite);
void ePropietario_mostrarVehiculo(ePropietario listadoP[],int limite,eAutomovil listadoA[]);

#endif // FUNCIONES_H_INCLUDED
