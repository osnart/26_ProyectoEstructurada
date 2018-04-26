/*----------------------------------------------------------------------------*/
/*Autor:Santos Zárate Edson Osnart                                            */
/*E-mail:Santosedson515@gmail.com                                             */
/*Fecha de creacion: 24/04/2018                                               */
/*Fecha de modificacion: 24/04/2018                                           */
/*Descripcion: convertir un  numero de binario a decimal                      */
/*----------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>



int main(void)
{
	int dim;
	int num[15],i,n;
	int sum=0;
	printf("DAME LA CANTIDAD DE DIGITOS");
	scanf("%d",&dim);

	for(i=0;i<dim;i++)
		{
			printf("Dame el número:\n");
      scanf("%d",&num[i]);
			if (num[i]=='\n')
			i=dim;
		}
	for(i=0;i<dim;i++)
		{
  	n=num[i]*pow(2,i);
		sum=sum+n;
		}
	printf("El número es :%d¸\n",sum);
	return 0;
}
