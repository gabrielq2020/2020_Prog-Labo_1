/*
 ============================================================================
 Name: G_Ejercicios_03
 ============================================================================

 Escribir  un programa que realice las siguientes acciones
 1. Limpie la pantalla
 2. Asigne a 2 variables numero1 y numero2 valores distintos de cero
 3. Efectue el producto de dichas variables
 4. Muestre el resultado por pantalla
 5. Obtenga el cuadrado de numero1 y muestrelo por pantalla

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int a;
	int b;
	int producto;
	int cuadrado;

	setbuf(stdout, NULL);

	system("CLS()");

	do{
	printf("\nIngrese 1 numero: ");
	scanf("%d",&a);
	printf("\nUsted ingreso %d\n", a);
		if(a==0)
		{
            printf("\nIngrese numero mayor a 0\n");
            printf("\nUsted ingreso %d\n", a);
		}
    }while(a==0);

	do{
	printf("\nIngrese 2 numero: ");
	scanf("%d",&b);
	printf("\nUsted ingreso %d\n", b);
		if(b==0)
		{
		printf("\nIngrese numero mayor a 0\n");
		printf("\nUsted ingreso %d\n", b);
		}
    }while(b==0);

	producto=a*b;
	cuadrado=a*a;

	printf("\nEl valor 1 es: %d\nEl valor 2 es: %d\n\nEl producto es: %d\n\nEl cuadrado del 1° valor %d es: %d \n",a,b,producto,a,cuadrado);
	printf("______________________________________\n\n\n\n");



	return 0;
}
