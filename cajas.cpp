/*Realizar un programa que permita leidos el ancho y el largo de un ambiente, 
calcular cuantas cajas de un revestimiento se deberia comprar para cubrir esa superficie.
La capacidad de las cajas es un dato de entrada.
Considerar un extra del 10% como margen de error.
*/
#include<stdio.h>
float ancho, largo, sup, cajas,extra;


main()
{
	printf("Ingrese el ancho de un ambiente: ");
	scanf("%f",&ancho);
	
	printf("Ingrese el largo de un ambiente: ");
	scanf("%f",&largo);

	printf("Ingrese la capacidad de las cajas: ");
	scanf("%f",&cajas);
	
	sup= ancho * largo;
	
	extra= (su/cajas) * 0.1;
	printf("Se deben comprar %f cajas",extra);
	
}
