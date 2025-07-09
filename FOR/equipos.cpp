/* Realizar un programa que procese los puntos realizados por un equipo durante un torneo. 
Se leen la cantidad de participantes de grupo y los puntos obtenidos. Son 4 equipos. Mostrar:
1. Promedio de pts por participante en cada equipo.
2. Que numero de equipo obtuvo el mejor promedio por participante mas bajo.
3. Promedio de participantes por equipo.
4. Entre los equipos que obtuvieron mas de 10 pts ¿Cuantos obtuvieron un promedio menor a 5 por participante?
*/
#include<stdio.h>
int i, n=4, acum, cont;
int part, pts, prom, prom_mejor, mejor;
int prom_equipo, equipo;
main(){
	for(i=0; i<n; i++){
		printf("\nGrupo %d: Ingrese cantidad de participantes: ",i);
		scanf("%d",&part);
		
		printf("Ingrese cantidad de puntos obtenidos: ");
		scanf("%d",&pts);
		
		acum = acum + pts;
		equipo = equipo + part;
		mejor = part + 1;
		
		if(mejor == 1 ||  ){
			
		}
	}
	prom = acum/n;
	prom_equipo = equipo/n;
	
	printf("\nPromedio de puntos por participante en cada grupo: %d\n",prom); 
	printf("Equipo que obtuvo el mejor promedio por participante mas bajo: %d\n",);
	printf("Promedio de participantes por equipo: %d\n",prom_equipo); // 3
}
