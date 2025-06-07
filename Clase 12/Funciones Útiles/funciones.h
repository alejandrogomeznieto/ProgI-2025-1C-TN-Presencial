#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/* Usar en el main (si es un proyecto), o en el cpp para que funcionen.

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>

using namespace std;
#include "funciones.h"
*/

/// DECLARACI�N/PROTOTIPO DE FUNCIONES

/// Asigna valores a cada una de las posiciones del vector
void cargarVector(int v[], int tam);

/// Muestra lo que contiene cada una de las posiciones del vector
void mostrarVector(int v[], int tam);

/// Pone en 0 todas las posiciones del vector
void ponerCero(int v[], int tam);

/// Devuelve el indice que ocupa un n�mero que se env�a como par�metro. Devuelve el primer indice que encuentra el n�mero. Si no lo encuentra devuelve -1
int buscarIndice(int v[],int tam, int numero);

/// Cuenta la cantidad de veces que se repite un n�mero en el vector
int contarNumerosRepetidos(int v[], int numero, int tam);

/// Devuelve  la posici�n (primera) que ocupa el m�ximo en el vector
int maximoVector(int v[], int tam);

/// Devuelve  la posici�n (primera) que ocupa el m�nimo en el vector
int minimoVector(int v[], int tam);

/// Asigna valores aleatorios a cada al vector
void cargarAleatorio(int v[], int tam, int limite);

/// Ordena de menor a mayor un vector
void ordenarVector(int v[], int tam );

/// Suma los valores contenidos en el vector
int sumarVector(int v[], int tam );

/// Copia el vector v en v2
void copiarVector(int v[], int v2[],int tam );

/// Compara los dos vectores que recibe. Si son iguales devuelve true, si no devuelve false
bool compararVectores(int v[], int v2[],int tam );

#endif // FUNCIONES_H_INCLUDED

