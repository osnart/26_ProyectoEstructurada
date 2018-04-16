/*------------------------------------------------------------*/
/*Autor:Edson Osnart Santos Zárate                            */
/*E-mail:santosedson515@gmail.com                             */
/*Fecha de actualización:14/04/2018                           */
/*Descripción:Mostrar constantes declaradas con #define y     */
/* y const, simular ciclos while,do whilw y for               */           
/*------------------------------------------------------------*/



/*Declaracion de las bibliotecas*/
 #include <stdio.h>



/*declaración de constantes con #define*/
/*no se reserva espacio en memoria*/
 #define PI 3.1416
 #define G 9.81
 #define MIN 0
 #define MAX 100
 #define TAMANIO 10
/*implementacion de macros*/
 #define SUMA(x,y) x+y
 #define RESTA(x,y) x-y
 #define MULTIPLICACION(x,y) x*y
 #define DIV(x,y) x/y
 #define POTCUADRADO(x) x*x
 #define POTCUBO(x) x*x*x
/*DEFINIR CICLOS CON MACRO*/
 #define CICLOFOR(x,y) for(x=0;x<y;x++)
 #define CICLODOWHILE(x,y)   do{}while(x<y);
 #define CICLOWHILE(x,y) while(x<y) 
/*declaración de constantes con cont*/
/*se reserva espacio en memoria*/
 const float pi=3.1416;
 const float g=9.81;
 const int  min =0;
 const int max=100;
 const int tamanio =10;

int main(void)
{
  /*imprimir macros*/
  
   puts("imprimir macros");
   printf("\n%d\n",SUMA(3,4) );
   printf("\n%d\n",RESTA(3,4) );
   printf("\n%d\n",MULTIPLICACION(3,4) );
   printf("\n%d\n",DIV(3,4) );
   printf("\n%d\n",POTCUADRADO(3) );
   printf("\n%d\n",POTCUBO(3) );

  /*DEFINIR CICLOS CON MACRO*/
  /*imprimir constantes #define*/
   printf("\nimprimir constantes #define\n");
   printf("\n%f \n",PI);
   printf("\n%f \n",G);
   printf("\n%d \n",MIN);
   printf("\n%d \n",MAX);
   printf("\n%d \n",TAMANIO);
  /*imprimir constantes const*/
   printf("\nimprimir constantes const\n");
   printf("\n%f \n",pi);
   printf("\n%f \n",g);
   printf("\n%d \n",min);
   printf("\n%d \n",max);
   printf("\n%d \n",tamanio);

  /*utilizando las macros de ciclo*/
  printf("\nUtilizando las macros en un ciclo for\n");
  int x=1;
  int y=10;
  CICLOFOR(x,y)
  {
    printf("\nHOLA MUNDO...\n");
  }
  printf("\nUtilizando las macros en un ciclo do while\n");
  CICLODOWHILE(x,y)
  {
    printf("\nHOLi MUNDO...\n");
    x++;
  }
  printf("\nUtilizando las macros en un ciclo  while\n");
  CICLOWHILE(x,y);
  {
    printf("\nHOLaa MUNDO...\n");
    x++;
  }
  
  return 0;
}
