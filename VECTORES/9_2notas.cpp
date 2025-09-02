/*
Realizar un programa que calcule  el promedio de las notas de todos los alumnos que se presentan a un examen.
Puede ser que no se presente ningun alumno a rendir, como maximo son 10 alumnos y finaliza la carga al ingresar 0 como nota.
RESOLVER CON WHILE 
*/
#include<stdio.h>
int i, n, acum, prom, nota;
main(){
	printf("Alumnos presentes: ");
	scanf("%d",&n);
	while(n>0 && n<=10){
		printf("Nota del alumno %d: ",i);
		scanf("%d",&nota);
		acum= acum+ nota;
		i++;
	};
	prom= acum/n;
	printf("Promedio de las notas: %d",prom);
	
}

