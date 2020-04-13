/*
 * utn.c
 *
 *  Created on: 2 abr. 2020
 *      Author: milat
 */

#include <stdio.h>
#include <stdlib.h>



int getInt(char mensaje[])
{
	int auxiliar;
	printf("%s",mensaje);
	scanf("%d", &auxiliar);

	return auxiliar;
}


float getFloat(char mensaje[])
{
	float auxiliar;
	printf("%s",mensaje);
	scanf("%f", &auxiliar);

	return auxiliar;
}


char getChar(char mensaje[])
{
	char auxiliar;
	printf("%s",mensaje);
	fflush(stdin);
	scanf("%c", &auxiliar);

	return auxiliar;
}


char getNumeroRandom(int desde, int hasta, int iniciar)
{
	if(iniciar)
	{
		srand(time(NULL));
	}
	return desde + (rand() % (hasta + 1 - desde));
}


int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos)
{
	int ret;
	int num;

	//setbuf(stdin, NULL);

	while (reintentos >= 0) {
		printf("%s", mensaje);
		fflush(stdin);
		//scanf("%d", &num);
		if (scanf("%d", &num) == 1) //si scanf=1(pudo escribir la variable)
		{
			if (num <= maximo && num >= minimo)
			{
				break;
			}
		}
		reintentos--;
		printf("%s", mensajeError);
		fflush(stdin);
	}

	if (reintentos == 0) {
		ret = -1;
	} else {
		ret = 0;
		*pResultado = num;
	}

	return ret;
}

