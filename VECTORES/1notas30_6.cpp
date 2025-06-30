/*
Se almacenan en un vector las notas de 4 evaluaciónes de un estudiante.Mostrar:
1. Promedio. 
2. Número de notas aprobadas. 
3. Porcentaje de notas desaprobadas. 
4. Numeros de notas mayores al promedio. 
5. Nota maxima y posición de memoria. 
El numero de nota corresponde a la posición de memoria
*/
#include<stdio.h>

int vector[4], i, n=4;
main() {
   for(i=0;i<n;i++){
   printf("Ingrese nota para la posición %d: ",i);
   scanf("%d",&vector[i]);   
} 



}