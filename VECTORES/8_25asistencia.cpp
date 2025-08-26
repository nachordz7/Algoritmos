/*
Se almacenan la cantidad de personas que asisten a un evento a lo largo de 4 dias en un vector.mostrar:
1. Dia en el que asistio menor cantidad de gente.
2. Dias en los que la asistencia fue menor al promedio.
3. Porcentaje de los dias en los que asistieron mas de 500 personas.
4. Promedio de asistentes entre los dias que fueron mas de 500 personas y menos de 1000.
5. Mostrar el porcentaje de asistentes que hubo cada dia, considerando como 100% el total.
La posicion de memoria corresponde al dia.
*/
#include<stdio.h>
int i, n=4, gente[4];
int min, cant_min, acum, prom, cont;
float porc;
main(){
	for(i=0; i<n; i++){
		printf("\nIngrese cantidad de asistencias del dia %d: ",i);
		scanf("%d",&gente[i]);
		
		if(i==0 || gente[i]< cant_min){
			cant_min = gente[i];
			min = i;
			
		}
		acum = acum + gente[i];
		
		if(gente[i]>500){
			cont = cont +1;
		}
	}
	prom = acum/n;
	porc = (cont*100)/n;
	printf("\nDia en el que asistio menor cantidad de gente: %d\nCantidad: %d\n",min,cant_min);
	printf("Dias en los que la asistencia fue menor al promedio:\n");
	for(i=0;i<n;i++){
		if(gente[i]<prom){
		printf("%d| ",i);
		}
	}
	printf("\nPorcentaje de los dias en los que asistieron mas de 500 personas: %f%%",porc);
}
