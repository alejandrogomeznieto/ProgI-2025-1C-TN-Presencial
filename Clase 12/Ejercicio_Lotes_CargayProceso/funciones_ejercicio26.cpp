#include <iostream>

using namespace std;

#include "funciones_ejercicio26.h"

void mostrarTituloMenu()
{
    cout << " ________________________________________"  << endl;
    cout << "|                                        |" << endl;
    cout << "|   PROGRAMACIÓN 1 - Turno Noche         |" << endl;
    cout << "|   Comisión: Presencial                 |" << endl;
    cout << "|                                        |" << endl;
    cout << "| EJERCICIO 26 - LOTE DE CARGA Y PROCESO |" << endl;
    cout << "|________________________________________|" << endl;

    system("pause");
}

void mostrarEnunciado()
{
    system("cls");
    cout << " ________________________________________________________________________________________________________________"  << endl;
    cout << "|                                                                                                                |" << endl;
    cout << "|   26. Una empresa con varias sucursales, dispone de un primer lote de registros con la siguiente información:  |" << endl;
    cout << "|      - Número de artículo (1 a 25)                                                                             |" << endl;
    cout << "|      - Precio Unitario                                                                                         |" << endl;
    cout << "|   Este lote se encuentra desordenado.                                                                          |" << endl;
    cout << "|   Dispone de un segundo lote con la información de las ventas que se efectuaron en cada una de las sucursales, |" << endl;
    cout << "|   con la siguiente información:                                                                                |" << endl;
    cout << "|      - Número de artículo (1 a 25)                                                                             |" << endl;
    cout << "|      - Número de sucursal (1 a 5)                                                                              |" << endl;
    cout << "|      - Cantidad Vendida                                                                                        |" << endl;
    cout << "|   Puede haber más de un registro para el mismo artículo y para la misma sucursal.                              |" << endl;
    cout << "|   El último registro se indica con número de artículo igual a cero.                                            |" << endl;
    cout << "|                                                                                                                |" << endl;
    cout << "|   Se pide determinar e informar:                                                                               |" << endl;
    cout << "|                                                                                                                |" << endl;
    cout << "|   a) Cantidad total vendida por cada artículo.                                                                 |" << endl;
    cout << "|   b) Monto total recaudado por la empresa.                                                                     |" << endl;
    cout << "|   c) Número de sucursal que más artículos vendió en total. (sin discriminar por artículo)                      |" << endl;
    cout << " ________________________________________________________________________________________________________________"  << endl;
    system("pause");
}

void menuReportes()
{

    char opcion;

    do
    {
        system("cls");
        cout << " -------------------------------------------------" << endl;
        cout << "|                 MENÚ REPORTES                   |" << endl;
        cout << " -------------------------------------------------" << endl;
        cout << "|    a. Cantidad total vendida por cada Articulo  |" << endl;
        cout << "|    b. Monto total recaudado por la empresa      |" << endl;
        cout << "|    c. Sucursal que más Artículos vendió         |" << endl;
        cout << "|    S. Volver                                    |" << endl;
        cout << " -------------------------------------------------" << endl;
        cout << "                  Opción: ";
        cin >> opcion;

        switch(opcion)
        {
        case 'a':
        case 'A':
            cout << "PUNTO A" << endl;
            system("pause");
            break;
        case 'b':
        case 'B':
            cout << "PUNTO B" << endl;
            system("pause");
            break;
        case 'c':
        case 'C':
            cout << "PUNTO C" << endl;
            system("pause");
            break;
        case 's':
        case 'S':
            cout << "Volviendo al Menú Principal..." << endl;
            system("pause");
            break;
        default:
            cout << "Opción ingresada no es válida." << endl;
            system("pause");
            break;
        }

    }
    while(opcion != 's' && opcion != 'S');
}
