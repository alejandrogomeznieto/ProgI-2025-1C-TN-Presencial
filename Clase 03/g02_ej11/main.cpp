/*
    Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
    números son positivos, cuantos son negativos y cuantos son iguales a 0.
*/


#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    int contPos = 0, contNeg = 0, contCero = 0;

    // Ingreso de datos
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;
    cout << "Ingrese el tercero valor: ";
    cin >> num3;
    cout << "Ingrese el cuarto valor: ";
    cin >> num4;
    cout << "Ingrese el quinto valor: ";
    cin >> num5;

	// NUMERO 1: Con estructura if - else if - else
    if(num1 > 0) // AVERIGUA POSITIVOS
    {
        contPos++;
		// contPos = contPos + 1;
		// contPos += 1;
    }
    else if(num1 < 0) // AVERIGUA NEGATIVOS
    {
        contNeg++;
    }
    else // POR DESCARTE SABEMOS QUE ES CERO
    {
        contCero++;
    }

	// NUMERO 2: Con estructura anidada If - Else
    if(num2 > 0) // AVERIGUA SI ES POSITIVO
    {
        contPos++;
    }
    else 
	{
		if(num2 < 0) // AVERIGUA SI ES NEGATIVO
		{
			contNeg++;
		}
		else // POR DESCARTE SABEMOS QUE ES CERO
		{
			contCero++;
		}
	}

	// NUMERO 3
    if(num3 > 0)
    {
        contPos++;
    }
    else if(num3 < 0)
    {
        contNeg++;
    }
    else
    {
        contCero++;
    }

	// NUMERO 4
    if(num4 > 0)
    {
        contPos++;
    }
    else if(num4 < 0)
    {
        contNeg++;
    }
    else
    {
        contCero++;
    }

	// NUMERO 5
    if(num5 > 0)
    {
        contPos++;
    }
    else if(num5 < 0)
    {
        contNeg++;
    }
    else
    {
        contCero++;
    }

	// INFORMACION DE SALIDA
    cout << endl << "------------------------" << endl;
    cout << "Cantidad de positivos: " << contPos << endl;
    cout << "Cantidad de negativo:  " << contNeg << endl;
    cout << "Cantidad de ceros:     " << contCero << endl;

    return 0;
}
