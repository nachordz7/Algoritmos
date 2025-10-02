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
int diag;
float prom_est, prom;
main() {
	for(i=0; i<n; i++){
		printf("\n");
		acum_est = 0;
		for(j=0; j<n; j++){
			printf("Ingrese nota del estudiante %d de la prueba %d: ",i,j);
			scanf("%d",&notas[i][j]);
			
			acum_est += notas[i][j];	
			acum += notas[i][j];		
		}  
		prom_est = acum_est/n;
		printf("\nPromedio de nota del estudiante %d: %f\n",i,prom_est);
	}
	
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("%d |",notas[i][j]);
		}	
	}
	
	printf("\nPromedio por prueba:\n");
	for(j=0;j<n;j++) {
	acum = 0;
    for(i=0;i<n;i++) {
        acum += notas[i][j];  
    }
    prom= acum / n;
    printf("\nProm de la prueba %d: %f\n",j,prom);
	}
	
	printf("\nDiagonal principal:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
			diag = notas[i][j];
			printf("%d |",diag);
			}
		}
	}
	}
	
