/*
Para procesar los datos de un censo, realizar un programa que lea los datos de 8 personas maximo. 
Se leen de cada persona su genero y edad. Puede ser que no se procese datos. 
Finaliza el progama al ingresar 0 como edad
Mostrar:
1. Porcentaje de cada genero.
2. Edad menor masculina y edad mayor entre todos los censados.
3. Promedio de las edades entre todos los censados y promedio de edades masculinas.
4. Que porcentaje entre las mujeres corresponde a menores de 40 años.
5. Entre los mayores a 50 que porcentaje son hombres.
*/
#include<stdio.h>
int edad, gen, i;
int cont_m, cont_f;
float porc_m, porc_f;
int min_m, max;
int acum, prom, acum_m, prom_m;
int cont_40;
float porc_40;
main(){
	printf("Ingrese edad: ");
	scanf("%d",&edad);
	
	while(edad!=0 && i<8 ){
		 
		printf("\nIngrese genero 1(M) 0(F): ");
		scanf("%d",&gen);
		
		if(gen==1){
			cont_m++;
			acum_m= acum_m + edad;
			if(i==0 || edad < min_m){
				min_m= edad;
			}
		}
		if(gen==0){
			cont_f++;
			if(edad<40){
				cont_40++;
			}
		}
		
		if(i==0 || edad > max){
			max= edad;
		}
			
		acum= acum+edad;
		
		i++;
		printf("\nIngrese edad: ");
		scanf("%d",&edad);
	};
	porc_m= (cont_m*100)/i;
	porc_f= (cont_f*100)/i;
	prom= acum/i;
	prom_m= acum_m/cont_m;
	porc_40= (cont_40*100)/cont_f;
	
	printf("\nPorcentaje masculino: %f%% \nPorcentaje femenino: %f%%\n",porc_m,porc_f);
	printf("Edad menor masculino: %d \nEdad mayor entre todos los censados: %d\n",min_m, max);
	printf("Promedio entre todos los censados: %d \nPromedio de edades masculinas: %d\n",prom, prom_m);
	printf("Porcentaje entre las mujeres menores a 40 years: %f%%\n",porc_40);
}
