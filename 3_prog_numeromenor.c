/*------------------------------------------------------------*/
/*Autor:Edson Osnart Santos Zárate                            */
/*E-mail:santosedson515@gmail.com                             */
/*Descripción:Saber el número menor de un arreglo unidimensional*/
/*------------------------------------------------------------*/



#include<stdio.h>



int main(void)
{
  const int dim=9;
  int num[dim],i;
  for(i=0;i<dim;i++)
  {
   printf("Dame el número %d\n",i+1);
   scanf("%d",&num[i]);
  }
  int min=num[0];
  for(i=0;i<dim;i++)
  {
   if (num[i]<min)
   min=num[i];
  }
  printf("El número menor es %d\n",min);
  return 0;
}
