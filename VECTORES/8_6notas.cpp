/*
Se almacenan las notas de 4 estudiantes en un vector.Mostrar:
1. Porcentaje de aprobados.
2. Promedio de notas entre los desaprobados.
3. Nota maxima y en que posicion de memoria se almacena.
*/
#include<stdio.h>
int i, vector[4], n=4;
int cont, acum, desap, max, pos_max;
float porc, prom;
main(){
	for(i=0; i<n; i++){
		printf("Ingrese nota %d: ",i);
		scanf("%d",&vector[i]);
		
		if(vector[i]>=6){
			cont+= 1;
		}	
			
		if(vector[i]<6){
			acum= acum+ vector[i];
			if(acum>0){
				desap+= 1;
			}
		}			
		
		if(i==0 || vector[i]>max){
			max= vector[i];
			pos_max= i;
		}
	}
	porc = (cont*100)/n;
	prom = acum/desap;
	
	printf("Porcentaje de aprobados: %f%%\n",porc);
	printf("Promedio de notas entre desaprobados: %f\n",prom);
	printf("Nota maxima: %d\t Posicion de memoria: %d",max,pos_max);
}
