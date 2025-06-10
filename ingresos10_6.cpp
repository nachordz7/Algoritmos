/*
Se leen los ingresos y las edades de 10 personas.Mostrar:
1.Porcentaje de mayores de edad.
2.Promedio de ingresos por persona.
3.Edad maxima y que ingresos tiene.
4.Entre los mayores a 30, que porcentaje tiene ingresos mayores a 15mil(500k) fajos. 
*/
#include<stdio.h>
int i, n=10, guita, edad, cont, acum, cont2, cont3;
int porc, prom, max,guitamax, porcmayor ;
main(){
	for(i=0; i<n; i++){
		printf("\nIngresa la guita %d: ",i);
		scanf("%d",&guita);
		
		printf("Ingresa la edad %d: ",i);
		scanf("%d",&edad);
		
		if(edad>=18){
			cont= cont+1;
		}
		acum= acum+guita;	
			
		if(i==0 || edad>max){
			max= edad;
			guitamax= guita;
		}
		if(edad> 30){
			cont2 = cont2+1;
			if(guita>15000){
				cont3=cont3+1;
			}
		}
	}
	porc=(cont*100)/n;
	prom = acum/n;
	porcmayor = (cont2*100)/cont3;	
	
	printf("\nPorcentaje de mayores de edad: %d%%\n",porc);
	printf("Promedio de ingresos por persona: %d\n", prom);
	printf("Edad maxima: %d\nIngresos: %d\n",max,guitamax);
	printf("Porcentaje que tiene ingresos mayores a 15mil fajos: %d%% ",porcmayor);
}
