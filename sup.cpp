#include <stdio.h>
const float pi = 3.14;
float radio, sup;

main(){
	printf("ingrese el radio: ");
	scanf("%f",&radio);
	sup= pi * (radio * radio);
	printf("la superficie es %2f",sup);
}

