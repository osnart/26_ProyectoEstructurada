/*-------------------------------------------------------------------*/
/* Autor: Santos Zárate Edson Osnart                                 */
/* E-mail: santosedson515@gmail.com                                  */
/* Fecha creacion: 16/05/2018                                        */
/* Fecha actualizacion:17/05/2018                                    */
/* Descripcion: Estructura de canciones escuchadas                   */
/*-------------------------------------------------------------------*/
/*Declaración de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   /* En este archivo se definen las secuencia para los colores            */
#include "enums.h"                     /* En este archivo se definen los enums para los menus                 */
#include "prototipofunciones.h"        /* En este archivo se definen todos los prototipos de funciones        */

                                       /* Los #define estan en el archivo prototipofunciones.h                */

int numCanciones;                        /* Variable global: se define aqui en el main, pero se utiliza,        */
                                       /* manteniendo su valor en operacionesAlumno.c y ordenacion.c          */

int main(void)
{
  Cancion listaCancion[TOTAL_CANCION];    /* Declaracion de una variable de arreglo de estructura alumno[]       */
	int opcion;                          /* Variable que ontrola las opciones del menu principal.               */

	do{
    menuPrincipal();                   /* Se llama (invoca) a la funcion menuPrincipal() implementada en      */
                                       /* operacionespantalla.c                                               */

		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case CREAR:
              while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
              printf(_TCYAN     _NEGRITA "\n\n1. A L T A   D E  C A N C I O N E S\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de canciones a ingresar: " _TVERDE);
							scanf("%d",&numCanciones);
							printf("\n\n" _ARESET);

							for(int i = 0; i < numCanciones; i++)
							{
                while(getchar() != '\n');              /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
                listaCancion[i] = crearNuevaCancion();   /* Se invoca a la funcion crearNuevoAlumno() implementada en operacionesAlumno.c  */
              }
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR:
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    C A N C I O N E S \n\n");
              mostrarListaCancion(listaCancion, 0);      /* Se invoca a la funcion mostrarCancion() implementada en operacionesCancion.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_ASC:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E\n\n");
              mostrarListaCancion(listaCancion, 1);      /* Se invoca a la funcion mostrarCancion() implementada en operacionesCanción.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_DES:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n4. L I S T A R    D E S C E D E N T E\n\n");
              mostrarListaCancion(listaCancion, 2);      /* Se invoca a la funcion mostrarCancion() implementada en operacionesCanción.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case BUSCAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
						  printf(_TAMARILLO _NEGRITA "\n\n5. B U S C A R\n\n");
              buscarCancion(listaCancion);               /* Se invoca a la funcion buscarCancion() implementada en operacionescancion.c      */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ACTUALIZAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n6. A C T U A L I Z A R\n\n");
              actualizarCancion(listaCancion);           /* Se invoca a la funcion actualizarCancion() implementada en operacionescancion.c  */
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ELIMINAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n7. E L I M I N A R\n\n");
              eliminarCancion(listaCancion);             /* Se invoca a la funcion eliminarCancion() implementada en operacionesAlumno.c    */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case SALIR:
							system("clear");                         /* Antes de terminar la ejecucion del programa, limpia la pantalla */
							exit(0);                                 /* Termina la ejecucion del programa                               */
		}
	}while(opcion != SALIR);

	return 0;
}
