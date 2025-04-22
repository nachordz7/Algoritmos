/*Realizar un programa que lea 2 numeros e indique si el primero es mayor, si el segundo es mayor o si son iguales
*/
#include<stdio.h>
int num1, num2;
main(){
	printf("Ingrese el primer numero: ");
	scanf("%d",&num1);
	
	printf("Ingrese el segundo numero: ");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("El primero es mayor");
	}
	else if(num2>num1){
		printf("El segundo es mayor");
	}
	else printf("Son iguales");
}
