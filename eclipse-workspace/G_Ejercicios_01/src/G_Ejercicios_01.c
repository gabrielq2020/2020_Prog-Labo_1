 /*
 ============================================================================
 Name        : G_Ejercicios_01
 Description : Ingresar 5 n�meros y calcular su media
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numero;
	int i;
	int acumulador = 0;

	for(i=0; i<5; i++)
	{
		printf("Ingrese un numero\n"),
		fflush(stdin);
		scanf("%d", &numero);

		acumulador += numero;
	}

	printf("\nEl promedio de los numeros ingresados es %d", acumulador/5);

	return 0;
}
