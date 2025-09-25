/*
Realizar un programa que procese los viajes de un remis, se lee el monto del viaje y si el pago fue hecho en efectivo o por medios digitales. 
Puede ser que no se realicen viajes. Finaliza el programa al ingresar 0 como monto. Mostrar:
1. Porcentaje de viajes con monto mayor a 10000
2. Precio promedio de los viajes pagados con tarjeta
3. Precio del viaje mas barato y porque medio se abono
4. Precio promedio entre todos los viajes
5. Dentro de los viajes con monto mayor a 10000, ¿que cantidad pago en efectivo? Expresar en porcentaje
*/
#include<stdio.h>
int monto, i, pago;
int cont;
int acum,cont_tarjeta;
int min, medio_pago;
int acum_total;
int cont_efect;
float porc, prom, prom_total, porc_efect;
main(){
	printf("Ingrese monto de viaje: ");
	scanf("%d",&monto);
	while(monto !=0){
		printf("\nPago 1-Efectivo | 2-Digital: ");
		scanf("%d",&pago);
		
		//1
		if(monto>10000){
			cont++;
			if(pago==1){
				cont_efect;
			}
		}
		//2
		if(pago==2){
			acum= acum+monto;
			cont_tarjeta++;	
		}
		//3
		if(i==0 || monto < min){
			min=monto;
			medio_pago= pago;
			
		}
		//4
		acum_total= acum_total + monto;
		
		i++;
		printf("\nIngrese monto de viaje: ");
		scanf("%d",&monto);
	}
	
	
	if(cont > 0){
	porc= (cont*100)/i;
	printf("\nPorcentaje de viajes con monto mayor a 10000: %f%%\n",porc);
	}
	else printf("\nNo hubo viajes con monto mayor a 10000\n");
	
	if(cont_tarjeta > 0){
	prom=acum/cont_tarjeta;
	printf("Promedio de los viajes pagados con tarjeta: %f\n",prom);
	}
	else printf("No hubo viajes pagados con tarjeta\n");
	printf("Precio del viaje mas barato: %d \tMedio de pago: %d\n",min,medio_pago);
	
	if(i>0){
	prom_total= acum_total /i;
	printf("Precio promedio entre todos los viajes: %f\n",prom_total);
	}
	else printf("No hubo viajes");
	
	porc_efect=(cont_efect*100)/cont;
	printf("5: %f%%\n",porc_efect);
	
}
