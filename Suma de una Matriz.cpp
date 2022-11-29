#include <stdio.h>
#include<math.h>
int main()
#define S 3
#define T 3
{
	//Se ponen las variables a utilizar así como los arreglos bidimensionales
	int F,C,i,j;
	int matrizuno[S][T],matrizdos[S][T];
	int matrizresultado[S][T];
	//se digitan el número de Filas y de Columnas
	printf("Digita el numero de filas\n");
	scanf("%i",&F);
	printf("Digita el numero de las columnas\n");
	scanf("%i",&C);
	//Se solicita que se ingresen los datos de la primer matriz
	printf("Primer matriz\n");
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%i][%i]\n",i,j );
			scanf("%d",&matrizuno[i][j]);
			//fflush(stdin);
		}
	}
	//Se solicita que se ingresen los datos de la segunda matriz
	printf("Segunda matriz\n");
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%i][%i]\n",i,j );
			scanf("%d",&matrizdos[i][j]);
			//fflush(stdin);
		}
	}
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			matrizresultado[i][j]=matrizuno[i][j]+matrizdos[i][j];
		}
	}
	//Aqui te dara el resusltado de la suma
	printf("Matriz resultado\n");
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%i\n",matrizresultado[i][j]);
		}
		printf("\n");
	}


	return 0;
}