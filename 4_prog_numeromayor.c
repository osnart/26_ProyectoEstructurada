/*----------------------------------------------------------------------------*/
/*Autor:Santos Zárate Edson Osnart                                            */
/*E-mail:Santosedson515@gmail.com                                             */
/*Fecha de creacion: 24/04/2018                                               */
/*Fecha de modificacion: 24/04/2018                                           */
/*Descripcion: Saber el número mayor de un arreglo unidimensional             */
/*----------------------------------------------------------------------------*/


#include<stdio.h>



int main(void)
{
  const int dim=9;
  int num[dim],i;
  int may=0;
  for(i=0;i<dim;i++)
  {
    printf("Dame el numero %d\n",i+1);
    scanf("%d",&num[i]);
  }
  for(i=0;i<dim;i++)
  {
   if (num[i]>may)
   may=num[i];
  }
  printf("El numero mayor es %d\n",may);
  return 0;
}
