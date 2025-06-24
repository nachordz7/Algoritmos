/*
Se leen las edades de las (5)personas que toman un vuelo y si hacen (1)transbordo o no(0).
Mostrar:
1. Que porcentaje hace transbordo.
2. Edad minima y si hacen transbordo o no.
3. Promedio de edad entre los mayores a 50 que no hacen transbordo.
4. Dentro de los menores de edad ¿Cuantos hacen transbordo?. Expresar en porcentaje  
*/
#include<stdio.h>
int i, n=5, cont=0, acum=0, prom=0;
int edad, trans, min, transmin=0, transmayor=0, transmenor=0, contmenor=0;
float porc=0, porcmenor=0;
main(){
	for(i=0; i<n; i++){
		printf("\nIngrese edad %d: ",i);
		scanf("%d",&edad);
		
		printf("Transbordo (1)si y (0)no: ");
		scanf("%d",&trans);
		
		if(trans==1){
			cont= cont+1;
		}
		
		if(i==0 || edad<min){
			min= edad;
			transmin = trans;
		}	
		if(edad>=50 && trans==0){
			acum= acum+edad;
			transmayor= transmayor+1;
		}
		if(edad<18){
			contmenor= contmenor + 1;
			if(trans == 1){
				transmenor= transmenor + 1;
			} 
	}
}
	porc= (cont*100)/n;
	if(transmayor > 0){
		prom= acum/transmayor;
	} else{
		prom = 0;
	}
	
	if(contmenor >0){
		porcmenor= (transmenor*100)/contmenor;
	} else{
		porcmenor= 0;
	}
	
	printf("\nPorcentaje que hace transbordo: %f%%\n",porc);
	printf("Edad minima: %d\nTransbordo: %d\n",min,transmin);
	printf("Promedio de edad entre los mayores a 50 anios que no hacen transbordo: %d\n",prom);
	printf("Porcentaje de los que hacen transbordo siendo menor de edad: %f%%",porcmenor);	
}
