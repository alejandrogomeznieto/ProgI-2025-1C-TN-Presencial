/*

*/

#include <iostream>
using namespace std;

void saludar(string nombre);

int main()
{

    saludar("Esto es un mensaje");

    return 0;
}

void saludar(string msg)
{
    cout << msg << endl;
}
