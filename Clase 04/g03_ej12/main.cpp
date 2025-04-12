#include <iostream>

using namespace std;

int main()
{
    int num,contPositivo, contNegativo,menorPositivo, mayorNegativo; //bandPositivo, bandNegativo;

    //Inicializacion de contadores
    //contPositivo=0;
    //contNegativo=0;

    //Declarqacion e inicializacion de banderas
    bool bandPositivo = false;
    bool bandNegativo = false;

    for(int i=0; i<5; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>num;

        if(num>0)
        {
            //Positivo
            //contPositivo++;
            //if(contPositivo==1)
            if(!bandPositivo || num<menorPositivo)
            {
                bandPositivo=true;
                menorPositivo=num;
            }
//            else
//            {
//                if(num<menorPositivo)
//                {
//                    menorPositivo=num;
//                }
//            }
        }
        else
        {
            if(num<0)
            {
                //Negativo
                //contNegativo++;
                //if(contNegativo==1)
                if(bandNegativo==false)
                {
                    bandNegativo=true;
                    mayorNegativo=num;
                }
                else
                {
                    if(num>mayorNegativo)
                    {
                        mayorNegativo=num;
                    }
                }
            }
        }
    }

    //Validacion de ingresos con bandera
    if(bandPositivo==1)
    {
        cout<<"El menor de los positivos: "<<menorPositivo<<endl;
    }
    else
    {
        cout<<"No se ingreso ningun positivo"<<endl;
    }
    cout<<"El mayor de los negativos: "<<mayorNegativo<<endl;
    return 0;
}
