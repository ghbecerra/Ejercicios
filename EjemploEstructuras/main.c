#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#define OCUPADO 0
#define LIBRE 1

typedef struct
{
    int legajo;
    int estado;
}eAlumno;

eAlumno pedirAlumno(void);
void mostrarAlumno(eAlumno);
void ordenarPorPromedio(eAlumno[],int cantidad);
void mostrarListado(eAlumno listado[],int cantidad);

/*int buscarLugarLibre(eAlumno[],int);
int buscarIndiceDelAlumno(eAlumno listado[],int legajo,int cantidad);
int insertarAlumnoEnLaLista(eAlumno[]);
float calcularPromedio(int ,int);*/


/*para el martes 24 de abril
1-completar las funciones faltantes con sus implementaciones
2- hacer un menu de opciones (en el main o en funciones)
3- Terminar el alta baja y modificacion de un alumno del listado
*/

int main()
{
    /*
    eAlumno aluDelMain;
    aluDelMain=pedirAlumno();
    mostrarAlumno(aluDelMain);
    */
    int i;
    eAlumno listadoDelMain[TAM];
    //inicializo listadoDelMain[]
    for(i=0;i<TAM;i++)
    {
        listadoDelMain[i].estado=LIBRE;
        listadoDelMain[i].legajo=0;
    }
    ordenarPorPromedio(listadoDelMain,TAM);
    mostrarListado(listadoDelMain,TAM);
    return 0;
}

eAlumno pedirAlumno(void)
{
    eAlumno aluRetorno;
    aluRetorno.legajo=666;
    aluRetorno.estado=OCUPADO;
    //pido todos los datos
    return aluRetorno;
}

void mostrarAlumno(eAlumno aluAux)
{
    printf("Legajo:%d  Estado:%d \n",aluAux.legajo,aluAux.estado);
}

void ordenarPorPromedio(eAlumno listado[],int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        listado[i].legajo=i*9;
    }
}

void mostrarListado(eAlumno listado[],int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
       mostrarAlumno(listado[i]);
    }
}



/*int buscarLugarLibre(eAlumno listado[],int tam)
{
    int indice=-1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(listado[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}*/
