/*
    Hacer un programa, ingresar 3 números enteros, calcular promedio e informar cuáles son mayores al promedio.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    float promedio;

    // Ingreso
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    // Obtenemos el promedio
    promedio = (num1 + num2 + num3) / 3.0;
    cout << endl << "El promedio es " << promedio << endl;

    // Calcular si numero 1 es mayor
    if(num1 > promedio)
    {
        cout << "El numero " << num1 << " es mayor al promedio";
    }
    
    // Calcular si numero 2 es mayor
    if(num2 > promedio)
    {
        cout << "El numero " << num2 << " es mayor al promedio";
    }
    
    // Calcular si numero 3 es mayor
    if(num3 > promedio)
    {
        cout << "El numero " << num3 << " es mayor al promedio";
    }
    
    // En caso de no haber mayores, emite un mensaje
    if(num1 <= promedio && num2 <= promedio && num3 <= promedio)
    {
        cout << "No hubo numeros mayores  al promedio" << endl;
    }

    return 0;
}
