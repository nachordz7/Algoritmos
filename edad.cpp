//realizar un programa que leyendo la edad del usuario determine si es mayor o menor de edad.
#include<stdio.h>
int edad;
main()
{
	printf("Ingrese su edad: ");
	scanf("%d",&edad);
	
	if(edad>=18){
		printf("Es mayor de edad",edad);
	}
	else printf("No es mayor de edad",edad);
}
