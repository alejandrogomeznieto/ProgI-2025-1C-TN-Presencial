/*

*/

#include <iostream>
using namespace std;

void funcionPasajePorValor(int a);
void funcionPasajePorReferencia(int &a);

void ingreseNro(int &nro);

int main()
{
    int nro = 10;
    cout << "Variable: " << nro << endl;
    funcionPasajePorReferencia(nro);
    funcionPasajePorValor(10);
    cout << "Variable: " << nro << endl;

    return 0;
}

void funcionPasajePorValor(int a)
{
    cout << "Valor: " << a << endl;
    a++;
    cout << "Valor: " << a << endl;
}

void funcionPasajePorReferencia(int &a)
{
    cout << "Referencia: " << a << endl;
    a++;
    cout << "Referencia: " << a << endl;

}

void ingreseNro(int &nro)
{

    cout << "Ingrese numero: ";
    cin >> nro;
}
