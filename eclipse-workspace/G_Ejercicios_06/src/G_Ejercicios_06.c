 /*
 ============================================================================
 Name        : G_Ejercicios_06
 Description : De 10 n�meros ingresadas indicar cuantos son mayores a cero y
 cuantos son menores a cero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int i;
	int numero;
	int contadorPositivos = 0;
	int contadorNegativos = 0;

	for(i=0; i < 10; i++) {
		printf("Ingrese un numero\n");
		fflush(stdin);
		scanf("%d", &numero);

		if(numero < 0) {
			contadorNegativos++;
		} else {
			contadorPositivos++;
		}
	}

	printf("\nLa cantidad de numeros positivos es \n%d", contadorPositivos);
	printf("\nLa cantidad de numeros negativos es \n%d", contadorNegativos);

	return 0;
}
