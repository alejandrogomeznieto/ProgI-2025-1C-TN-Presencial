/*
    MEN� DE OPCIONES
    - SUMAR
    - RESTA
    - MULTIPLICACI�N
    - DIVISI�N

*/

#include <iostream>
using namespace std;

// Declaraciones
void sumar();
void restar();

int main()
{

    int opcion;

    do
    {

        // Limpiar pantalla
        system("cls");

        // Menu de opciones
        cout << "-----MENU----- " << endl;
        cout << "1. SUMAR" << endl;
        cout << "2. RESTAR" << endl;
        cout << "0. SALIR" << endl;
        cout << "-------------- " << endl;
        cout << "Ingrese una opci�n: ";
        cin >> opcion;
        cout << endl << endl;

        // Limpiar pantalla
        system("cls");

        // Opciones del menu
        switch(opcion)
        {
        case 1:
            sumar();
            break;
        case 2:
            restar();
            break;
        case 0:
            cout << "Gracias, vuelva prontos" << endl;
            break;
        default:
            cout << "La opci�n ingresada fue incorrecta" << endl;
            break;
        }

        // Pausa
        system("pause");

    }
    while(opcion != 0);

    return 0;
}

// Funcion que se encarga de sumar
void sumar()
{
    int a, b, r;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    r = a + b;

    cout << "La suma de " << a << " + " << b << " = " << r << endl;

}

// Funcion que s encarga de restar
void restar()
{
    int a, b, r;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    r = a - b;

    cout << "La resta de " << a << " - " << b << " = " << r << endl;

}

