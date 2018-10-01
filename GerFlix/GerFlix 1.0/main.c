#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 5
#define TAMUSUARIO 15

int main()
{

    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    mostrarListaSeries(listaDeSeries , TAMSERIE);
    mostrarListaUsuarios(listaDeUsuarios ,TAMUSUARIO);
/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/




    return 0;
}