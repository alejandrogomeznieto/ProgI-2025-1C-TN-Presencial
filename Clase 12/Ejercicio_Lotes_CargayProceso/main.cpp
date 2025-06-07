#include <iostream>

using namespace std;

#include "funciones_ejercicio26.h"

int main()
{
    setlocale(LC_ALL, "spanish");

    mostrarTituloMenu();

    mostrarEnunciado();

    int opcion;

    do
    {
        system("cls");
        cout << " ---------------------------------" << endl;
        cout << "|         MENÚ PRINCIPAL          |" << endl;
        cout << " ---------------------------------" << endl;
        cout << "|    1. Cargar Lote de Carga      |" << endl;
        cout << "|    2. Mostrar Lote de Carga     |" << endl;
        cout << "|    3. Cargar Lote de Proceso    |" << endl;
        cout << "|    4. Reportes                  |" << endl;
        cout << "|    0. Salir del Programa        |" << endl;
        cout << " ---------------------------------" << endl;
        cout << "|    26. VER ENUNCIADO EJERCICIO  |" << endl;
        cout << " ---------------------------------" << endl;
        cout << "       Opción: ";
        cin >> opcion;

        switch(opcion)
        {
        case 1:
            cout << "Carguemos un Vector" << endl;
            system("pause");
            break;
        case 2:
            cout << "Mostremos el Vector" << endl;
            cout << "Si es que está cargado.. xd" << endl;
            system("pause");
            break;
        case 3:
            cout << "Registremos y procesemos las Ventas" << endl;
            system("pause");
            break;
        case 4:
            cout << "Mostremos lo que hacen los Puntos del Ejercicio" << endl;
            system("pause");
            menuReportes();
            break;
        case 0:
            cout << "Good Bye. Lord Vader!" << endl;
            system("pause");
            break;
        case 26:
            mostrarEnunciado();
            break;
        default:
            cout << "Opción ingresada no es válida." << endl;
            system("pause");
            break;
        }
    }
    while(opcion!=0);

    return 0;
}
