/*
 * utn.h
 *
 *  Created on: 2 abr. 2020
 *      Author: milat
 */

#ifndef UTN_H_
#define UTN_H_



#endif /* UTN_H_ */


//Pedir datos

int getInt(char mensaje[]);

float getFloat(char mensaje[]);

char getChar(char mensaje[]);

char getNumeroRandom(int desde, int hasta, int iniciar);


//Validar datos

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos);


//Operaciones aritmeticas

float getSuma(int numero1, int numero2);

float getResta(int numero1, int numero2);

float getMultipilcacion(int numero1, int numero2);

float getDivision(int numero1, int numero2);

float getFactorial(float numero);




