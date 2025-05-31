/*
Hacer un programa para llenar un vector de 10 elementos con el formato: 1, 0,1, 0, 1, 0, 1, 0, 1, 0. Luego mostrar los números por pantalla. EL USUARIO NO INGRESA NINGÚN VALOR EN ESTE PROGRAMA
*/

// 1    0   1   0   1   0   1   0
// 0    1   2   3   4   5   6   7

#include <iostream>
using namespace std;

void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);

int main()
{
    const int TAM = 10;
    int vec[TAM] {};

    // CARGAMOS EL VECTOR
    cargarVector(vec, TAM);

    // MOSTRAR EL VECTOR
    mostrarVector(vec, TAM);

    return 0;
}

// CARGAMOS EL VECTOR
void cargarVector(int vec[], int tam)
{
    for (int i = 0; i < tam ; i++ )
    {
        if(i % 2 == 0) // Si i es par ponemos 1
        {
            vec[i] = 1;
        }
        else // Si i no es par ponemos 0
        {
            vec[i] = 0;
        }
    }
}

// MOSTRAR EL VECTOR
void mostrarVector(int vec[], int tam)
{
    for (int i = 0; i < tam ; i++ )
    {
        cout << vec[i] << ", ";
    }

}
