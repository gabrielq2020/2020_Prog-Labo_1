 /*
 ============================================================================
 Name        : Clase6-Ejemplo_B
 Description :
 Hacer un programa que le pida 10 numeros al usuario y los guarde en un array
 1) analizar el array e imprimir:
 -Promedio
 -Maximo
 -Minimo
 2) Pedirle al usuario que ingrese un numero e indicar si el mismo est� o no
 en el array.
 3) Imprimir el array ordenado de mayor a menor
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int getInt(char mensaje[]);

int main(void)
{

	setbuf(stdout, NULL);

	int arrayInt[10];
	int numeroIngresado;
	float promedio;
	int maximo;
	int minimo;
	int i;
	int acumulador = 0;
	int respuestaSwitch;
	int opcion;

	for(i = 0; i < 10; i++)
	{
		numeroIngresado = getInt("Ingrese un numero\n");

		acumulador += numeroIngresado;

		arrayInt[i] = numeroIngresado;


		if(i==0)
		{
			minimo = numeroIngresado;
			maximo = numeroIngresado;
		}

		if(numeroIngresado < minimo)
		{
			minimo = numeroIngresado;
		}
		else if (numeroIngresado > maximo)
		{
			maximo = numeroIngresado;
		}
	}

	//promedio = acumulador / 10;

	do{
		respuestaSwitch =
				utn_getNumero(&opcion,
						"\nElija una opcion:\n1-Promedio\n2-Maximo\n3-Minimo\n6-Salir\n",
						"Error tiene que ser de 1 a 6\n", 1, 6, 2);
		if (respuestaSwitch == 0) {
			switch (opcion) {
			case 1:
				promedio = acumulador / 10;
				printf("\nEl promedio es: %f\n", promedio);
				break;
			case 2:
				printf("\nEl maximo es: %d\n", maximo);
				break;
			case 3:
				printf("\nEl minimo es: %d\n", minimo);
				break;

			}
		}
	} while (opcion != 6);





	return 0;
}
