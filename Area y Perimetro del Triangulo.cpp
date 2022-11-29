#include<stdio.h>
int main(){

	//Declaramos las variables a utilizar tanto para datos que se ocupan como para los resultados
	int ladoA,ladoB,ladoC;int altura; float Area;float Perimetro;
	//Declaramos la variable que nos va a dar la opcion para utilizar el Switch-case y el Do-while
	char selec;
	//ponemos el Do-while 
	do
	{
	//Se  solicita que se digite la opción para lo que se desea saber y que se ponga la opcion en letra mayuscula porque si no te manda error
		printf("Digita que necesitas obtener:\n A)Area del triangulo\n B)Perimetro del triangulo\n");
		scanf("%c",&selec);

		switch (selec)
		{
			//con este case nos va arrojar el area del triangulo
		case 'A':
			printf("Digita la base del triangulo: \n");
			scanf("%i",&ladoA);
			printf("Digita la altura del triangulo: \n");
			scanf("%i",&altura);
			Area=((ladoA*altura)/2);
			printf("El resultado es: %f\n", Area);

			break;
			//Aqui este case nos dara el perimetro del triangulo digitando lo que pide
		case 'B':
			printf("Digite el lado A del triangulo: \n");
			scanf("%i",&ladoA);
			printf("Digite el lado B del triangulo: \n");
			scanf("%i",&ladoB);
			printf("Digite el lado C del triangulo: \n");
			scanf("%i",&ladoC);
			Perimetro=ladoA+ladoB+ladoC;
			printf("El resultado es: %f\n", Perimetro);
			break;
			//Nos muestra la salida de la funcion 
		case 'C':
			printf("Hasta la proxima  :)\n");
			break;
			//En caso de que no se de una opción valida, da este mensaje de error
		default:
			printf("\n La opcion no es la correcta, vuelva a intentar\n");
			break;
		}
	}while (selec!='C');
	return 0;
}
