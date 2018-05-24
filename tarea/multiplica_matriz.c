#include<stdio.h>
#include<stdbool.h>

/*Valores de una matriz estática*/
#define COL 10
#define ROW 10
/*Prototipo de función*/
bool validarMultiplicacionMatriz(int colA,int filaB);
void leerDatosMatriz(int matriz[ROW][COL],int fila,int col);
void imprimirMatriz(int matriz[ROW][COL],int fila,int col);

void multiplicaMatriz(int matrizA[ROW][COL],int matrizB[ROW][COL],int matrizResultado[ROW][COL],int colA,int filaB);

/*Declaración de la función principal*/
int main (void)
{
  int filaA,colA;
  int filaB,colB;

  int matrizA[ROW][COL];
  int matrizB[ROW][COL];
  int matrizResultado[ROW][COL];

  puts("Introduce la fila de la matriz A:");
  scanf("%d",&filaA);

  puts("Introduce la fila de la columna A:");
  scanf("%d",&colA);

  puts("Introduce la fila de la matriz B:");
  scanf("%d",&filaB);

  puts("Introduce la fila de la columna B:");
  scanf("%d",&colB);

  if(validarMultiplicacionMatriz(colA,filaB))
  {
    printf("\nSi se puede realizar la operación\n");
    /*Realizar la operación*/
    leerDatosMatriz(matrizA,filaA,colA);
    leerDatosMatriz(matrizB,filaB,colB);
    printf("\nMatriz A\n" );
    imprimirMatriz(matrizA,filaA,colA);
    printf("\nMatriz B\n" );
    imprimirMatriz(matrizB,filaB,colB);
    //sumarMatriz(matrizA, matrizB, matrizResultado, filaA, colA);
    printf("\n el resultado de la multiplicación es:\n");
    imprimirMatriz(matrizResultado,colA,filaB);

  }else
  {
    printf("\nNo se puede realizar la multiplicacion de matrices\n");
  }

  return 0;
}
/*Cuerpo de la funcion*/
void multiplicaMatriz(int matrizA[ROW][COL],int matrizB[ROW][COL],int matrizResultado[ROW][COL],int colA,int filaB)
{
  for(int i=0;i<filaB;i++)
    {
      for(int j=0;j<colA;j++)
      {
        int suma=0 ;
        for(int k=0;k<filaB;k++)
        {
          suma=suma +matrizA[i][k]* matrizB[k][i];
        }
        matrizResultado[i][j]=suma;
      }
    }

}

/*Cuerpo de la función*/
bool validarMultiplicacionMatriz(int colA,int filaB)
{
  if(colA==filaB)
  {
    return true;
  }
  return false;/* Se debe de poner tambien para cuando no se cumpĺe*/
}
/*Cuerpo de la función*/
void leerDatosMatriz(int matriz[ROW][COL],int fila,int col)
{
  printf("\n\n");
  for(int i=0;i<fila;i++)
    {
      for(int j=0;j<col;j++)
      {
        printf("Introduce el elemento [%d][%d]= ",i,j);
        scanf("%d",&matriz[i][j]);
      }
    }

}
/*Cuerpo de la función*/
void imprimirMatriz(int matriz[ROW][COL],int fila,int col)
{
  for(int i=0;i<fila;i++)
    {
      printf("|");
      for(int j=0;j<col;j++)
      {
        printf(" %d ", matriz[i][j]);
      }
      printf("|\n");
    }


}
