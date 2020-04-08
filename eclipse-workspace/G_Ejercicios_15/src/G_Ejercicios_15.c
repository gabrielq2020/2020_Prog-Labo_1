 /*
 ============================================================================
 Name        : G_Ejercicios_15
 Description : Escribir en  y codificar en C un programa que muestre los
 	 	 	   múltiplos de 6 comprendidos entre 0 y 100
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int i;

	for(i = 1; i < 101; i++)
	{
		if(i % 6 == 0)
		{
			printf("%d es multiplo de 6\n", i);
		}
	}

	return 0;
}
