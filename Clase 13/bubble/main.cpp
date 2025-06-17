#include <iostream>
using namespace std;

int main()
{
    // METODO BURBUJA

    int nros [10] {54, 23, 69, 96, 21, 78, 26, 89, 41, 25};

    int aux;
    // Ordenarlos de mayor a menor
    for(int j = 0; j < 10; j++)
    {
        for(int i = 0; i < 9; i++)
        {
            if(nros[i] < nros[i+1])
            {
                aux = nros[i];
                nros[i] = nros[i+1];
                nros[i+1] = aux;
            }
        }
    }


    for(int i = 0; i < 10; i++)
    {

        cout << nros[i] << ", ";
    }


    return 0;
}
