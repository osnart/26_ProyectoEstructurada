/*----------------------------------------------------------------------------*/
/*Autor:Santos Zárate Edson Osnart                                            */
/*E-mail:Santosedson515@gmail.com                                             */
/*Fecha de creacion: 14/04/2018                                               */
/*Fecha de modificacion: 24/04/2018                                           */
/*Descripción:Saber el número menor de un arreglo unidimensional              */
/*----------------------------------------------------------------------------*/


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
