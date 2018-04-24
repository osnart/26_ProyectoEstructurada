/*------------------------------------------------------------*/
/*Autor:Edson Osnart Santos Zárate                            */
/*E-mail:santosedson515@gmail.com                             */
/*Fecha de creación:21/04/2018                                */
/*Fecha de actualización:21/04/2018                           */
/*Descripción:converir de mayusculas a minusculas y viceversa */
/*------------------------------------------------------------*/
#include<stdio.h>
const int tamanio=10;/*definir una constante*/

int main(void)
{

  char c;
  /* leer caracter por caracter hasta que encuentra un salto de línea*/
  char array[tamanio],arra[tamanio];
  int i,index=0;
printf("Escribe una palabra en minusculas\n");
while((c = getchar()) !='\n')   /*Leer caracter por caracter*/
{
    if(c>=97 && c<=122)/*Validando únicamente caracteres:letras minúsculas*/
    {
      c=c-32;
       array[index]=c;
       index++;
     }
}
  printf("\n");
for (i=0;i<tamanio;i++)
{
    printf("%c",array[i]);
}
printf("\n");

printf("Escribe una palabra en mayúsculas\n");
while((c = getchar()) !='\n')   /*Leer caracter por caracter*/
{
    if(c>=65 && c<=90)/*Validando únicamente caracteres:letras mayusculas*/
    {
      c=c+32;
       arra[index]=c;
       index++;
     }
}
  printf("\n\n");
for (i=0;i<tamanio;i++)
{
    printf("%c",arra[i]);
}
printf("\n");

  return 0;
}
