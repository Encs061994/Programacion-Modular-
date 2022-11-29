#include<stdio.h>
int main()
 {
 	//se declaran las variabales nuevamente a utilizar
	float gradosC,gradosF,gradosK;	float conversionC,conversionF,conversionK;	int selec;
	do
	{
		//Se le solicita al usuario que elija la opción con numero, de lo contrario mandará mensaje de error
		printf("Digita  que deseas obtener:\n1)Celcius a Kelvin y Farenheit\n2)Kelvin a Celcius y Farenheit\n3)Farenheit a Celcius y kelvin\n4)Regresar al menu\n");
		scanf("%i",&selec);
		switch(selec)
		{
			//Esta opcion da la conversión de grados celcius a farenheit y a grados kelvin
		case 1:
			printf("Digita los grados \n");
			scanf("%f",&gradosC);
			conversionF=(gradosC*(1.8))+32;
			conversionK=gradosC+ 273.15;
			printf("Los grados en Farenheit son: %f\n", conversionF);
			printf("Los grados en Kelvin son: %f\n", conversionK);
			break;
			//Esta opcion da la conversión de grados farenheit a celcius y grados kelvin
		case 2:
			printf("Digita los grados \n");
			scanf("%f",&gradosF);
			conversionC=(gradosF-32)*(.555);
			conversionK=((.555)*(gradosF-32))+273.15;
			printf("Los grados en Kelvin son: %f\n", conversionK);
			printf("Los grados en Celcius son: %f\n", conversionC);
			break;
			//Esta opcion da la conversión de grados kelvin a farenheit y grados celcius
		case 3:
			printf("Digita los grados \n");
			scanf("%f",&gradosK);
			conversionC=gradosK-273.15;
			conversionF=((gradosK-273.15)*(1.8))+32;
			printf("Los grados en Celcius son: %f\n", conversionC);
			printf("Los grados en Farenheit son: %f\n", conversionF);
			break;
			//se presenta el mensaje de salida 
		case 4:
			printf("Hasta Pronto :)\n");
			break;
			//Mensaje que manda en caso de error
		default:
			printf("\n La opcion no es la correcta, vuelva a intentar\n");
			break;
		}

	}while(selec!=4);
	return 0;
}
