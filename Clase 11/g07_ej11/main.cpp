/*
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un
número e informar el primer índice donde ese número aparece en el vector. En caso de no aparecer se mostrará el valor índice igual a -1.
*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int tam);
int buscarIndice(int v[], int tam, int b);

int main()
{
    const int TAM = 10;
    int nro, indiceEncontrado;

    int vec[TAM] = {15, 65, 78, -45, 2, 47, -45, 10, 35, 48};

    //cargarVector(vec, TAM);

    cout << "Ingrese un numero: ";
    cin >> nro;

    indiceEncontrado = buscarIndice(vec, TAM, nro);

    cout << indiceEncontrado << endl;

    return 0;
}


void cargarVector(int v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> v[i];
    }

}


//int buscarIndice(int vec[], int tam, int nro)
//{
//    int indiceEncontrado = -1;
//
//    for (int i = 0; i < tam ; i++)
//    {
//        if(nro == vec[i])
//        {
//            indiceEncontrado = i;
//            break;
//        }
//    }
//
//    return indiceEncontrado;
//}

int buscarIndice(int vec[], int tam, int nro)
{
    for (int i = 0; i < tam ; i++)
    {
        if(nro == vec[i])
        {
            return i;
        }
    }

    return -1;
}
