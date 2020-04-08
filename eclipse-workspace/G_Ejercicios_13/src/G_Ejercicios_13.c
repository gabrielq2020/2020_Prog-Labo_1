 /*
 ============================================================================
 Name        : G_Ejercicios_13
 Description : Hacer el programaque imprima los números del 100 al 0 en orden
 	 	 	   decreciente
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int i;

	for(i = 100; i > -1; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}
