#include<stdio.h>
const int imp=20;

float horas, precio, bruto, neto;
main()
{
	printf("Ingrese las horas trabajadas: ");
	scanf("%f",&horas);
	
	printf("Ingrese el sueldo por hora: ");
	scanf("%f",&precio);
	
	bruto= (horas * precio);
	neto = (bruto * imp) / 100;
	neto = bruto - neto;  
	printf("El salario bruto es de: %f \n",bruto);
	printf("El salario neto es de: %f ",neto);
	}
