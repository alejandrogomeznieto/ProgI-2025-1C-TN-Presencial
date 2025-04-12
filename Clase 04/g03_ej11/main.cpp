#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo.
*/

int main()
{
    const int CANTIDAD_NUMEROS=5;
    int numero, mayor, menor;

    for(int i=0; i<CANTIDAD_NUMEROS; i++)
    {
        cout<<"Ingrese numero: ";
        cin>>numero;

        //Primer forma de resolverlo.
//        if(i==0)
//        {
//            mayor= numero;
//            menor= numero;
//        }
//        else
//        {
//            if(numero>mayor)
//            {
//                mayor=numero;
//            }
//            else
//            {
//                if(numero<menor)
//                {
//                    menor=numero;
//                }
//            }
//        }

        //Otra forma de resolverlo
        if(i==0 || numero>mayor)
        {
            mayor=numero;
        }
        if(i==0 || numero<menor)
        {
            menor=numero;
        }

    }

    cout<<"El menor fue: "<<menor<<endl;
    cout<<"El mayor fue: "<<mayor<<endl;

    return 0;
}
