 /*
 ============================================================================
 Name        : G_Ejercicios_05
 Description : Escribir el programa necesario para calcular y mostrar el
 cuadrado de un n�mero. El n�mero debe ser mayor que cero, en caso de error
 que aparezca el mensaje "ERROR, el n�mero debe ser mayor que cero".
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int numero;
	int cuadrado;

	printf("Ingrese un numero\n");
	fflush(stdin);
	scanf("%d", &numero);

	if(numero < 0) {
		printf("ERROR, el n�mero debe ser mayor que cero\n");
	} else {
		cuadrado = numero * numero;
		printf("El cuadrado del numero ingresado es \n%d", cuadrado);
	}

	return 0;
}
