/*----------------------------------------------------------------------------*/
/*Autor:Santos Zárate Edson Osnart                                            */
/*E-mail:Santosedson515@gmail.com                                             */
/*Fecha de creacion: 24/04/2018                                               */
/*Fecha de modificacion: 24/04/2018                                           */
/*Descripcion: convertir un  numero de decimal a binario                      */
/*----------------------------------------------------------------------------*/




#include <stdio.h>



int main (void)
{
		int num,divi,mod;

			printf("Dame un numero\n");
			scanf("%d", &num);
			printf("El numero lo escribre alreves\n");
			divi=num/2;
			while(divi>1)
		{
			mod=num%2;
			printf("%d", mod);
			divi=num/2;
			num=divi;
		}
		printf("%d\n", divi);
	return 0;
}
