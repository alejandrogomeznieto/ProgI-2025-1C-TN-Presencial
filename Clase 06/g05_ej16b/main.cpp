/*
Una empresa registró las ventas que efectuó durante un día y para cada venta registró los siguientes datos:

Número de Artículo Vendido
Cantidad de Unidades Vendidas
Importe de la Venta

El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0. Los Registros se ingresarán AGRUPADOS por número de Artículo.
Se pide determinar e informar:
a) La recaudación total para cada uno de los artículos. Se informan 1 resultado por cada grupo.

b) El número de artículo con mayor cantidad TOTAL de unidades vendidas. Se informa 1 resultado al final.
*/

#include <iostream>
using namespace std;

int main()
{

    int nroArticulo;
    int unidades;
    float monto;

    int nroArticuloAnterior;

    // PUNTO A
    float recaudacion;

    cout << "Ingrese Articulo: ";
    cin >> nroArticulo;
    cout << "Unidades: ";
    cin >> unidades;
    cout << "Monto: $ ";
    cin >> monto;

    while(nroArticulo != 0){

        nroArticuloAnterior = nroArticulo;

        recaudacion = 0;

        while(nroArticulo == nroArticuloAnterior){

            recaudacion += unidades * monto;

            cout << "Ingrese Articulo: ";
            cin >> nroArticulo;
            cout << "Unidades: ";
            cin >> unidades;
            cout << "Monto: $ ";
            cin >> monto;
        }

        cout << "------------------------------------------------------" <<endl;
        // PUNTO A
        cout << "Total Recaudado del Articulo " << nroArticuloAnterior << " fue de $ " << recaudacion << endl;

    }

    return 0;
}
