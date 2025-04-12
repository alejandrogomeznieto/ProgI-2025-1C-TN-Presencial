/*
14
Dada una lista de 7 números enteros informar cual es el primer, el segundo, el anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteúltimo impar: 9 y Último impar: 5.




*/

#include <iostream>
using namespace std;

int main()
{
    int num, numPrimerImpar,numSegundoImpar, numAnteUltimoImpar, numUltimoImpar;
    bool primerImpar = false;
    bool segundoImpar =  false;

    for(int i=0; i<7; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>num;

        if(num%2!=0) //Averigua si es impar
        {
            
            if(!primerImpar) //Primer par
            {
                primerImpar = true;
                numPrimerImpar = num;
            }
            else
            {
                if(!segundoImpar) //Segundo par
                {
                    segundoImpar = true;
                    numSegundoImpar=num;
                }
            }
            numAnteUltimoImpar = numUltimoImpar; //Anteultimo
            numUltimoImpar = num; //Ultimo
        }
        cout<<"Ultimo impar momentaneo: "<<numUltimoImpar<<endl;
    }

    cout<<"El primer impar fue: "<<numPrimerImpar<<endl;
    cout<<"El segundo impar fue: "<<numSegundoImpar<<endl;
    cout<<"El ante ultimo impar fue: "<<numAnteUltimoImpar<<endl;
    cout<<"El ultimo impar fue: "<<numUltimoImpar<<endl;

    return 0;
}
