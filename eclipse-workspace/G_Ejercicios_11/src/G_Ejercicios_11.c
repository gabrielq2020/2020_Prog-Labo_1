 /*
 ============================================================================
 Name        : G_Ejercicios_11
 Description : Hacer el programaque imprima los n�meros pares entre el 1 y
 	 	 	   el 100
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int i;

	for(i = 1; i < 101; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d es numero par\n", i);
		}
	}

	return 0;
}
