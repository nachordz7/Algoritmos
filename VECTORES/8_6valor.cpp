/*Realizar un programa que almacene 5 valores en un vector y muestre el valor minimo y su posicion de memoria.
2.El promedio entre todos los valores.
3.Que porcentaje de los valores que es mayor a 10.
*/
#include<stdio.h>
int i, vector[5], n=5, min, acum, cont, pos;
float prom, porc;
main(){
	for(i=0; i<n; i++){
		printf("Ingrese el valor %d: ",i);
		scanf("%d",&vector[i]);	
		
		if(i==0 || vector[i] < min ){
			min = vector[i];
			pos = i;
		}
		
		acum= acum + vector[i]; 
		
		if(vector[i]>10){
			cont= cont + 1;
		}
	}
	prom= acum/n;
	porc= (cont*100)/n;
	
	printf("\nValor minimo: %d\t Posicion de memoria: %d\n",min, pos);
	printf("El promedio de todos los valores: %f\n",prom);
	printf("Porcentaje de los valores mayores a 10: %f",porc);
}

