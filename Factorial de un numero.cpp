#include<stdio.h> 
int main()
{
	//Se crean las variables a emplearse en las funciones
	int NumFac; int ReFac=1;
	int i;
	printf("Digita el numero para sacar el factorial\n");
	scanf("%i",&NumFac);
	//Si el numero ingresado es 0, el factorial es 1
	if(NumFac==0)
	{
		printf("\n El factorial es 1");
	}else if(NumFac<0)
		{
			//Si el numero ingresado es menor a 0, Sale este mensaje de error y el programa termina
			printf("\n Este programa no da el factorial de numeros negativos\n");
		}else
		{
			for ( i = 1; i <= NumFac; i++)
			{
				ReFac=ReFac*i;
			}
			printf("\n  El resultado del factorial solicitado es de %i es: %i\n",NumFac,ReFac );
		}
	
	return 0;
}