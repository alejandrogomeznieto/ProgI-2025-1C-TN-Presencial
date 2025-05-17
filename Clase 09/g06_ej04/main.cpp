/*
Hacer una función llamada EsPrimoSophieGermain que reciba un número
entero y determine si el mismo es un número primo de Sophie Germain. Debe
devolver verdadero si lo es y falso si no lo es.
*/

#include <iostream>
using namespace std;

#include "funciones.h"

bool esPrimoSophieGermain(int nro);
bool esPrimo(int nro);
int calcularDivisores(int nro);

int main()
{
    int nro;
    cout << "Ingrese un numero: ";
    cin >> nro;

    if(esPrimoSophieGermain(nro))
    {
        cout << "Es Shophie Germain";
    }


    return 0;
}

bool esPrimoSophieGermain(int nro)
{
    if(esPrimo(nro))
    {
        return esPrimo(2 * nro + 1);
    }
    else
    {
        return false;
    }
}

bool esPrimo(int nro)
{
    return calcularDivisores(nro) == 2;
}

int calcularDivisores(int nro)
{
    int cont = 0;

    for(int i = 1; i <= nro; i++)
    {
        if(nro%i == 0)
        {
            cont++;
        }
    }

    return cont;
}
