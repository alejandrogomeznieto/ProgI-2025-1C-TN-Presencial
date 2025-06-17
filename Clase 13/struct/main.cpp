#include <iostream>
using namespace std;


struct Articulo{
    int codigo;
    float precio;
    int stock;
    string nombre;
};

void cargarStruct(Articulo &art){
    cin >> art.codigo;

    cin.ignore();
    getline(cin, art.nombre);

    cin >> art.precio;

    cin >> art.precio;
}

void mostrarVecStruct(Articulo vArt[])

int main()
{
    // STRUCTS
    Articulo art1;

    art1.nombre = "Impresora";
    art1.codigo = 123;
    art1.precio = 100.0;
    art1.stock = 10;

    //cout << "Nombre: " << art1.nombre << endl;

    Articulo vArts[10];

    for(int i=0; i<10;i++){
        cin >> vArts[i].codigo;

        cin.ignore();
        getline(cin, vArts[i].nombre);

    }

    return 0;
}
