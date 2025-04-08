// Realizar un programa para imprimir un ticket de un estacionamiento.
// Se leen el precio por hora y la cantidad de horas. Imprimir el total a pagar.
#include<stdio.h>
float precio_h, cant_h, total;

main()
{
printf("Ingrese la cantidad de horas: ");
scanf("%f",&cant_h);

printf("Ingrese el precio por hora: ");
scanf("%f",&precio_h);

total= cant_h * precio_h;	
printf("El total a pagar es de: %f",total);
}
