#include<stdio.h>

int i, n=4;
int vector[4];
main(){
	for(i=0; i<n; i++){
		printf("Ingrese valor para la posicion %d: ",i);
		scanf("%d",&vector[i]);
	}
	for(i=0; i<n; i++){
	printf("| %d |",vector[i]);
	}
	for(i=0; i<n; i++){
	printf("%d",i);
	}
}







