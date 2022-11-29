#include <stdio.h>
int main(){

	//aqui tenemos las variables a ocupar 
	int ladoA,ladoB;float Area;float Perimetro;int selec;
	do
	{
		//Aqui vas a poner la funcion que solicites dependiendo el caso y te dara el valor 
		printf("Digita que deseas obtener:\n1)Area del Cuadrado\n2)Perimetro del cuadrado\n3)Area de un rectangulo\n4)Perimetro del rectangulo");
		scanf("%i",&selec);
		switch (selec)
		{
			//Este caso da el area del cuadrado
		case 1:
			printf("Digita el lado del cuadrado \n");
			scanf("%i",&ladoA);
			Area=ladoA*ladoA;
			printf("El resultado del Area es: %f\n", Area);
			break;
			//Este caso da el perimetro del cuadrado
		case 2:
			printf("Digite el lado del cuadrado \n");
			scanf("%i",&ladoA);
			Perimetro=ladoA*4;
			printf("El resultado del perimetro es: %f\n", Perimetro);
			break;
			//Este caso da el area de un rectángulo
		case 3:
			printf("Digita el lado menor del rectangulo \n");
			scanf("%i",&ladoA);
			printf("Digita el lado mayor del rectangulo \n");
			scanf("%i",&ladoB);
			Area=ladoA*ladoB;
			printf("El resultado del Area es: %f\n",Area);
			break;
			//Este caso da el perimetro de un rectángulo
		case 4:
			printf("Digita el lado menor del rectangulo\n");
			scanf("%i",&ladoA);
			printf("Digita el lado mayor del rectangulo \n");
			scanf("%i",&ladoB);
			Perimetro=((ladoA*2)+(ladoB*2));
			printf("El resultado del perimetro es: %f\n",Perimetro);
			break;
			//Caso de salida
		case 5:
			printf("Hasta pronto :)\n");
			break;
			//Mensaje de error
		default:
			printf("\n Digita nuevamente, la opcion no es la correcta\n");
			break;
		}
	}while(selec!=5);
	return 0;}

	