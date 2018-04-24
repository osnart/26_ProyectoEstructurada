/*------------------------------------------------------------*/
/*Autor:Edson Osnart Santos Zárate                            */
/*E-mail:santosedson515@gmail.com                             */
/*Fecha de creación:21/04/2018                                */
/*Fecha de actualización:21/04/2018                           */
/*Descripción:Mostrar variables var 1 ,var2,var3              */
/*------------------------------------------------------------*/

#include<stdio.h>
/*declaracion de enum*/
/*tipo identificador{lista_de identificadores};*/
enum DIAS{L,M,MI,J,V,S,D};
enum MESES{EN=1,FE,MAR,AB,MAY,JUN,JUL,AG,SE,OC,NO,DI};
enum FRUTAS{manzana,mango,durazno,pera,uva,pina};
enum PRECIOAUTO{NUEVO=10,SEMINUEVO=-5,USADO,INSERVIBLE};
/*enumeración anonima*/
enum{PROG,MATEDIS,MATII,TGS,ELEC1}var1,var2,var3;


int main(void)
{
  printf("%d\n",USADO );
  printf("var1 =%d\n",var1 );
  printf("var2 =%d\n",var2);
  printf("var3 =%d\n",var2 );
  printf("%d\n",PROG );
  printf("%d\n",MATII );


  for(enum MESES mes=EN;mes<=DI;mes++)
  {
    printf("%d\n",mes );
    switch(mes)
    {
      case EN:
      printf("\nEnero\n" );
      break;
      case OC:
      printf("\nOctubre\n" );
      break;
    }
  }
  return 0;
}
