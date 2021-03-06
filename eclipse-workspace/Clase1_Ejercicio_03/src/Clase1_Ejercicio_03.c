 /*
 ============================================================================
 Name        : Clase1_Ejercicio_03
 Description :
 - Limpie la pantalla
 - Solicite dos valores numéricos al usuario distintos de cero
 - Asigne a las variables numero1 y numero2 los valores obtenidos
 - Realice la resta de dichas variables
 - Muestre el resultado por pantalla
 - Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor
 - Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int b;
	int resultado;

	setbuf(stdout, NULL);

	//Limpie la pantalla
	system("CLS()");

	//Solicite dos valores numéricos al usuario distintos de cero
	//Asigne a las variables numero1 y numero2 los valores obtenidos
	printf("\nIngrese 1 numero: ");
	scanf("%d", &a);
	printf("\nIngrese 2 numero: ");
	scanf("%d", &b);

	//Realice la resta de dichas variables
	resultado = a - b;

	//Muestre el resultado por pantalla
	printf("\nUsted ingreso %d y %d\n", a, b);
	printf("\nEl resultado es: %d \n", resultado);
	if (resultado > 0)
	{
		//Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor
		printf("\nEl resultado es positivo \n");
	}
	if (resultado < 0)
	{
		//Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero
		printf("\nEl resultado es negativo \n");
	}

	return 0;
}
