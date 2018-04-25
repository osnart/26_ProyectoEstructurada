/*----------------------------------------------------------------------------*/
/*Autor:Santos Zárate Edson Osnart                                            */
/*E-mail:Santosedson515@gmail.com                                             */
/*Fecha de creacion: 14/04/2018                                               */
/*Fecha de modificacion: 24/04/2018                                           */
/*Descripción:mostar cuantas veces se repite un numero                        */
/*----------------------------------------------------------------------------*/


#include<stdio.h>



int main(void)
{
  const int dim=10;
  int num[dim],i,j;
  for(i=0;i<dim;i++)
  {
    printf("Dame el numero %d\n",i+1);
    scanf("%d",&num[i]);
  }
  for(j=0;j<dim;j++)
  {
    int incre=0;
    for(i=0;i<dim;i++)
    {
    if (j==num[i])
	    incre+=1;
    }
	printf("\n%d se repite %d veces\n",j,incre);
  }
  return 0;
}
