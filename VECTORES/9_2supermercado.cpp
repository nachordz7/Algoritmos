/*
Realizar un programa que imprima el ticket de un supermercado. 
Se leen el precio y la cantidad de cada articulo.
El usario indica si desa cargar otro producto.
Imprimir el total a pagar. Por lo menos se lee un articulo.
HACER CON DO WHILE
*/
#include <stdio.h>
float precio, total;
int cant;
int opcion;
main(){
    printf("Carga de productos para el ticket del supermercado\n");

    do {
        printf("Ingrese el precio del producto: ");
        scanf("%f", &precio);

        printf("Ingrese la cantidad: ");
        scanf("%d", &cant);

        total += precio * cant;

        printf("\nDesea ingresar otro producto? (1=Sí, 0=No): ");
        scanf("%d", &opcion);

    } while(opcion == 1);

    printf("\nTotal a pagar: %2.f$\n", total);
}
