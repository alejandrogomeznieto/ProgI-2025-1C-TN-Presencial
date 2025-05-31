/*
Dada una lista de 10 n�meros, cargarlos en un vector. Luego ingresar un
n�mero e informar la cantidad de veces que ese n�mero aparece en el vector.
*/

#include <iostream>
using namespace std;

int buscarRepetidos(int v[], int tam, int nro);

int main()
{

    const int TAM = 10;
    int nro;

    int vec[TAM] {12, 35, 64, 75, 34, 75, 68, 64, 45, 64};

    cout << "Ingrese un numero: ";
    cin >> nro;

    cout << buscarRepetidos(vec, TAM, nro) << endl;

    return 0;
}

int buscarRepetidos(int vec[], int TAM, int nro)
{
    int indiceContador = 0;

    for (int i = 0; i < TAM ; i++ )
    {
        if(nro == vec[i])
        {
            indiceContador++;
        }
    }

    return indiceContador;
}
