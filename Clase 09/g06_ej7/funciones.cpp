#include "funciones.h"

int calcularMaximoAbsoluto(int a, int b)
{
    a = calcularAbsoluto(a);
    b = calcularAbsoluto(b);

    if(a > b)
        return a;
    else
        return b;
}

int calcularAbsoluto(int a)
{
    if(a < 0)
        a = a * -1;

    return a;
}
