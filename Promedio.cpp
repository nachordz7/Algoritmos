/*1.Realizar un programa que calcule el promedio de 3 notas.*/
#include <stdio.h>

float prom;
float nota1, nota2, nota3;
main()
{
	printf("Ingrese nota 1: ");
	scanf("%f",&nota1);
	
	printf("Ingrese nota 2: ");
	scanf("%f",&nota2);
	
	printf("Ingrese nota 3: ");
	scanf("%f",&nota3);

	prom = (nota1 + nota2 + nota3) / 3;		
	
	printf("El promedio es: %f",prom);
}
