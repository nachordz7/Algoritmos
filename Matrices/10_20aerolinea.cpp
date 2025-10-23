/*
Una aerolinea registra a las personas que viajan a 3 destinos durante 3 dias. Mostrar:
1. total de personas por destino y que destino tuvo menos visitantes. 
2. Promedio de pasajeros por dia y cuantos dias volaron mas de 500 personas. (expresar en porcentaje). 
3. Maximo valor de la matriz, posicion de la memoria y traza. 
4. En cada dia mostrar que destino fue menos concurrido. 
*/
#include <stdio.h>
int matriz[3][3], i, j, n=3;
int acum, dest_min, min;
int cont;
int max, posi, posj, traza;
int destino_min, minimo;
float prom, porc;
main(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Ingrese cantidad de pasajeros del destino %d, dia %d: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	
	//1.
	for(i=0;i<n;i++){
		acum=0;
		for(j=0;j<n;j++){
			acum += matriz[i][j];
			if(i==0 && j==0 || matriz[i][j] < min){
				min=matriz[i][j];
				dest_min = i;
			}
		}
		printf("Total de pasajeros del destino %d: %d\n",i,acum);
	}
	printf("Destino que tuvo menos visitantes: %d\n",dest_min);
	
	//2.
	for(j=0;j<n;j++){
		acum=0;
		for(i=0;i<n;i++){
			acum += matriz[i][j];
		}
		prom = acum/n;
		printf("Promedio de pasajeros del dia %d: %f\n",j,prom);
		
		if(acum > 500){
			cont++;
		}
	}
	porc= (cont*100)/n;
	printf("Porcentaje de dias que volaron mas de 500 personas: %f%%\n",porc);
	
	//3.
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0 && j==0 || matriz[i][j] > max){
				max=matriz[i][j];
				posi = i;
				posj = j;
			}
			if(i==j){
				traza+=matriz[i][j];
			}
		}
	}
	printf("Maximo valor de la matriz: %d\n",max);
	printf("Posicion de i: %d, Posicion de j: %d\n",posi,posj);
	printf("Traza: %d\n",traza);
	
	//4.
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(i==0 && j==0 || matriz[i][j] < minimo){
				minimo = matriz[i][j];
				destino_min = i;
			}
		}
		printf("Dia %d, destino menos concurrido: %d\n",j,destino_min);
	}
	
	//matriz
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("%d |",matriz[i][j]);
		}
	}
}

/*
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		}
	}
*/
