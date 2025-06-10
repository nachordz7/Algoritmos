/*
Realizar un programa para procesar las edades y notas de un curso. El curso tiene 5 estudiantes.
Informar:
1- Porcentaje de aprobados.
2- Promedio entre las calificaciones de los mayores a 18 años.
3- Nota minima y a que edad corresponde.
4- Promedio de edad entre los desaprobados.
*/
#include<stdio.h>
int i, n=5, cont, acum, edad, nota;
int porc, prom, min, edadnota, desap, acumdes;
main(){
	for(i=0; i<n; i++){
	printf("\nIngrese la edad %d: ",i);
	scanf("%d",&edad);
	
	printf("Ingrese la nota %d: ",i);
	scanf("%d",&nota);
	
	if(nota>=6){
		cont= cont+1;
	}
	if(edad>=18){
		acum= acum+nota;	
	}
	if(i==0 || nota<min){
		min= nota;
		edadnota = edad;
	}
	if(nota<6){
		acumdes= acumdes+edad;
	}
	}
	porc= (cont*100)/n;
	prom= acum/n;
	desap=acumdes/n;
	
	printf("\nPorcentaje de los aprobados: %d%%\n",porc);
	printf("Promedio de las calificaciones de los mayores a 18: %d\n",prom);
	printf("Nota minima: %d\nA que edad corresponde: %d\n",min,edadnota);
	printf("Promedio de edad entre los desaprobados: %d",desap);
}
