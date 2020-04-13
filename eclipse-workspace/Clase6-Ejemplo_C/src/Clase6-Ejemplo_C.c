 /*
 ============================================================================
 Name        : Clase6-Ejemplo_C
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <string.h>

int esNumero(char* cadena);

int main(void)
{
	char string[100]="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
	int longitud;
	int edad;
	char bufferStr[4096];

	// NO SE PUEDE string="Jose";
	strcpy(string,"HOLA MUNDO\n");
	printf("%s",string);
	longitud = strlen(string);
	printf("%d\n", longitud);


	printf("Edad?\n");
	//scanf("%d",&edad);
	scanf("%s",bufferStr);
	if(esNumero(bufferStr))
	{
		edad = atoi(bufferStr);
		printf("Tu edad es %d", edad);
	}


	return EXIT_SUCCESS;
}

int esNumero(char* cadena)
{
	int retorno = 1;
	int i;
	for(i=0;cadena[i]!='\0';i++)
	{
		if(i==0 && cadena[i] == '-')
		{
			continue;
		}
		if(cadena[i]>'9' || cadena[i]<'0')
		{
			retorno = 0;
			break;
		}
	}
	return retorno;
}


