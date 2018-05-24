/*-------------------------------------------------------------------*/
/* Autor: Santos Zárate Edson Osnart                                 */
/* E-mail: santosedson515@gmail.com                                  */
/* Fecha creacion: 22/05/2018                                        */
/* Fecha actualizacion:23/05/2018                                    */
/* Descripcion: implementacion de funciones sobre la estructura      */
/*              CANCION: crear, listar, ordenar, buscar,             */
/*              actualizar y eliminar.                               */
/*-------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int numCanciones;



Cancion crearNuevaCancion(void)
{
  Cancion cancion;

  printf(_TBLANCO _NEGRITA "Introduce el nombre de la canción: "              _NNEGRITA _TVERDE);
  fgets(cancion.nombre, TAM_NOM, stdin);                                    /* Solicita el nombre de la canción al usuario          */
  strcpy(cancion.nombre, strtok(cancion.nombre, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el genero de la canción: "           _NNEGRITA _TVERDE);
  fgets(cancion.genero, TAM_NOM, stdin);                                 /* Solicita el genero de la canción al usuario        */
  strcpy(cancion.genero, strtok(cancion.genero, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el album de la canción: " _NNEGRITA _TVERDE);
  fgets(cancion.album, TAM_NOM, stdin);                         /* Solicita la fecha de nacimiento al usuario        */
  strcpy(cancion.album, strtok(cancion.album, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce el artista de la canción: " _NNEGRITA _TVERDE);
  fgets(cancion.artista, TAM_NOM, stdin);                         /* Solicita el nombre del artista al usuario        */
  strcpy(cancion.artista, strtok(cancion.artista, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */


  printf(_TBLANCO _NEGRITA "Introduce la fecha de lanzamiento de la canción: " _NNEGRITA _TVERDE);
  fgets(cancion.fecha, TAM_NOM, stdin);                         /* Solicita la fecha de lanzamiento de la canción al usuario        */
  strcpy(cancion.fecha, strtok(cancion.fecha, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce el compositor de la canción: " _NNEGRITA _TVERDE);
  fgets(cancion.compositor, TAM_NOM, stdin);                         /* Solicita el nombre del compositor al usuario        */
  strcpy(cancion.compositor, strtok(cancion.compositor, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */


  return cancion;
}




void mostrarListaCancion(Cancion listaCancion[], int ordenar)
{
  int arrayTemp[numCanciones];
  for(int i = 0; i < numCanciones; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaCancion, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaCancion, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < numCanciones; i++)
  {
    mostrarCancion(listaCancion[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarCancion(Cancion listaCancion[])
{

  char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
        /* Almacena el genero a buscar dentro de la estructura             */

        //printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");

        printf(_TCYAN _NEGRITA "\n\nIngrese el nombre de la cancion: ");
        fgets(nombreBuscar, TAM_NOM, stdin);
        strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

        for(int i = 0; i < numCanciones; i++)
            if(strcmp(nombreBuscar, listaCancion[i].nombre) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarCancion(listaCancion[i]);
            }else{
              printf("la canción %s no existe en el registro \n",nombreBuscar );
            }

}
void actualizarCancion(Cancion listaCancion[])
{

  char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */


          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre de la canción: ");
          fgets(nombreBuscar, TAM_NOM, stdin);
          strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

          for(int i = 0; i < numCanciones; i++)
          {
              if(strcmp(nombreBuscar, listaCancion[i].nombre) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarCancion(listaCancion[i]);

                  printf("\n\n");

                  listaCancion[i] = crearNuevaCancion();

                  mostrarEncabezadoTabla();
                  mostrarCancion(listaCancion[i]);

                  break;
              }
              else{
                printf("la canción %s no existe en el registro \n",nombreBuscar );
              }
          }
}



void eliminarCancion(Cancion listaCancion[])
{
  char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre: ");
          fgets(nombreBuscar, TAM_NOM, stdin);
          strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

          for(int i = 0; i < numCanciones; i++)
          {
              if(strcmp(nombreBuscar, listaCancion[i].nombre) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarCancion(listaCancion[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar la cancion:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaCancion));
                    listaCancion = eliminarUnaCancion(listaCancion, i);
                  }

                  printf("\n\n");
                  break;
              }
              else{
                printf("la canción %s no existe en el registro \n",nombreBuscar );
              }

          }
}


Cancion * eliminarUnaCancion(Cancion listaCancion[], int posicion)
{
  if(posicion < (numCanciones - 1))
  {
    for(int j = posicion; j < numCanciones-1; j++)
    {
      strcpy(listaCancion[j].nombre,          listaCancion[j+1].nombre);
      strcpy(listaCancion[j].genero,       listaCancion[j+1].genero);
      strcpy(listaCancion[j].album, listaCancion[j+1].album);
    strcpy(  listaCancion[j].artista   , listaCancion[j+1].artista);
  strcpy  (  listaCancion[j].fecha , listaCancion[j+1].fecha);
  strcpy    (listaCancion[j].compositor    ,listaCancion[j+1].compositor);
    }
  }

  strcpy(listaCancion[numCanciones-1].nombre,          "");
  strcpy(listaCancion[numCanciones-1].genero,       "");
  strcpy(listaCancion[numCanciones-1].album, "");
  strcpy(listaCancion[numCanciones-1].artista,          "");
  strcpy(listaCancion[numCanciones-1].fecha,       "");
  strcpy(listaCancion[numCanciones-1].compositor, "");

  numCanciones--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

  return listaCancion;
}
