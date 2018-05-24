/*-------------------------------------------------------------------*/
/* Autor: Santos Zárate Edson Osnart                                 */
/* E-mail: santosedson515@gmail.com                                  */
/* Fecha creacion: 22/05/2018                                        */
/* Fecha actualizacion:23/05/2018                                    */
/* Descripcion: implementacion de funciones que muestran datos en    */
/*              pantalla.                                            */
/*--------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\n***C A N C I O N E S   M Á S   E S C U C H A D A S***" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N Ú    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Registro de canciones");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de canciones");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de canciones Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de canciones Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar Canción");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar Cancion");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar Cancion");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarEncabezadoTabla(void){
  printf(_TROJO     _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\tARTISTA\t|   FECHA   |      COMPOSITOR    |", "NOMBRE", "GENERO", "ALBUM");
  printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
}

void mostrarCancion(Cancion cancion)
{
  printf(_TBLANCO _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\t%-18s\t|\t%-18s\t|\t%-18s\t|", cancion.nombre, cancion.genero, cancion.album, cancion.artista, cancion.fecha, cancion.compositor);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
