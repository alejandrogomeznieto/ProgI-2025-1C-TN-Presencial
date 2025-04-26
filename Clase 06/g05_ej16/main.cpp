/*
Una empresa registr� las ventas que efectu� durante un d�a y para cada venta registr� los siguientes datos:

N�mero de Art�culo Vendido
Cantidad de Unidades Vendidas
Importe de la Venta

El lote finaliza cuando se ingresa un registro con N�mero de Art�culo igual a 0. Los Registros se ingresar�n AGRUPADOS por n�mero de Art�culo.
Se pide determinar e informar:
a) La recaudaci�n total para cada uno de los 3 art�culos. Se informan 3 resultados al final.
b) El n�mero de art�culo con mayor cantidad TOTAL de unidades vendidas. Se informa 1 resultado al final.

*/

#include <iostream>
using namespace std;

int main()
{
    // REGISTRO
    int nroArticulo;
    int unidades;
    float importe;

    // PUNTO A
    float acuArt1, acuArt2, acuArt3;
    acuArt1 = acuArt2 = acuArt3 = 0;

    // PUNTO B
    int acuUni1 = 0, acuUni2 = 0, acuUni3 = 0;

    cout << "Ingrese Nro. Articulo: ";
    cin >> nroArticulo;
    cout << "Cantidad Unidades: ";
    cin >> unidades;
    cout << "Importe: $ ";
    cin >> importe;

    while(nroArticulo != 0){

        switch(nroArticulo){
        case 1:
            acuArt1 += importe * unidades;
            acuUni1 += unidades;
            break;
        case 2:
            acuArt2 += importe * unidades;
            acuUni2 += unidades;
            break;
        case 3:
            acuArt3 += importe * unidades;
            acuUni3 += unidades;
            break;
        default:
            cout << "Numero de Articulo no Existe" << endl;
            break;
        }


        cout << "--------------------------------" << endl;
        cout << "Ingrese Nro. Articulo: ";
        cin >> nroArticulo;
        cout << "Cantidad Unidades: ";
        cin >> unidades;
        cout << "Importe: $ ";
        cin >> importe;
    }

    // PUNTO A
    cout << "Total Acumulado Articulo 1: $ " << acuArt1 << endl;
    cout << "Total Acumulado Articulo 2: $ " << acuArt2 << endl;
    cout << "Total Acumulado Articulo 3: $ " << acuArt3 << endl;

    // PUNTO B
    int acuMayor = 0;
    int articuloMayor;

    if(acuUni1 > acuMayor){
        acuMayor = acuArt1;
        articuloMayor = 1;
    }
    if(acuUni2 > acuMayor){
        acuMayor = acuArt2;
        articuloMayor = 2;
    }
    if(acuMayor < acuUni3){
        acuMayor = acuUni3;
        articuloMayor = 3;
    }

    cout << "El Articulo que m�s vendi� fue el " << articuloMayor << endl;

    return 0;
}
