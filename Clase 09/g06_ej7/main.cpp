/*
Escribir una funci�n CalcularMaximoAbsoluto que reciba dos n�meros y
retorne el m�ximo absoluto de ambos. Por ejemplo el m�ximo absoluto de los
n�meros -40 y 20 es 40.
Hacer un programa para ingresar dos n�meros y, utilizando
CalcularMaximoAbsoluto, emita luego el n�mero mayor absoluto de ambos.
*/

#include <iostream>
using namespace std;

#include "funciones.h"

int main()
{
    cout << "El maximo absoluto de -40 y 20: " << calcularMaximoAbsoluto(-40, 20);

    return 0;
}
