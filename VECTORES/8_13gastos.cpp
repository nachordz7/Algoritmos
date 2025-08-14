/*
Realizar un programa que almacene en un vector los gastos de una persona a lo largo de una semana.
Imprimir:
1) Total gastado.
2) Promedio de gasto entre los 7 dias.
3) Dias en los que el gasto fue mayor al promedio.
4) Porcentaje de los dias en los que los gastos fueron mayores a $5000.
5) Promedio entre los dias en los que los gastos fueron de $5000 o menores
   La posicion de memoria corresponde al dia.
*/
#include<stdio.h>
int i, n=7, gastos[7];
int acum, prom, cont;
int prom2, cont2, acum2;
float porc;

main(){
	for(i=0; i<n; i++){
		printf("Ingrese los gastos del dia %d: ",i);
		scanf("%d",&gastos[i]);
		
		acum= acum + gastos[i];
		
		if(gastos[i]>5000){
			cont= cont+1;
		}
		
		if(gastos[i]<=5000){
			cont2= cont2+1;
			if(cont2>0){
				acum2= acum2+ gastos[i];
			}
		}
	}
	prom= acum/n;
	porc= (cont*100)/n;
	prom2= acum2/cont2;
	printf("\nTotal gastado: $%d\n",acum);
	printf("Promedio de los gastos entre los 7 dias: %d\n",prom);
	printf("Dias en los que el gasto fue mayor al promedio:\n");
	for(i=0; i<n; i++){
		if(gastos[i]>prom){
			printf("%d| ",i);
		}
	}
	printf("\nPorcentaje de los dias en los que los gastos fueron mayores a $5000: %f%%\n",porc);
	printf("Promedio entre los dias en los que los gastos fueron de $5000 o menores: $%d",prom2);
}

