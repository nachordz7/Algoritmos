/*realizar un programa que leyendo el monto de una compra otorgue descuentos a sus clientes de la siguiente manera:
Si la compra es mayor a 50k, aplicar el 15% de descuento.
Si la compra es mayor a 25k, aplicar el 10% de descuento.
Si la compra es mayor a 10k, aplicar el 5% de descuento.
Si la compra es menor o igual a 10k, no se aplica el descuento.
Mostra el descuento realizado y el total a pagar */
#include<stdio.h>
float desc, monto, total;
main(){
	printf("Ingrese el monto de compra: ");
	scanf("%f",&monto);
	
	if(monto>50000){
		desc = (monto * 85) / 100;
		total = monto - desc;
		printf("El descuento es del %f y el total a pagar es: %f",total,desc);
	}
	else if(monto>25000){
		desc = (monto * 90) / 100;
		total = monto - desc;
		printf("El descuento es del %f y el total a pagar es: %f",total,desc);
	}
	else if(monto>10000){
		desc = (monto * 95) / 100;
		total = monto - desc;
		printf("El descuento es del %f y el total a pagar es: %f",total,desc);
	}
	else printf("El total a pagar es: %f",monto);
}
