/* Realizar un programa que lea 10 edades y muestre el promedio entre todas las edades, el porcentaje de menores de edad y la edad maxima 
*/
#include<stdio.h>
int i, n=10, edad, cont=0, acum;
int i, n=10, edad, cont=0, acum, ;
float prom, porc;

main(){
	for(i=0; i<n ; i++){
	printf("Ingrese edad %d: ",i);
	scanf("%d2",&edad);	
	acum= acum+ edad;
	if (edad<18) {
		cont = cont +1;
		
	}
	}
	porc = (cont*100)/n ;
	prom = acum/n;
	printf("El promedio es de %f \n",prom);
	printf("El porcentaje de menores de edad es de: %f \n",porc);
	//printf("La edad maxima es: %d",max);
}
