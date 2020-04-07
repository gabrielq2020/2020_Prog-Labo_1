 /*
 ============================================================================
 Name        : Clase4-Ejercicio_01
 Description : Desarrollar una biblioteca "utn.h" que posea funciones para
 pedirle al usuario el ingreso de datos
 -getInt()
 -getFloat()
 -getChar()
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getInt();
float getFloat();
char getChar();

int main(void)
{

	setbuf(stdout, NULL);

	int numero;
	float flotante;
	char caracter;

	numero = getInt("Ingrese un numero entero\n");
	flotante = getFloat("\nIngrese un numero flotante\n");
	caracter = getChar("\nIngrese un caracter\n");

	return 0;
}

int getInt(char mensaje[])
{
	int auxiliar;
	printf("%s",mensaje);
	fflush(stdin);
	scanf("%d", &auxiliar);

	return auxiliar;
}

float getFloat(char mensaje[])
{
	float auxiliar;
	printf("%s",mensaje);
	fflush(stdin);
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
