/*----------------------------------------------------------------------------*/
/*Autor:Santos Zárate Edson Osnart                                            */
/*E-mail:Santosedson515@gmail.com                                             */
/*Fecha de creacion: 14/04/2018                                               */
/*Fecha de modificacion: 24/04/2018                                           */
/*Descripción:Orden ascendente de números enteros                             */
/*----------------------------------------------------------------------------*/



#include<stdio.h>



int main(void)
{
  const int dim=9;
  int num[dim],i,j,aux;
  for(i=0;i<dim;i++)
  {
   printf("Dame el numero %d\n",i+1);
   scanf("%d",&num[i]);
  }
  for(j=1;j<dim;j++)
  {
    for(i=0;i<dim-1;i++)
    {
      if (num[i]>num[i+1])
      {
            aux=num[i+1];
            num[i+1]=num[i];
            num[i]=aux;
      }
    }
  }
  printf("\nOrdenamiento creciente\n");
  for(i=0;i<dim;i++)
  {
    printf("%d\n",num[i]);
  }
    return 0;
}
