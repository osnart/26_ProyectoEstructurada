/*-------------------------------------------------------------------*/
/* Autor: Santos Zárate Edson Osnart                                 */
/* E-mail: santosedson515@gmail.com                                  */
/* Fecha creacion: 16/05/2018                                        */
/* Fecha actualizacion:17/05/2018                                    */
/* Descripcion: definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_NOM      50        /* Definicion del tamanio del arreglo unidimensional */
#define TOTAL_CANCION 40


/* Se define una estructura para modelar los datos de una cancion */
/* Los miembros de la estructura son:                             */

typedef struct
{
	char nombre[TAM_NOM];
	char genero[TAM_NOM];
	char album[TAM_NOM];
	char artista[TAM_NOM];
	char fecha[TAM_NOM];
	char compositor[TAM_NOM];

}Cancion;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarCancion(Cancion);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de Canciones */
Cancion crearNuevaCancion(void);
void mostrarListaCancion(Cancion [], int);
void buscarCancion(Cancion []);
void actualizarCancion(Cancion []);
void eliminarCancion(Cancion []);


/* Funcion que permite eliminar la cancion, es invocada por la funcion eliminarCancion() */
Cancion * eliminarUnaCancion(Cancion [], int);


/* Funciones que permiten ordenar los datos de las canciones */
int * ordenarAscendente(Cancion [], int []);
int * ordenarDescendente(Cancion [], int []);


#endif
