

// -> Comentario simple

/*
    Bloque de Comentario
*/

//*************************************************************


/*
    Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
    por un operario y el valor que se le paga por hora trabajada y listar por pantalla
    el sueldo que le corresponda
*/


#include <iostream>
using namespace std;

int main()
{
    float valorHora; //Declaraci�n de variable simple
    float horas, sueldos; //Declaraci�n de variables m�ltiples

    cout << "El ingrese el valor de la hora: "; //cout -> Salida por pantalla
    cin >> valorHora; // cin -> Entrada de datos

    cout << "Ingre la cantidad de horas: ";
    cin >> horas;

    sueldo = valorHora * horas;

    cout << endl << endl; //endl -> Salto de l�nea
    cout << "El sueldo a cobrar es $" << sueldo; //M�ltiple salidas con un solo COUT


    return 0;
}
