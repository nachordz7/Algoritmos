/* 
Ingresan 5 pasajeros a un micro, se lee el el destino:
1-Pinamar
2-Villa Gesell
3-Mar del plata

Junto con la edad de cada pasajero.
Informar
1-Porcentaje de mayores de edad
2-Que porcentaje fue a mar del plata
3-Promedio de edad de los que viajan a Gesell
4-Edad minima y a que destino se dirige
*/
#include<stdio.h>
int n=5, i;
int destino, cont, edad, contM, acum, gesell,min,destinoM;
int porcEdad, porcM, prom;

main(){
for(i=0; i<n ; i++){
	printf("\nIngrese destino %d (1-Pinamar 2-Villa Gesell 3-Mar del plata): ",i);
	scanf("%d",&destino);
	
	printf("Ingrese edad %d: ",i);
	scanf("%d",&edad);
	
	if(edad>=18){
		cont=cont+1;
	}
	
	if(destino == 2){
	acum= acum+edad;
	gesell = gesell + 1;
	}
	
	if(destino == 3){
	contM= contM +1;
	}
	
	if( i == 0 || edad < min){
		min=edad;
		destinoM= destino;
	}
}
	porcEdad = (cont*100)/n;
	porcM= (contM*100)/n;
		
	printf("\nEl porcentaje de mayores de edad: %d%%\n",porcEdad);
	printf("Porcentaje de Mar del plata: %d%%\n",porcM);	
	if(gesell>0){
		prom= acum/gesell;
		printf("Promedio de edad de los que viajan a Gesell: %d\n",prom);
	}
	else printf("No hubo pasajeros que viajaron a Villa Gesell.\n");
	printf("Edad minima: %d\ndestino: %d",min,destinoM);
}
