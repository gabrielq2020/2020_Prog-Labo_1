 /*
 ============================================================================
 Name        : Clase3-Ejemplo_B
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float calculoArea(int radio);

int main() {

	setbuf(stdout, NULL);

	int numero;
	float resultado;

	printf("Ingrese el radio");
	scanf("%d", &numero);

	resultado = calculoArea(numero);

	printf("El area del circulo es %.2f", resultado);

	return 0;
}

float calculoArea(int radio){
	float area;
	area = radio * radio * 3.14;
	return area;
}
