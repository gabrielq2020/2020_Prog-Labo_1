 /*
 ============================================================================
 Name        : G_Ejercicios_17
 Description : Hacer el programa que nos permita introducir un número por
 	 	 	   teclado y nos informe si es par o impar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numero;

	printf("Ingrese un numero: ");
	fflush(stdin);
	scanf("%d", &numero);

	if(numero % 2 == 0)
	{
		printf("\nEl numero %d es par.", numero);
	}
	else
	{
		printf("\nEl numero %d es impar.", numero);
	}

	return 0;
}
