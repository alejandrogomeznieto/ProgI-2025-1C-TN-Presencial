#include <iostream>
#include "funciones.h"
using namespace std;



/*
    26.Una empresa con varias sucursales, dispone de un primer lote de registros con
    la siguiente información:
        - Número de artículo (1 a 25)
        - Precio Unitario
    Este lote se encuentra desordenado.
    Dispone de un segundo lote con la información de las ventas que se efectuaron
    en cada una de las sucursales, con la siguiente información:
        - Número de artículo (1 a 25)
        - Número de sucursal (1 a 5)
        - Cantidad vendida

    Puede haber más de un registro para el mismo artículo y para la misma
    sucursal.
    El último registro se indica con número de artículo igual a cero.
    Se pide determinar e informar:
    a) Cantidad total vendida por cada artículo.
    b) Monto total recaudado por la empresa.
    c) Número de sucursal que más artículos vendió en total. (sin discriminar por
    artículo)
*/


int main()
{
    setlocale(LC_ALL, "spanish");

    cout << "Guia 7 - Ejercicio 26" << endl;

    /// LOTE DE CARGA (Cantidad de artículos)
    const int ARTS = 25;
    int vNroArts[ARTS];
    float vPrecioArts[ARTS];

    for (int i = 0; i < ARTS ; i++ )
    {
        cout << "Ingrese el número de artículo: ";
        cin >> vNroArts[i];
        cout << "Ingrese el precio: $";
        cin >> vPrecioArts[i];
    }

    cout << "----------------" << endl << endl;

    /// LOTE DE PROCESO (No sabemos cuántos son)
    int nroArt;
    int nroSuc;
    int cantVendida;

    cout << "Ingrese un número de artículo: ";
    cin >> nroArt;
    cout << "Ingrese un número de sucursal: ";
    cin >> nroSuc;
    cout << "Ingrese la cantidad vendida: ";
    cin >> cantVendida;

    //  a) Cantidad total vendida (Recaudado) por cada artículo (25)
    float vAcuTotalVendida[ARTS] {};

    //  c) Número de sucursal que más artículos vendió en total. (sin discriminar por artículo)
    int vCantArtsNroSuc[5] {};

    while(nroArt != 0)
    {
        // Buscamos indice del registro del lote de carga
        int indice = buscarIndice(vNroArts, ARTS, nroArt);

        vAcuTotalVendida[indice] += cantVendida * vPrecioArts[indice];

        vCantArtsNroSuc[nroSuc - 1] += cantVendida;

        cout << "Ingrese un número de artículo: ";
        cin >> nroArt;
        cout << "Ingrese un número de sucursal: ";
        cin >> nroSuc;
        cout << "Ingrese la cantidad vendida: ";
        cin >> cantVendida;
    }

    // Punto A / B
    for(int i = 0; i < ARTS; i++)
    {
        cout << "Cod Art: " << vNroArts[i] << endl;
        cout << "Recaudación: $ " << vAcuTotalVendida[i] << endl;
    }

    // Punto C
    int maximo = vCantArtsNroSuc[0];
    int maximoNroSuc = 1;

    for(int i = 0; i < 5; i++)
    {
        if(vCantArtsNroSuc[i] > maximo)
        {
            maximo = vCantArtsNroSuc[i];
            maximoNroSuc = i + 1;
        }
    }

    cout << "La sucursal con más artículos vendidos fue " << maximoNroSuc << " con un total de " << maximo << endl;

    return 0;
}

void saludar()
{

    cout << nombre << endl;
}
