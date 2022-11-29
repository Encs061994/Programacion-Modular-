#include <stdio.h>
int main(){

int lado_menor,lado_Mayor,base_menor,base_Mayor,altura;float Area;float Perimetro; int selec;
	printf("Digita que deseas obtener:\n A)Area del trapecio\nB)Perimetro de un trapecio");
		scanf("%c",&selec);
		switch (selec)
		{
			//Esta opcion da al usuario el area del trapecio
		case 'A':
			printf("Digita la base Mayor: \n");
			scanf("%i",& base_Mayor);
			printf("Dgita la base_menor: \n");
			scanf("%i",& base_menor);
			printf("Dgita la altura: \n");
			scanf("%i",& altura);
			printf("Dgita el lado_Mayor: \n");
			scanf("%i",& lado_Mayor);
			printf("Dgita el lado_menor: \n");
			scanf("%i",& lado_menor);
			Area=((base_Mayor+base_menor*altura)/2);
			printf("El area del trapecio es: %f\n", Area);

			break;
			//Esta opcion da al usuario el perimetro del trapecio  
		case 'B':
			printf("Digita el base Mayor del trapecio: \n");
			scanf("%i",&base_Mayor);
			printf("Digita el base menor del trapecio: \n");
			scanf("%i",&base_menor);
			printf("Digita el lado Mayor del trapecio: \n");
			scanf("%i",&lado_Mayor);
			printf("Digita el lado menor del trapecio: \n");
			scanf("%i",&lado_menor);
			Perimetro=((base_Mayor+base_menor+lado_Mayor+lado_menor));
			printf("El perimetro es: %f\n", Perimetro);
			break;
			//La salida de la función
		case 'C':
			printf("Regresa pronto :)\n");
			break;
			//En caso de que no se de una opción valida, da este mensaje de error
		default:
			printf("\nLa opcion no es la correcta, vuelva a intentar\n");
			break;
		}
	while (selec!='C');
	
	return 0;

}