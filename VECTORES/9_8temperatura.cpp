/*
Realizar un programa que lea las temperaturas a lo largo de un dia y en que horario se leyeron. 
Por lo menos se Lee 1 temperatura y el usuario indica el fin de la carga. Mostrar:
1.Temperatura minima y en que horario se ingreso
2.Promedio de las temperaturas tomadas a partir de las 16hs.Mostrar el maximo
3. Que porcentaje de las temperaturas fueron tomadas antes del medio dia. Calcular su promedio
*/
#include<stdio.h>
int temp, hora, rta;
int min, hora_min;
int cont_16, acum_16, prom_16, max;
int cont_12, acum_12, prom_12;
float porc;
main(){
do{

printf("\nIngrese temperatura: ");
scanf ("%d",&temp);

printf("Horario: ");
scanf("%d",&hora);

printf("Continuar 1(si) 0(no): ");
scanf("%d",&rta);

if(cont == 0 || temp < min) {
	min = temp;
	hora_min = hora;
	
	}
	
	if(hora > 1600){
		cont_16++;
		acum_16 = acum_16 + temp;
		if( cont_16 == 1 || temp > max) {
			max = temp;
	}
	}
	
	if(hora<1200){
		cont_12++;
		acum_12= acum_12+temp;
	}
	
	cont++;
}while(rta!=0);
	 
prom_16= acum/cont;
porc= (acum_12*100)/cont_12;
prom_12= acum_12/cont_12;

printf("\nTemperatura minima: %d \nHorario: %d\n", min, hora_min);
printf("Promedio de las temperaturas tomadas a partir de las 16hs: %d \nTemperatura maxima: %d\n",prom_16, max);
printf("Porcentaje de las temperaturas fueron tomadas antes del medio dia: %f%% \nPromedio: %d",porc,prom_12);

}
