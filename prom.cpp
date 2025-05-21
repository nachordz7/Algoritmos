/* Realizar un programa que calcule el promedio de 3 notas

#include<stdio.h>
float n1, n2, n3, prom;
main(){
	printf("Ingrese nota: ");
	scanf("%f",&n1);
	
	printf("Ingrese nota: ");
	scanf("%f",&n2);
	
	printf("Ingrese nota: ");
	scanf("%f",&n3);	
	
	prom = (n1+n2+n3)/3;
	
	printf("El promedio es %f ",prom);
}
*/
#include<stdio.h>
int i, nota, n=3;
float acum=0, prom ;

main(){
for( i=0 ; i<n; i++){
	
	printf("Ingrese nota %d:",i);
	scanf("%d",&nota);
		
	acum = acum + nota;
}
	prom= acum/n;
	printf("El promedio es %f",prom);

}
