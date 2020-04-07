 /*
 ============================================================================
 Name        : Clase2-Ejercicio_01
 Description :
 Realizar un programa que solicite cinco n�meros e imprima por pantalla
 el promedio, el m�ximo y el m�nimo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	setbuf(stdout, NULL);	//limpia el buffer de salida, para que el programa salga en el orden que vos quer�s y no se saltee los primeros printf.

	int numero;
	int i;
	int acumulador=0;
	int promedio;
	int max;
	int min;

	printf("Ingrese un numero");
	fflush(stdin);	//limpia el buffer de entrada, para que tu variable char tome el valor que el usuario ingresa y no un caracter que puede estar precargado en el buffer (que si antes tome otro dato, ser� un enter)
	scanf("%d", &numero);

	min=numero;
	max=numero;
	acumulador=numero;

	for(i=0;i<4;i++)
	{
		printf("Ingrese un numero");
		fflush(stdin);
		scanf("%d", &numero);

		acumulador+=numero;

		if(i == 0 || numero>max)
		{
			max = numero;
		}
		else
		{
			if(numero<min)
			{
				min = numero;
			}
		}

	}	//Hacer con do while (contador<5)

	promedio = acumulador / 5;
	printf("\nEl promedio es %d\n", promedio);

	printf("\nEl maximo es %d\n", max);
	printf("\nEl minimo es %d\n", min);

	return 0;
}
