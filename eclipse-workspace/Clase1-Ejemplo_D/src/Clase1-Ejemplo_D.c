 /*
 ============================================================================
 Name        : Clase1-Ejemplo_D
 Description : Primer ejemplo de Funciones
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int calculoMultiplicar(int x, int y); //Prototipo

int main()
{

	setbuf(stdout, NULL);	//Sirve para limpiar la consola del Eclipse

	int a, b, res;

	printf("Ingrese un valor para a ");
	scanf("%d", &a);

	printf("Ingrese un valor para b ");
	scanf("%d", &b);

	res = calculoMultiplicar(a, b);	//Recordar siempre declarar una variable donde guardar el resultado de las funciones
	printf("\nEl resultado es %d \n", res);

	//system("PAUSE"); //Es necesario si se ejecuta de un .exe

	return 0;
}

//Escribo la funcion calculoMultiplicar

int calculoMultiplicar(int x, int y)
{
	int tot;
	tot = x * y;
	return tot;
}
