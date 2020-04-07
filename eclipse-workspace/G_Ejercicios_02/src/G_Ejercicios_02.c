 /*
 ============================================================================
 Name        : G_Ejercicios_02
 Description :
 - Escribir el programa necesario para calcular la suma de dos números.
 - Mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numero1;
	int numero2;
	int resultado;

	setbuf(stdout, NULL);

	//Limpiar pantalla
	system("CLS()");

	//Solicitar un valor para "numero1"
	printf("Ingrese un valor para la variable numero1 \n");

	//Guardar el valor de "numero1"
	scanf("%d", &numero1);

	//Solicitar un valor para "numero2"
	printf("\nIngrese un valor para la variable numero2 \n");

	//Guardar el valor de "numero2"
	scanf("%d", &numero2);

	//Establecer operacion matematica
	resultado = numero1 + numero2;

	//Mostrar por pantalla el resultado de la suma
	printf("\nEl resultado de la suma de numero1+numero2 es %d \n", resultado);

	//system("PAUSE()"); // Permite hacer una pausa, Recién cuando la persona aprieta una tecla, se continua con la ejecución de las siguientes líneas

	//system("CLS()"); // Sirve para limpiar la consola

	return 0;
}
