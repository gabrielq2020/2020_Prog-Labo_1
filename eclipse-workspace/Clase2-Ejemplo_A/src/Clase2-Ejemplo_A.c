 /*
 ============================================================================
 Name        : Clase2-Ejemplo_A.c
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

	setbuf(stdout, NULL);

	int cont=0;
	int num;
	int i;

	printf("Ingresar un n�mero ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cont++;
			printf("\nEs divisor el n�mero: %d", i);
		}
	}

	printf("\n\nLa cantidad de numeros divisores es %d", cont);
}
