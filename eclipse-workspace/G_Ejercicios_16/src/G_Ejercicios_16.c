 /*
 ============================================================================
 Name        : G_Ejercicios_16
 Description : Hacer el programaque nos permita introducir un n�mero por
 	 	 	   teclado y nos informe si es positivo o negativo.
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

	if(numero >= 0)
	{
		printf("\nEl numero %d es positivo.", numero);
	}
	else
	{
		printf("\nEl numero %d es negativo.", numero);
	}

	return 0;
}
