#include <iostream>

using namespace std;

#include "funciones_ejercicio26.h"

void mostrarTituloMenu()
{
    cout << " ________________________________________"  << endl;
    cout << "|                                        |" << endl;
    cout << "|   PROGRAMACI�N 1 - Turno Noche         |" << endl;
    cout << "|   Comisi�n: Presencial                 |" << endl;
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
    cout << "|   26. Una empresa con varias sucursales, dispone de un primer lote de registros con la siguiente informaci�n:  |" << endl;
    cout << "|      - N�mero de art�culo (1 a 25)                                                                             |" << endl;
    cout << "|      - Precio Unitario                                                                                         |" << endl;
    cout << "|   Este lote se encuentra desordenado.                                                                          |" << endl;
    cout << "|   Dispone de un segundo lote con la informaci�n de las ventas que se efectuaron en cada una de las sucursales, |" << endl;
    cout << "|   con la siguiente informaci�n:                                                                                |" << endl;
    cout << "|      - N�mero de art�culo (1 a 25)                                                                             |" << endl;
    cout << "|      - N�mero de sucursal (1 a 5)                                                                              |" << endl;
    cout << "|      - Cantidad Vendida                                                                                        |" << endl;
    cout << "|   Puede haber m�s de un registro para el mismo art�culo y para la misma sucursal.                              |" << endl;
    cout << "|   El �ltimo registro se indica con n�mero de art�culo igual a cero.                                            |" << endl;
    cout << "|                                                                                                                |" << endl;
    cout << "|   Se pide determinar e informar:                                                                               |" << endl;
    cout << "|                                                                                                                |" << endl;
    cout << "|   a) Cantidad total vendida por cada art�culo.                                                                 |" << endl;
    cout << "|   b) Monto total recaudado por la empresa.                                                                     |" << endl;
    cout << "|   c) N�mero de sucursal que m�s art�culos vendi� en total. (sin discriminar por art�culo)                      |" << endl;
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
        cout << "|                 MEN� REPORTES                   |" << endl;
        cout << " -------------------------------------------------" << endl;
        cout << "|    a. Cantidad total vendida por cada Articulo  |" << endl;
        cout << "|    b. Monto total recaudado por la empresa      |" << endl;
        cout << "|    c. Sucursal que m�s Art�culos vendi�         |" << endl;
        cout << "|    S. Volver                                    |" << endl;
        cout << " -------------------------------------------------" << endl;
        cout << "                  Opci�n: ";
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
            cout << "Volviendo al Men� Principal..." << endl;
            system("pause");
            break;
        default:
            cout << "Opci�n ingresada no es v�lida." << endl;
            system("pause");
            break;
        }

    }
    while(opcion != 's' && opcion != 'S');
}
