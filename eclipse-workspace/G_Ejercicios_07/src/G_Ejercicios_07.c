 /*
 ============================================================================
 Name        : G_Ejercicios_07
 Description : Dise�ar un programa que calcule la longitud de la
 circunferencia y el �rea del c�rculo de radio dado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int radio;
	float pi = 3.14;
	float perimetro;
	float area;

	printf("Ingrese el radio\n");
	fflush(stdin);
	scanf("%d", &radio);

	perimetro = 2 * pi * radio;
	area = pi * (radio * radio);

	printf("\nEl perimetro es %.2f\n", perimetro);
	printf("\nEl area es %.2f", area);

	return 0;
}
