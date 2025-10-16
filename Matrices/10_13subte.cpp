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
int acum_dia, cont_dia;
int min, pos_mini, pos_minj, posc, diag;
int dia_max, conc, acum;
float prom_est, prom_dia, porc_dia;
main(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Ingrese cantidad de pasajeros de la estacion %d, Dia %d : ",i,j);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	
//1.
	for(i=0;i<n;i++){
		acum_est=0;
		for(j=0;j<n;j++){
			acum_est = acum_est + matriz[i][j];	
		}
		prom_est = acum_est/n;
		printf("Promedio de personas de la estacion %d: %f\n",i,prom_est);
		
		if(i==0 || prom_est > max){
			max = prom_est;
			est_max = i;
		}
	}
	printf("\nEstacion con mas pasajeros: %d\n",est_max);
	
//2.
	for(j=0;j<n;j++){
		acum_dia=0;
		for(i=0;i<n;i++){
			acum_dia = acum_dia + matriz[i][j];
		}
		prom_dia = acum_dia/n;
		printf("Promedio de pasajeros del dia %d: %f\n",j,prom_dia);
		
		if(acum_dia >300){
			cont_dia++;
		}
		}
		porc_dia = (cont_dia*100)/n;
		printf("\nPorcentaje de dias que usaron el servicio mas de 300 personas: %f%%\n",porc_dia);
	
//3.
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0 && j==0 || matriz[i][j] < min){
				min = matriz[i][j];
				pos_mini = i;
				pos_minj = j;
			}
		}
		
	}
	printf("Minimo valor de la matriz: %d\n",min);
	printf("Posicion de memoria: %d %d\n",pos_mini, pos_minj);
	printf("Diagonal principal:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				diag = matriz[i][j];
			}
		}
		printf("%d |",diag);
	}
	
//4.	
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==0 || matriz[i][j] > conc){
				conc = matriz[i][j];
				dia_max = j;
			}
		}
		printf("Estacion: %d, dia mas concurrido: %d\n",i,dia_max);
	}
	}
	
