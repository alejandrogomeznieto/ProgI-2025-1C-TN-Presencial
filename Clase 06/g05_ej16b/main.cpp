/*
Una empresa registr� las ventas que efectu� durante un d�a y para cada venta registr� los siguientes datos:

N�mero de Art�culo Vendido
Cantidad de Unidades Vendidas
Importe de la Venta

El lote finaliza cuando se ingresa un registro con N�mero de Art�culo igual a 0. Los Registros se ingresar�n AGRUPADOS por n�mero de Art�culo.
Se pide determinar e informar:
a) La recaudaci�n total para cada uno de los art�culos. Se informan 1 resultado por cada grupo.

b) El n�mero de art�culo con mayor cantidad TOTAL de unidades vendidas. Se informa 1 resultado al final.
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
