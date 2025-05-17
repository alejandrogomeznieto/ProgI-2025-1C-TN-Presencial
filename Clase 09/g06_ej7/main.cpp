/*
Escribir una función CalcularMaximoAbsoluto que reciba dos números y
retorne el máximo absoluto de ambos. Por ejemplo el máximo absoluto de los
números -40 y 20 es 40.
Hacer un programa para ingresar dos números y, utilizando
CalcularMaximoAbsoluto, emita luego el número mayor absoluto de ambos.
*/

#include <iostream>
using namespace std;

#include "funciones.h"

int main()
{
    cout << "El maximo absoluto de -40 y 20: " << calcularMaximoAbsoluto(-40, 20);

    return 0;
}
