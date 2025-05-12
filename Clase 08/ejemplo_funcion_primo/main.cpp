#include <iostream>
using namespace std;

int contarDivisores(int num);
bool esPrimo(int num);

int main()
{
    int n;

    cout << "Ingrese numero: ";
    cin >> n;

    bool r = esPrimo(n);

    if(r == true)
    {
        cout << "Es Primo porque tiene " << contarDivisores(n) << " divisores." << endl;
    }
    else
    {
        cout << "No es Primo" << endl;
    }

    return 0;
}

bool esPrimo(int num)
{
    //int contDiv=0;

    if(num <= 1)
    {
        return false;
    }

    if(contarDivisores(num) == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int contarDivisores(int num)
{
    int contDiv=0;
    for(int i=1; i<=num; i++)
    {
        if(num%i == 0)
        {
            contDiv++;
        }
    }

    return contDiv;
}
