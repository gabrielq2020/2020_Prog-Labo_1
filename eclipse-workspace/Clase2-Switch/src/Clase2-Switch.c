 /*
 ============================================================================
 Name        : Clase2-Switch
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	setbuf(stdout, NULL);

	//declaro las variables que voy a utilizar
	int hora;

	//tomo la hora ingresada
	printf("Ingrese la hora: \n");
	scanf("%d", &hora);

	switch(hora)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			printf("Es de ma�ana \n");
			break;
		default:
			printf("NO es de ma�ana \n");
			break;
	}

/*
	//CHAR
	//tomo la hora ingresada
	char letra;
	letra = 'p';

	switch(letra)
	{
	    case 'a':
	    printf("Es de ma�ana \n");
	        break;
	    default:
	        printf("NO es de ma�ana \n");
	        break;
	 }
*/

	//VALORES BOOOLEANOS
/*	int hora;
	printf("Ingrese la hora: \n");
	scanf("%d", &hora);
  	switch(hora>6){
		case 1:
			printf("Es de ma�ana \n");
			break;
		case 0:  // 0 = falso
			printf("NO es de ma�ana \n");
			break;
}

*/

//-switch realiza las comparaciones usando el operador === (igual estricto).
//-Se permite evaluar tanto n�meros como cadenas de texto o valores booleanos.
//-Switch solo permite evaluar valores concretos de la expresi�n:
//       no permite evaluar intervalos (pertenencia de la expresi�n a un intervalo o rango)
//       ni expresiones compuestas.
//-Tambi�n se admiten situaciones como switch (edad+1>18) donde la expresi�n devuelve un booleano

/*
	 switch(laHora>11)
	 {
		 case true:
		 alert("Es verdadero");
		 break;
		 case false:
		 alert("Es falso");
		 break;
	 }
*/


	return 0;
}
