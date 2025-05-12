#include <iostream> //Libreria
using namespace std;

// Declaración Funciones
int sumar2numerosEnteros(int a, int b);

int main() // Funcion Principal
{
    int n1, n2;
    n1 = 1000;
    n2 = 500;
    int r;

    // Invocamos a la Funcion
    //r = sumar2numerosEnteros(n1, n2);

    cout << "El resultado es: " << sumar2numerosEnteros(n1 + n2, 2050) << endl;

    //r = sumar2numerosEnteros(r, r);

    //cout << "El 2do resultado es: " << r << endl;

    return 0;
}

// Definicion de Funciones
int sumar2numerosEnteros(int a, int b)
{
    int resultado;
    resultado = a + b;
    return resultado;
}
