/*
Se registran las personas que usan el subte en tres estaciones a lo largo de 3 dias.
Mostrar:
1. Promedio de personas por estacion y en que estacion hubieron mas personas(en funcion al promedio).
2. Promedio de pasajeros por dia y cuantos dias usaron el servicio mas de 300 pasajeros. Porcentaje.
3. Minimo valor de la matriz, posicion de memoria y diagonal principal.
4. Por cada estacion mostrar que dia fue mas concurrida.
*/
#include<stdio.h>
int matriz[3][3], i, j, n=3;
int acum_est, max, est_max;
float prom_est;
main(){
	for(i=0;i<n;i++){
		acum_est = 0;
		printf("\n");
		for(j=0;j<n;j++){
			printf("Dia %d, Ingrese cantidad de pasajeros de la estacion %d: ",i,j);
			scanf("%d",&matriz[i][j]);
			
			acum_est = acum_est + matriz[i][j];	
		}
		prom_est = acum_est/n;
		printf("\nPromedio de personas de la estacion %d: %f\n",i,prom_est);
		
	}
	}
