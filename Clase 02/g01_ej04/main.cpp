/*
    Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.

    Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.
*/

/*
        TABLA DE CASTEO
    =======================
    int   / int ----> int
    float / int ----> float
    int   / float --> float
    float / float --> float
    =======================
*/

#include <iostream>
using namespace std;

int main()
{
    int asientoTotales, asientosVendidos;
    float porcAsientosVendidos, porcAsientosNoVendidos;

    // Pedido de datos
    cout << "Ingrese asientos totales: ";
    cin >> asientoTotales;

    cout << "Ingrese los pasajes vendidos: ";
    cin >> asientosVendidos;

    // Proceso: obtenemos los promedios
    porcAsientosVendidos = (float)asientosVendidos * 100 / asientoTotales;
    porcAsientosNoVendidos = 100 - porcAsientosVendidos;

    // Salida de info
    cout << endl << "******************************************" << endl;
    cout << "Porcentaje de asientos vendidos %" << porcAsientosVendidos << endl;
    cout << "Porcentaje de asientos no vendidos %" << porcAsientosNoVendidos << endl;

    return 0;
}
