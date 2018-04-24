/*------------------------------------------------------------*/
/*Autor:Edson Osnart Santos Zárate                            */
/*E-mail:santosedson515@gmail.com                             */
/*Fecha de creación:21/04/2018                                */
/*Fecha de actualización:21/04/2018                           */
/*Descripción:Matrices cuadrada,columna, rectangular          */
/*------------------------------------------------------------*/



#include<stdio.h>



int main(void)
{
  const int fil=4,col=6,x=1,y=5;
  int num[fil][col],i,j,numero[fil][fil],nume[x][y];
  puts("***matriz columna***");
   for(i=0;i<x;i++)
  {
    for(j=0;j<y;j++)
    {
      printf("Dame un número para la posición(%d,%d)\n",i,j);
      scanf("%d",&nume[i][j]);
    }
  }
  for(i=0;i<x;i++)
  {
    for(j=0;j<y;j++)
    {
      printf("%d\n",nume[i][j]);
    }
  }
  puts("***Matriz cuadrada***");
for(i=0;i<fil;i++)
{
  for(j=0;j<fil;j++)
  {
    printf("Dame un número para la posición(%d,%d)\n",i,j);
    scanf("%d",&numero[i][j]);
  }
}
  for(i=0;i<fil;i++)
  {
    printf("\n\n");
      for(j=0;j<fil;j++)
      {
        printf("\t%d\t",numero[i][j]);
      }
  }
    printf("\n\n");


  puts("***Matriz rectangular***");
  for(int i=0;i<fil;i++)
  {
  for(int j=0;j<col;j++)
  {
   printf("Dame el numero en la posición (%d,%d)\n",i,j);
   scanf("%d",&num[i][j]);
  }
  }
  for(i=0;i<fil;i++)
  {
	  printf("\n\n");
  for(j=0;j<col;j++)
  {
    printf("\t%d\t",num[i][j]);
  }
  }

  return 0;
}
