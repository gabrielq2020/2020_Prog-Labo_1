 /*
 ============================================================================
 Name        : Clase3-Ejercicio_01
 Description : Crear una funci�n que reciba el radio de un c�rculo y retorne
 su �rea
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int radio;
	float pi = 3.14;
	float area;

	printf("Ingrese el radio\n");
	fflush(stdin);
	scanf("%d", &radio);

	area = pi * (radio * radio);

	printf("\nEl area es %.2f", area);

	return 0;

}
