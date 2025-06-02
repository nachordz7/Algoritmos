/*
Realizar un programa para procesar las edades y notas de un curso. El curso tiene 5 estudiantes.
Informar:
1- Porcentaje de aprobados.
2- Promedio entre las calificaciones de los mayores a 18 años.
3- Nota minima y a que edad corresponde.
4- Promedio de edad entre los desaprobados.
*/
#include<stdio.h>
int i, n=5, cont;
int edad, nota, porc, prom;
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
		acum= acum+edad;
		
	}
	}
	porc= (cont*100)/n;
	
	printf("Porcentaje de los aprobados: %d%%",porc);
}
