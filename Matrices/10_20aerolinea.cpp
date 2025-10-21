/*
Una aerolinea registra las personas que viajan a 3 destinos durante 3 dias. Mostrar:
1. total de personas por destino y que destino tuvo menos visitantes. 
2. Promedio de pasajeros por dia y cuantos dias volaron mas de 500 personas. (expresar en porcentaje). 
3. Maximo valor de la matriz, posicion de la memoria y traza. 
4. En cada dia mostrar que destino fue menos concurrido. 
*/
#include <stdio.h>
int pasa[3][3], i, j, N=3, acum=0;
int max, pos_i, pos_j, traza, min, dia_min, minimo, desti_min;
float prom;
main(){
	//CARGA
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("Ingrese pasajeros al destino %d en el dia %d: ", i,j);
			scanf("%d", &pasa[i][j]);
		}
		printf("\n");
	}
	// 1.personas por destino (filas)
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			acum=acum+pasa[i][j];
			
			if((j==0)|| pasa[i][j]<minimo ){
				minimo=pasa[i][j];
				desti_min=j;
			}
		}
		printf("Total de personas del destino %d es %d \n", i, acum);
		acum=0;	
	}
	printf("Destino con menos visitantes: %d\n",desti_min);
	
    // 2.promedio por dia (columnas)
	for(j=0; j<N; j++){
		for(i=0; i<N; i++){
			acum=acum+pasa[i][j];
		}
		prom=acum/N;
		printf("El promedio de personas del dia %d es %f \n", j, prom);
		acum=0;
		
	}
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if( (i==0 && j==0)|| pasa[i][j]>max ){
				max=pasa[i][j];
				pos_i=i;
				pos_j=j;
			}
			if(i==j){
				traza=traza+pasa[i][j];
			}
		}		
	}
	printf("El maximo es y se encuenta en %d i= %d j= %d \n", max, pos_i, pos_j);
	printf("La traza es %d\n", traza);
	
	for(j=0; j<N; j++){
		for(i=0; i<N; i++){
			if((i==0)|| pasa[i][j]<min ){
				min=pasa[i][j];
				dia_min=i;
			}
		}		
		printf("El dia %d hubo menos pasajeros\n",dia_min);
	
	}
	
}
