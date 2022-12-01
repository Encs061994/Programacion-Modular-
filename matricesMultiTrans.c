#include <stdio.h>
#include <stdlib.h>
#define S 3
#define T 3
//La funcion leer_matriz se utilizará en las funciones matriz_dos y matriz_tres
void leer_matriz(int A[S][T], int F, int C)
{
	//Al obtener los datos de entrada tanto las filas y columnas y la matriz se procede a pedir los datos de cada elemento de la matriz
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%i][%i]\n",i,j );
			scanf("%i",&A[i][j]);
		}
	}
}
//La funcion imprimir_matriz se utilizará en las funciones matriz_dos y matriz_tres
void imprimir_matriz(int A[S][T],int F,int C)
{
	//Al obtener los datos de entrada tanto las filas y columnas y la matriz se procede a Imprimir los datos de cada elemento de la matriz
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%i\t",A[i][j]);
		}
		printf("\n");
	}
}
//La funcion mltiplicas se utilizará en la funcion matriz_dos
void multiplicar(int A[S][T],int B[S][T],int Re[S][T],int ij,int jk,int ik)
{
	int i,j,k;
	//Limpiar matriz para que al momento de hacer la operación no tenga basura que pueda interferir
	for(i=0;i<ij;i++)
	{
		for (j = 0; j < jk; j++)
		{
			Re[i][j]=0;
		}
	}
	//Se utilizan 3 for ya que al multiplicar una funcion ij por una jk, la matriz debe de recorrer estos elementos 
	for(i=0;i<ij;i++)
	{
		for (j = 0; j<jk; j++)
		{
			for (k = 0; k < ik; k++)
				{
					Re[i][k]= Re[i][k]+A[i][j]*B[j][k];
				}	
		}
	}
}
//Se crea la funcion de matriz_dos que da la suma de dos matrices
int matrizdos(int x) 
{
	//Se declaran las variables y las matrices
	int F,C,P,i,j;
	int matrizuno[S][T],matrizdos[S][T];
	int matrizRe[S][T];
	//Se solicitan las filas y columnas de la primera matriz
	printf("Primer matriz\n");
	printf("Digita el numero de filas\n");
	scanf("%i",&F);
	printf("Digita el numero de las columnas\n");
	scanf("%i",&C);
	//Aqui se solicita que nos de la funcion "leer_matriz"
	leer_matriz(matrizuno,F,C);
	printf("Segunda matriz\n");
	printf("Para que la multiplicaciónse efectúe, las filas de la segunda matriz deben de ser igual a las columnas de la primera\n");
	printf("ingrese el numero de las columnas\n");
	//ya que para la multiplicación se efectue las columnas de la primera matriz deben de coincidir con las filas de la segunda matriz solo se pide las columnas de la segunda matriz
	scanf("%d",&P);
	//Se invoca a la funcion "leer_matriz"
	leer_matriz(matrizdos,C,P);
	//Se invoca a la funcion "multiplicar" para multiplicar las dos matrices
	multiplicar(matrizuno,matrizdos,matrizRe,F,C,P);
	printf("La matriz uno es:\n");
	//Se invoca a la funcion "imprimir_matriz"
	imprimir_matriz(matrizuno,F,C);
	printf("La matriz dos es: \n");
	//Se invoca a la funcion "imprimir_matriz"
	imprimir_matriz(matrizdos,C,P);
	printf("Matriz resultado\n");
	//Se invoca a la funcion "imprimir_matriz"
	imprimir_matriz(matrizRe,F,P);
	return 0;
}

//Se crea la funcion transpuesta para usarse en la funcion "matriz_tres" que tiene como datos de entrada dos matrices 
int transpuesta(int A[3][3],int B[3][3],int espacio)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for (j = 0; j < 3; j++)
		{
			//Se cambian los datos de las filas de la matriz A y se pasan a las columnas de la matriz B
			B[j][i]=A[i][j];
		}
	}
}

//Se crea la funcion de matriz_tres que crea la transpuesta de una matriz que ingresas
int matriz_tres(int x)
 {
 	//Se declaran las variables y las matrices
	int A[3][3],B[3][3],i,j;
	printf("Este programa da el resultado de una matriz transpuesta de 3x3\n");
	printf("Digita la matriz:\n");
	//se le pide a la funcion "leer_matriz"
    leer_matriz(A,3,3);
	//Se le pide a la funcion "transpuesta" para sacar la transpuesta de la matriz A
	transpuesta(A,B,3);
	printf("La matriz original es:\n");
	//Se digita la funcion "imprimir_matriz"
	imprimir_matriz(A,3,3);
	printf("La matriz transpuesta es:\n");
	//Se vulve a digitar la funcion "imprimir_matriz"
	imprimir_matriz(B,3,3);
	return 0;
}

void main()
{
	matrizdos(1);
	matriz_tres(1);
}
