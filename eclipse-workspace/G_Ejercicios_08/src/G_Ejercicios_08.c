 /*
 ============================================================================
 Name        : G_Ejercicios_08
 Description : Dise�ar un programa que calcule la superficie de un tri�ngulo
 a partir del ingreso de su base y altura, y muestre el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int base;
	int altura;
	int superficie;

	printf("Ingrese un numero para la base\n");
	fflush(stdin);
	scanf("%d", &base);

	printf("\nIngrese un numero para la altura\n");
	fflush(stdin);
	scanf("%d", &altura);

	superficie = (base * altura) / 2;

	printf("\nLa superficie del triangulo es \n%d", superficie);

	return 0;
}
