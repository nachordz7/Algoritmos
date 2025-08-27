/*
Se almacenan las toneladas de frutas que se exportan a largo de 5 años cada posicion de memoria hace referencia al año.Indicar:
1. Que años se exporto mas que el promedio.
2. Cuantos años las toneladas superaron los 75k. Expresar en porcentaje
3. Promedio entre los años en donde la exportacion supero las 120k toneladas.
4. Que porcentaje representa cada año en relacion al total exportado.
5. Año de exportacion minima entre los que superaron las 75k toneladas.  
*/
#include<stdio.h>
int i, n=5, t[5];
int acum, prom, cont;
int acum2, cont2, prom2, min, anio_min;
float porc, porc2;
main(){
	for(i=0;i<n;i++){
		printf("Ingrese toneladas del anio %d: ",i);
		scanf("%d",&t[i]);
		
		acum= acum+t[i];
		if(t[i]>75000){
			cont++;
			if(i==0 || t[i]<min){
				min= t[i];
				anio_min= i;
			}
		}
		if(t[i]>120000){
			cont2++;
			acum2= acum2+t[i];
		}
	}
	prom= acum/n;
	porc= (cont*100)/n;
	prom2= acum2/cont2;
	printf("\nAnios que se exporto mas que el promedio:");
	for(i=0;i<n;i++){
		if(t[i]>prom){
			printf(" %d| ",i);
		}
	}
	printf("\nPorcentaje de anios que superaron las 75 mil toneladas: %f%%\n",porc);
	printf("Promedio entre los anios en donde la exportacion supero las 120k toneladas: %d\n",prom2);
	/*for(i=0;i<n;i++){
		porc2= (t[i]*100)/acum;
		printf("Anio: %d  Porcentaje: %f%%| ",i,porc2);
	}*/
	printf("\nAnio de exportacion minima entre los que superaron las 75k toneladas: %d",anio_min);
}
