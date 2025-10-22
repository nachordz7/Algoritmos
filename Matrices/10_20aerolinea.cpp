/*
Un edificio cuenta con 4 pisos con 4 departamentos cada uno. Se registra el consumo electrico de cada departamento y se desa saber:
1.Promedio de consumo por piso y que piso consumio mas.
2.Total de consumo por numero de departamento. Mostrar a que piso pertenece el departamento que gasto menos(por numero de departamento).
3.Maximo valor de la matriz, sus posiciones de memoria y traza
4.Cuantos pisos consumieron mas de 4k. Expresar en porcentaje.
*/
#include<stdio.h>
int matriz[4][4], n=4, i, j;
int acum;
int max, piso_max;
int acum_depa, min, depa_min, piso_min;
float prom;
main(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Ingrese consumo electrico del piso %d, departamento %d: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	
	//1. 
	for(i=0;i<n;i++){
		acum=0;
		for(j=0;j<n;j++){
			acum += matriz[i][j];
			
			if( i == 0 && j == 0 || matriz[i][j] > max){
				max = matriz[i][j];
				piso_max = i;
			} 
		}
		prom = acum/n;
		printf("Promedio de consumo del piso %d: %f\n",i,prom);	
	}
	printf("Piso que consumio mas: %d\n",piso_max);
	
	//2.
	for(j=0;j<n;j++){
		acum_depa=0;
		for(i=0;i<n;i++){
			acum_depa += matriz[i][j];
			
			if(i == 0 && j == 0  || matriz[i][j] < min){
				min = matriz[i][j];
				depa_min = j;
				piso_min = i;
			}
		}
		printf("Total de consumo del departamento %d: %d\n",j,acum_depa);
	}
	printf("Departamento que gasto menos: %d \nPiso: %d",depa_min,piso_min);
}
