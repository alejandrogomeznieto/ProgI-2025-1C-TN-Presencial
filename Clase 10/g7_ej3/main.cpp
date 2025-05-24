/*
- Leer 10 números y guardarlos en un vector.
- Determinar e informar cuál es el valor máximo y su posición dentro del vector.
*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int tam);
int buscarMaximoyPosicion(int v[], int tam, int &pos);

int main()
{
    const int TAM = 10;
    int vNros[TAM];

    cargarVector(vNros, TAM);

    int posMax;
    int maximo = buscarMaximoyPosicion(vNros, TAM, posMax);

    cout << "El Maximo es: " << maximo << endl;
    cout << "Su Posicion: " << posMax << endl;

    return 0;
}

void cargarVector(int v[], int tam)
{
    for(int i=0; i < tam; i++)
    {
        cout << "Ingrese numero: ";
        cin >> v[i];
    }
}

int buscarMaximoyPosicion(int v[], int tam, int &pos)
{
    int maximo = v[0];
    int posMax = 0;

    //pos = 0;
    for (int i=1; i < tam ; i++ )
    {
        if(v[i] > maximo){
            maximo = v[i];
            posMax = i;
        }
    }
    pos = posMax;
    return maximo;
}
