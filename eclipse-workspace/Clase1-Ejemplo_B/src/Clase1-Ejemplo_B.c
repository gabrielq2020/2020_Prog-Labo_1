 /*
 ============================================================================
 Name        : Clase1-Ejemplo_B
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int a;
	int b;
	int c;
	float div;
	float dec;

	setbuf(stdout, NULL);

	a = 5;
	b = 3;

	dec = 2.8;
	c = dec;

	printf("La variable c es %d \n", c);//Como utilizo modificador %d solo muestra la parte entera

	div = (float) a / b;
	printf("\nLa variable div %.2f", div);//%.2f quiere decir que va a mostrar dos numeros despues de la coma

	return 0;
}