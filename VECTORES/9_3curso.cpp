/* 
Se desea procesar las notas de estudiantes de 2 cursos. 
Se lee el curso que pertenece a cada estudiante, su edad y su nota.Mostrar:
1. Edad del estudiante que tuvo la menor nota y a que curso pertenece.
2. Porcentaje de estudiantes mayores de edad por curso.
3. Nota promedio entre los menores de edad.
Rinde como maximo 5 estudiantes. Finaliza el programa al ingresar 0 como curso. Puede que no se presente ningun alumno.
*/
#include <stdio.h>

int main() {
    int curso, edad, nota, cont = 0;
    int min = 11; 
    int edad_min, curso_min, mayor, acum, cont_men, prom;
    float porc;

    printf("\nIndique curso 1 o 2 (0 para finalizar): ");
    scanf("%d", &curso);

    while (curso != 0 && cont < 5) {
        cont++;
		printf("Ingrese la edad del alumno: ");
        scanf("%d", &edad);

        printf("Ingrese nota: ");
        scanf("%d", &nota);

        if (nota < min) {
            min = nota;
            edad_min = edad;
            curso_min = curso;
        }

        if(edad>17){
        	mayor++;
		}
		if(edad<18){
			acum=acum+nota;
			cont_men++;
		}
		
		
        if (cont < 5) {
            printf("\nIndique curso 1 o 2 (0 para finalizar): ");
            scanf("%d", &curso);
        }
        
    }
	porc = (mayor*100)/cont;
	prom = acum/cont_men;
    if (cont > 0) {
        printf("\nEdad del estudiante que tuvo la menor nota: %d\tCurso: %d\n", edad_min, curso_min);
        printf("Porcentaje de estudiantes mayores de edad por curso: %f%%\n",porc);
        printf("Nota promedio entre los menores de edad: %d\n",prom);
    } else {
        printf("\nNo se ingresaron estudiantes.\n");
    }
}

