 /*
 ============================================================================
 Name        : Clase1-Ejemplo_A
 Description : Ejemplo de Operaciones lógicas en C
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	setbuf(stdout, NULL);

	//Declaración de variables
	int a;
	int b;
	int resultado;

	//Inicialización de variables
	a = 1 ;
	b = 0 ;

	resultado = a && b ;
	printf("Resultado de a interseccion b es : %d",resultado);

	//Declaración de variables
	float variableA;
	float variableB;
	int resultadof;

	//Inicialización de variables
	variableA = 3.14;
	variableB = 5.5;

	resultadof = variableA < variableB;
	printf("\nResultado de la comparacion: %d \n",resultadof);

	system("PAUSE");

	return 0;
}
