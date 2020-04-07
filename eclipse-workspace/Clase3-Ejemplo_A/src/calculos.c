/*
 * calculos.c
 *
 *  Created on: 1 abr. 2020
 *      Author: milat
 */

#include <stdio.h>
#include <stdlib.h>

int funcion(){
	int numeroIngresado;
	int numeroPantalla;
	printf("Ingrese un numero ");
	fflush(stdin);
	scanf("%d", &numeroIngresado);
	numeroPantalla = numeroIngresado;
	printf("El numero que ingreso es: %d", numeroPantalla);
	return numeroPantalla;
}
