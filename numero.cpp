/* Realizar un programa que determine si el numero es positivo o negativo
*/
#include<stdio.h>

int num;
main(){
	printf("Ingrese un numero: ");
	scanf("%d",&num);
	
	if(num>0){
		printf("Numero positivo");
	}
	else if(num<0){
		printf("Negativo");
	}
	else printf("Nulo");
}



