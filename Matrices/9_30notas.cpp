/*
Se almacena la nota de 3 estudiantes en 3 pruebas. 
Mostrar:
1.Promedio de cada estudiante 
2.Promedio por prueba(entre todos los estudiantes)
3.Diagonal principal
4.Minimo valor de la matriz y su posicion de memoria
*/
#include<stdio.h>
int notas[3][3], i, j, n = 3;
int acum_est, acum;
float prom_est, prom;
main() {
	for(i=0; i<n; i++){
		printf("\n");
		for(j=0; j<n; j++){
			printf("Ingrese nota del estudiante %d de la prueba %d: ",i,j);
			scanf("%d",&notas[i][j]);
						
			acum_est = acum_est + notas[i][j];
		}
		
	}
	prom_est = acum_est/n;
	
	
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("%d |",notas[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		
		printf("\nPromedio de nota del estudiante %d: %f\n",i,prom_est);
	}
	}
