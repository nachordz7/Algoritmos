/*
Realizar un programa que procese 4 notas de un alumno y muestre:
1. Porcentaje de aprobadas.
2. Promedio entre las desaprobadas.
3. Nota maxima y que numero de nota fue.
4. Nota minima entre las aprobadas.
*/
#include<stdio.h>
int nota,i;
int cont_aprob;
int acum_desap, cont_desap;
int max, num_nota;
int min;
float porc, prom;
main(){
	do{
		printf("Ingrese nota: ");
		scanf("%d",&nota);
		
		if(nota>5){
			cont_aprob++;
			if(min==0 || nota < min){
				min= nota;
			}
		}
		else{
			acum_desap= acum_desap + nota;
			cont_desap++;
		
		}
		
		if(i==0 || nota > max ){
			max = nota;
			num_nota = i;
		}
		
		i++;
	}while(i<4);	
	porc= (cont_aprob*100)/i;
	
	printf("\nPorcentaje de aprobadas: %f%%\n",porc);
	if(cont_desap>0){
		prom= acum_desap/cont_desap;
		printf("Promedio entre las desaprobadas: %f\n",prom);
	}
	else printf("No hay notas desaprobadas\n");
	
	printf("Nota maxima: %d \nNumero de nota: %d\n",max,num_nota);
	printf("Nota minima entre los aprobados: %d",min);
}
