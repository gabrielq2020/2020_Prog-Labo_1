 /*
 ============================================================================
 Name        : G_Ejercicios_04
 Description :
 Escribir un programa que realice las siguientes acciones:
 -Limpie la pantalla
 -Declare 2 variables y les asigne sendos valores
 -Realice la resta de dichas variables y muestre por pantalla la leyenda
  "Resultado positivo" en caso de ser mayor que cero o "Resultado negativo"
  si es menor que cero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout, NULL);

	system("CLS()");

	int numero1;
	int numero2;
	int resta;

	printf("Ingrese un valor para el primer numero\n");
	fflush(stdin);
	scanf("%d", &numero1);

	printf("Ingrese un valor para el segundo numero\n");
	fflush(stdin);
	scanf("%d", &numero2);

	resta = numero1 - numero2;

	if (resta < 0) {
		printf("Resultado Negativo");
	} else {
		printf("Resultado Positivo");
	}

	return 0;
}
