 /*
 ============================================================================
 Name        : G_Ejercicios_10
 Description : Escribir en C un programa que  muestre los números impares
 entre 0 y 100 y que imprima cuantos impares hay.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int i;
	int contadorImpares = 0;

	for(i = 0; i < 101; i++)
	{
		if(i % 2 != 0)
		{
			printf("%d es un numero impar entre 0 y 100\n", i);
			contadorImpares++;
		}

	}

	printf("\nLa cantidad de numeros impares entre 0 y 100 es: \n%d", contadorImpares);

	return 0;
}
