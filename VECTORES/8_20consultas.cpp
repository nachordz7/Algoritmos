/*
Una cuenta promociona 5 publicaciones. Se almacena la cantidad de consultas que recibe cada publicacion en un vector.
Mostrar:
1. Numero de publicacion que recibio mayor cantidad de consultas.
2. Porcentaje de las publicaciones que recibieron menos de 100 consultas.
3. Promedio de las publicaciones que recibieron mas de 250 consultas.
4. Numero de publicaciones que recibieron menos consultas que el promedio.
*/
#include<stdio.h>
int i, n=5 , cons[5];
int cons_max, cont, acum, prom;
float porc; 
main(){
	for(i=0; i<n; i++){
		printf("Cantidad de consultas de la publicacion %d: ",i);
		scanf("%d",&cons[i]);
		
		if(i==0 || cons[i]>cons_max){
			cons_max = i;
		}
		if(cons[i]<100){
			cont++;
		}
		if(cons[i]>250){
			acum = acum + cons[i];
		}
	}
	porc= (cont*100)/n;
	prom= acum/n;
	
	printf("\nNumero de publicacion que recibio mayor cantidad de consultas: %d\n",cons_max);
	printf("Porcentaje de las publicaciones que recibieron menos de 100 consultas: %f%% \n",porc);
	printf("Promedio de las publicaciones que recibieron mas de 250 consultas: %d\n",prom);
	printf("Numero de publicaciones que recibieron menos consultas que el promedio:\n");
	for(i=0;i<n;i++){
		if(cons[i]>prom){
			printf("%d| ",i);
		}
	}
}


