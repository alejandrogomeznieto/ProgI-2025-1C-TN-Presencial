/*
Hacer un programa para ingresar una lista de 10 n�meros y luego informar cu�ntos de los n�meros ingresados son primos. Se informa 1 resultado al final.

2,3,5,7,11,13,17,19,23,29,31,37,41,43,47
*/

#include <iostream>
using namespace std;

int main()
{
    int nro, conDivisores, conPrimo = 0;

    for(int i = 0; i < 10; i++) // NUMEROS
    {
        cout << "Ingrese un n�mero: ";
        cin >> nro;

        // PROCESAMOS DATOS
        conDivisores = 0;

        for(int j = 1; j <= nro; j++) // RANGOS
        {
            if(nro%j == 0)
            {
                conDivisores++;
            }
        }

        if(conDivisores == 2)
        {
            conPrimo++;
        }
    }

    cout << "La cantidad de n�meros primos fue  de " << conPrimo << endl;

    return 0;
}
