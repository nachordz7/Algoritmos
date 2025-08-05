/*
Se leen 4 notas de un alumno mostrar:
1. Porcentaje de aprobadas.
2. Nota minima y que numero de nota fue.
3. Promedios entre las notas desaprobadas.
*/
#include<stdio.h>
int i, n=4;
int nota, cont, min, acum, desap;
float porc, prom;

main(){
	for(i=0; i<n; i++){
	printf("\nIngrese nota %d: ",i);
	scanf("%d",&nota);
	
	if(nota>=6){
		cont= cont+1;
	}
	
	if(i==0 || nota<min){
		min = nota;
	
	}
	
	if(nota<6){
		acum= acum+nota;
		if(acum>0){
			desap= desap+1;
		}
	}
	}
	porc=(cont*100)/n;
	prom= acum/desap;
	
	printf("\nPorcentaje de notas aprobadas: %f%%\n",porc);
	printf("Nota minima y numero de nota: %d\n",min);
	printf("Promedio entre las notas desaprobadas: %f",prom);
}

