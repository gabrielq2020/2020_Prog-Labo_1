 /*
 ============================================================================
 Name        : Clase4_Ejemplo_A.c
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
	setbuf(stdout, NULL);
	int n;
	int resp;
	resp = utn_getNumero(&n, "ingrese el numero: ", "error", 1, 9, 3);
	if (resp==0)
	{
		printf("num ingresado: %d", n);
	}
	else
	{
		printf("Todo MAL");
	}
	return 0;
}




/*
 * int main(void) {
setbuf(stdout,NULL);
int numero;
numero=UTN_getNumero(&numero,"Ingrese una nota de 0 a 10 : ", "Error,Ingrese una nota de 0 a 10\n", 0,10,5);
printf("La nota ingresada es %d",numero);
return 0;
}

*/


