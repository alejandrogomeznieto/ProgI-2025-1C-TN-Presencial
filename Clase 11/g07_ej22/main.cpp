/*

22- Una empresa comercializa 20 tipos de art�culos y por cada venta realizada
genera un registro con los siguientes datos:

- N�mero de Art�culo (1 a 20)
- Cantidad Vendida

Puede haber varios registros para el mismo art�culo y el �ltimo registro se indica cuando se ingresa un n�mero de art�culo igual a 0. Se pide determinar e informar:

a) El n�mero de art�culo que m�s se vendi� en total.
b) Los n�meros de art�culos que no registraron ventas.
c) Cu�ntas unidades se vendieron del n�mero de art�culo 10.

*/

#include <iostream>
using namespace std;

int main()
{
    int nroArticulo, cantVendida;
    const int ARTS = 20;
    int vCantArts[ARTS] {};

    cout << "Ingrese Nro. Articulo: ";
    cin >> nroArticulo;
    cout << "Cant. Vendida: ";
    cin >> cantVendida;

    while(nroArticulo != 0)
    {
        vCantArts[nroArticulo-1]+=cantVendida;

        cout << "Ingrese Nro. Articulo: ";
        cin >> nroArticulo;
        cout << "Cant. Vendida: ";
        cin >> cantVendida;
    }

    /// PUNTO A
    int maximo = vCantArts[0];
    int nroArtMax = 1;
    for(int i = 1; i < ARTS; i++){
        if(vCantArts[i] > maximo){
            maximo = vCantArts[i];
            nroArtMax = i + 1;
        }
    }

    cout << endl;

    cout << "El Articulo que mas vendio: " << nroArtMax << " vendiendo " <<
    maximo << " Articulos." << endl;

    cout << endl;

    /// PUNTO B
    for(int i=0; i < ARTS; i++){
        if(vCantArts[i] == 0){
            cout << "El Articulo " << i + 1 << " no tuvo Ventas." << endl;
        }
    }

    cout << endl;

    /// PUNTO C
    cout << "El Articulo Nro 10 tuvo " << vCantArts[9] << " ventas." << endl;

    return 0;
}
