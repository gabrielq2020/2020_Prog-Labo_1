 /*
 ============================================================================
 Name        : Clase1-Ejemplo_C
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

	setbuf(stdout, NULL);

	int nota;
	int res;

	nota=5;

	res= (nota >= 7);

	printf("Contenido de la variable res es %d", res);

	if(res)
	{
		printf("\n El alumno esta aprobado \n");
	}
	else
	{
		printf("\nEl alumno esta desaprobado");
	}

	return 0;

}
