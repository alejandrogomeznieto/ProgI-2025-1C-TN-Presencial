#include <iostream>
using namespace std;

int main()
{
    const float SUELDO_FIJO = 5000;
    const float PREMIO = 700;
    int cantAutos;
    float sueldo;

    // Ingreso de datos
    cout << "Ingrese la cantidad de autos: ";
    cin >> cantAutos;

    // Proceso
    sueldo = cantAutos * PREMIO;

    // Operador compuesto de asignaci¢n: sueldo = sueldo + SUELDO_FIJO es igual a: sueldo += SUELDO_FIJO
    //sueldo = sueldo + SUELDO_FIJO;
    sueldo +=  SUELDO_FIJO;

    // Salida de info
    cout << "El sueldo a pagar es $" << sueldo << endl;

    return 0;
}
