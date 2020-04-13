 /*
 ============================================================================
 Name        : Prog1_TP1
 Description :

 1.Ingresar 1er operando (A=x)

 2.Ingresar 2do operando (B=y)

 3.Calcular todas las operaciones
  a)Calcular la suma (A+B)
  b)Calcular la resta (A-B)
  c)Calcular la division (A/B)
  d)Calcular la multiplicacion (A*B)
  e)Calcular el factorial (A!)

 4.Informar resultadosa)�El resultado de A+B es: r�
  b)�El resultado de A-B es: r�
  c)�El resultado de A/B es: r� o �No es posible dividir por cero�
  d)�El resultado de A*B es: r�
  e)�El factorial de A es: r1 y El factorial de B es: r2�

 5.Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"



int main()
{

	setbuf(stdout, NULL);

	float x;
	float y;
	int respuestaMenu;
	int opcion;
	float resultadoFinal;

	x = getFloat("Ingrese el primero numero");
	y = getFloat("Ingrese el segundo numero");

	do
	{
		respuestaMenu = utn_getNumero(&opcion,
						  "\nElija una opcion:\n1-Calcular la suma\n2-Calcular la resta\n3-Calcular la division"
						  "\n4-Calcular la multiplicacion\5-Calcular el factorial\6-Salir\n",
						  "ERROR: debe ingresar una opcion de 1 a 6\n", 1, 6, 2);
		if (respuestaMenu == 0)
		{
			switch (opcion)
			{
				case 1:
					resultadoFinal = getSuma(x, y);
					printf("\nEl resultado de A+B es: %.2f\n", resultadoFinal);
					break;
				case 2:
					resultadoFinal = getResta(x, y);
					printf("\nEl resultado de A-B es: %.2f\n", resultadoFinal);
					break;
				case 3:
					resultadoFinal = getMultipilcacion(x, y);
					printf("\nEl resultado de A*B es: %.2f\n", resultadoFinal);
					break;
				case 4:
					resultadoFinal = getDivision(x, y);
					printf("\nEl resultado de A/B es: %.2f\n", resultadoFinal);
					break;
				case 5:
					resultadoFinal = getFactorial(x);
					printf("\nEl resultado de A! es: %.2f\n", resultadoFinal);
					break;
			}
		}
	} while (opcion != 6);

	return 0;
}
