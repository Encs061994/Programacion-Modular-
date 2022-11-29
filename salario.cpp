#include <stdio.h>
int main()
{
	//Aqui se presenta un calculo de sun salario 
	// variables a utilizar en esta ocasion 
	int horas; float salario,salarioDia,salarioIva,salarioIva2,salarioMensual,salarioExt;
	//Se Digita el sueldo y horas laboradas
	printf("Digita tu sueldo por hora:");
	scanf("%f",&salario);
	printf("\n Digita tus horas laboradas al dia");
	scanf("%i",&horas);
	//se va a arrojar el calculo del sueldo diario
	salarioDia=salario*horas;
	printf("\n Tu sueldo diario es: %f",salarioDia);
	//se va a arrojar el calculo del sueldo con el 16%
	salarioIva= salarioDia*1.16;
	printf("\n Tu Sueldo diario con el 16 de IVA es: %f",salarioIva);
	//Aqui se va a arrojar el calculo del sueldo sin el 12%
	salarioIva2=salarioIva*.88;
	printf("\n Tu salario diario menos el 12 de IVA es: %f",salarioIva2);
	//Aqui el sueldo se realizara por 20 dias
	salarioMensual=salarioIva2*20;
	printf("\n Tu salario mensual es: %f", salarioMensual);
	//si el sueldo del trabjador es menor a 10000 se le suma el 5%
	if(salarioMensual<10000)
	{
		salarioExt=salarioMensual*1.05;
		printf("\n Te ganaste un bono del 5 por ciento y tu sueldo total es de: %f",salarioExt);
	}else
		//si no hubo ningun bono, solo aparecera el sueldo
		printf("\n Tu sueldo es");
	return 0;
}
