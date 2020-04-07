 /*
 ============================================================================
 Name        : Clase2-Ejemplo_C
 Description : Escribir el programa necesario para calcular la cantidad de
 	 	 	   d�as del mes ingresado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout, NULL);

	int mes;
	printf("Ingresar mes para saber cantidad de d�as\n");
	fflush(stdin);
	scanf("%d", &mes);

	switch (mes)
	{
		case 2:
			printf("El mes tiene 28 d�as");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("El mes tiene 30 d�as");
			break;
		default:
			printf("El mes tiene 31 d�as");
			break;
	}

	return 0;
}
