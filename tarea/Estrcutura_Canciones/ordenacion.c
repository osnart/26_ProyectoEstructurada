/*-------------------------------------------------------------------*/
/* Autor: Santos Zárate Edson Osnart                                 */
/* E-mail: santosedson515@gmail.com                                  */
/* Fecha creacion: 22/05/2018                                        */
/* Fecha actualizacion:23/05/2018                                    */
/* Descripcion: implementacion de las funciones de ordenacion        */
/*-------------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int numCanciones;

int * ordenarAscendente(Cancion listaCancion[], int arrayTemp[])
{
  for(int i = 0; i < numCanciones; i++)
  {
    for(int j = i + 1; j < numCanciones; j++)
    {
      if(strcmp(listaCancion[arrayTemp[i]].nombre, listaCancion[arrayTemp[j]].nombre) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Cancion listaCancion[], int arrayTemp[])
{
  for(int i = 0; i < numCanciones; i++)
  {
    for(int j = i + 1; j < numCanciones; j++)
    {
      if(strcmp(listaCancion[arrayTemp[i]].nombre, listaCancion[arrayTemp[j]].nombre) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
