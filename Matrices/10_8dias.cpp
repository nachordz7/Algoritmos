/*
Se almacenan los gastos de una persona, durante 5 dias en 5 semanas 
Mostrar:
1. Total por semana.
2. Promedio por dia.
3. Que dia se gasto mas en promedio.
4. Por semana que dia se gasto mas.
5. Que semana se gasto menos.
6. Diagonal principal.
*/
#include<stdio.h>
int i, j,n=5, gasto[5][5];
int acum;
int acum_dia, dia_max, max;
float prom_dia;
int semana_max, semana_min;

int diag;
main(){
	//1.
	for(i=0; i<n; i++){
		printf("\n");
		acum = 0;
		
		for(j=0; j<n; j++){
			printf("Ingrese gasto de la semana %d, dia %d: ",i,j);
			scanf("%d",&gasto[i][j]);
			
			acum = acum + gasto[i][j];
		}
		printf("\nGasto total de la semana %d: %d\n",i,acum);
		
	}
	
	//2. 3.
	for(j=0;j<n;j++){
		acum_dia = 0;
		for(i=0;i<n;i++){
		acum_dia += gasto[i][j];
		}
		prom_dia = acum_dia/n;
		printf("Gasto promedio por dia %d: %f\n",j,prom_dia);
			
		if(j==0 || prom_dia > max){
			max = prom_dia;
			dia_max= j;
		}
	}
	printf("\nDia que se gasto mas en promedio: %d\n",dia_max);
	
	//4 Por semana que dia se gasto mas
 	
 	
 	//5 Que semana se gasto menos
 	
 	
 	//6.
	printf("Diagonal principal:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				diag = gasto[i][j];
				printf("%d |",diag);
			}
		}
	}
}

