/*
Realizar un programa que procese 4 notas de un alumno y muestre:
1. Porcentaje de aprobadas.
2. Promedio entre las desaprobadas.
3. Nota maxima y que numero de nota fue.
4. Nota minima entre las aprobadas.
*/
#include<stdio.h>
int i, n=4, nota[4];
int cont, acum, cont_desp, prom, max, num_max, min, num_min;
float porc;
main(){
	for(i=0; i<n; i++){
		printf("Ingrese nota %d: ",i);
		scanf("%d",&nota[i]);
		
		if(nota[i]>5){
			cont++;
		}
		if(nota[i]<6){
			acum= acum+nota[i];
			cont_desp++;
			if(min==0 || nota[i]<min){
				min= nota[i];
			}
		}
		if(i==0 || nota[i]>max){
			max= nota[i];
			num_max = i;
		}
	}
	porc= (cont*100)/n;
	prom= acum/cont_desp;
	
	printf("\nPorcentaje de aprobadas: %f%%\n",porc);
	printf("Promedio entre las desaprobadas: %d\n",prom);
	printf("Nota maxima: %d\tNumero de nota: %d\n",max,num_max);
	printf("Nota minima entre los desaprobados: %d\n",min);
}
