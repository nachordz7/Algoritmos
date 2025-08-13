#include<stdio.h>
int i, n=10, vector[10], cont, acum, cont2;
int prom;
float porc;
main(){
	for(i=0; i<n; i++){
		printf("Pone la edad %d mastro: ",i);
		scanf("%d",&vector[i]);
		
		if(vector[i]<18){
			cont= cont+1;
		}
		if(vector[i]>=18){
			cont2= cont2+1;
			if(cont2>0){
				acum= acum +vector[i];
			}
		}
	}
	porc= (cont*100)/n;
	prom= acum/cont2;
	printf("\nPorcentaje de menores de edad: %f%%\n",porc);		//1
	printf("Promedio de los mayores de edad: %d\n",prom);		//2
	printf("Posiciones de memoria de los mayores a 55:\n");		//3
	for(i=0; i<n; i++){
		if(vector[i]>55){
			printf("%d| ",i);
		}
	}
	printf("\nEdades mayores al promedio:\n");
	for(i=0; i<n; i++){
		if(vector[i]>prom){
			printf("%d| ",vector[i]);
		}
	}
}
