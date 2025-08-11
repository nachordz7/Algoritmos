/*Realizar un programa que almacene 5 valores en un vector y muestre el valor minimo y su posicion de memoria.
2.El promedio entre todos los valores.
3.Que porcentaje de los valores que es mayor a 10.
4. Calcular el maximo y su posicion de memoria.
5. Promedio de los valores menores o iguales a 10. 
6. Mostrar las posiciones de memoria de los valores menores al promedio.
*/
#include<stdio.h>
int i, vector[5], n=5, min, acum, cont, pos_min, max, pos_max, acum2, cont2, memoria;
int prom, prom2;
float porc;
main(){
	for(i=0; i<n; i++){
		printf("Ingrese el valor %d: ",i);
		scanf("%d",&vector[i]);	
		
		if(i==0 || vector[i] < min ){
			min = vector[i];
			pos_min = i;
		}
		
		acum= acum + vector[i]; 
		
		if(vector[i]>10){
			cont= cont + 1;
		}
		
		if(i==0 || vector[i] > max){
			max = vector[i];
			pos_max = i;
		}
		
		if(vector[i] <=10){
			acum2 = acum2+vector[i];
			if(acum2>0){
				cont2= cont2+1;
			}
		}
	}
	prom= acum/n;
	porc= (cont*100)/n;
	prom2= acum2/cont2;
	
	printf("\nValor minimo: %d\t Posicion de memoria: %d\n",min, pos_min);
	printf("El promedio de todos los valores: %d\n",prom);
	printf("Porcentaje de los valores mayores a 10: %f%%\n",porc);
	printf("Valor maximo: %d\t Posicion de memoria: %d\n",max,pos_max);
	printf("Promedio de los valores menores o iguales a 10: %d\n",prom2);
	printf("Posiciones de memoria de los valores menores al promedio:\n");
	for(i=0; i<n; i++){
	if(vector[i] <10){	
		printf("%d|",i);
	}
	}
}
