 /*
 ============================================================================
 Name        : G_Ejercicios_12
 Description : Hacer el programaque imprima los n�meros del 1 al 100
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int i;

	for (i = 1; i < 101; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}
