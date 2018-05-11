#include "Serie.h"
#include "Usuario.h"

typedef struct
{
    int idUsuario;
    int idSerie;
}eUsuario_Serie;

void inicializarUsuarios_Serie(eUsuario_Serie[], int);
void mostrarListaUsuarios(eUsuario[], int);
