/*
Se desean procesar los datos de los vehiculos de un taller. Mostrar:
1. Porcentaje de autos comerciales que asistieron por reparaciones. 
2. valor promedio de la atencion a autos particulares. 
3. Costo del ingreso mas barato y a que tipo de vehiculo fue. 
4. Dentro de los ingresos que superaron los 150k, cuantos corresponden a controles, expresar en porcentaje.
Por cada, cliente se leen el precio del servicio, si es auto particular o comercial y si asiste por 1 control o 2 reparacion. Puede ser que no haya clientes. 
Finaliza la carga al ingresar 0 como precio del servicio y como maximo se leen los datos de 5 vehiculos por dia. 
*/
#include<stdio.h>
int precio, i=0, car, servicio, cont_comerc, cont_repa;
int cont_part, acum; 
int min, min_auto;
int cont_150, control_150;
float porc, prom, porc_150;

main(){
	printf("Ingrese precio del servicio: ");
	scanf("%d",&precio);
	while(precio!=0 && i<5){
		
		printf("\n1-Auto particular | 2-Auto comercial: ");
		scanf("%d",&car);
		
		printf("\n1-Control | 2-Reparacion: ");	
		scanf("%d",&servicio);
		
		//1
		if(car==2){
			cont_comerc++;
			if(servicio==2){
				cont_repa++;
			}
		}
		
		//2
		if(car==1){
			cont_part++;
			acum= acum+precio;
		}
		
		//3
		if(i==0 || precio< min){
			min= precio;
			min_auto = car;
		}
		
		//4
		if(precio>150000){
			cont_150++;
			if(servicio==1){
				control_150++;
			}
		}
		
		i++;
		if(i<5){
			printf("\nIngrese precio del servicio: ");
			scanf("%d",&precio);
		}
	};
	
	if(cont_comerc > 0){
		porc= (cont_repa*100)/cont_comerc;
		printf("\nPorcentaje de autos comerciales que asistieron por reparaciones: %f%%\n",porc);
	}else printf("\nNo asistio ningun auto comercial por reparacion\n");	
	
	if(cont_part > 0){
		prom= acum/cont_part;
		printf("Valor promedio de la atencion a autos particulares: %f\n",prom);
	}else printf("\nNo asistio ningun auto particualr\n");
	
	printf("Costo del ingreso mas barato: %d\nTipo de vehiculo: %d\n",min,min_auto);
	
	if(cont_150>0){
		porc_150= (control_150*100)/cont_150;
		printf("Ingresos que superaron los 150k y corresponden a controles: %f%%\n",porc_150);
	}
	else printf("No hubo ingresos que superaron los 150k");	
}
