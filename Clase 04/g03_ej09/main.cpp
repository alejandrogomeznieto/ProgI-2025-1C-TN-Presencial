#include <iostream>
using namespace std;

int main()
{
    int num, mayor;

//    cout << "Ingrese un numero: ";
//    cin >> num;
//
//    mayor = num;

    for(int i = 0; i < 4; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        if(i == 0 || num > mayor) // Primera vuelta
        {
            mayor = num;
        }
//        else
//        {
//            if(num > mayor)
//            {
//                mayor = num;
//            }
//        }
    }

    cout << "El mayor fue " << mayor << endl;

    return 0;
}
