/*
    Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40
    marrones y 49 grises. Se pide hacer un programa donde se ingresen una
    ventas. Cada venta está compuesta por:

    - Cantidad de carteras
    - Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

    Los costos de cada cartera son:
    Blanco: $1000
    Negro: $2000
    Marrón: $3000
    Gris: $4000


    Calcular e informar:

    - Cuántas carteras quedaron.
    - Costo total de la venta.
    - Urgencia. Si es efectivo se hace un descuento de 10%
*/

#include <iostream>
using namespace std;

int main()
{
    //VARIABLES STOCK
    int cartBlancas = 45;
    int cartNegras = 50;
    int cartMarrones = 40;
    int cartGrises = 49;

    float costoCartera;

    //VARIABLES DE INGRESO
    int cantCarteras, tipoCartera;
    char urgencia;

    float costoTotal;

    cout << "Ingrese el Tipo de Cartera: ";
    cin >> tipoCartera;
    cout << "Ingrese la Cantidad de Carteras: ";
    cin >> cantCarteras;
    cout << "¿Paga Efectivo? (S/N): ";
    cin >> urgencia;

    switch(tipoCartera){
    case 1: // CARTERA BLANCA
        costoCartera = 1000;
        cartBlancas -= cantCarteras; // cartBlancas = cartBlancas - cantCarteras
        break;
    case 2: // CARTERA NEGRA
        costoCartera = 2000;
        cartNegras -= cantCarteras;
        break;
    case 3: // CARTERA MARRON
        costoCartera = 3000;
        cartMarrones -= cantCarteras;
        break;
    case 4: // CARTERA GRIS
        costoCartera = 4000;
        cartGrises -= cantCarteras;
        break;
    }

    // PUNTO B
    costoTotal = costoCartera * cantCarteras;

    // PUNTO C
    if(urgencia == 'S' || urgencia == 's'){
        costoTotal = costoTotal * 0.9;
        //costoTotal *= 0.9;
    }

    // PUNTO B
    cout << endl << "El Costo Total es de $ " << costoTotal << endl;

    // PUNTO A
    cout << endl;
    cout << "Quedaron " << cartBlancas << " Carteras Blancas" << endl;
    cout << "Quedaron " << cartNegras << " Carteras Negras" << endl;
    cout << "Quedaron " << cartMarrones << " Carteras Marrones" << endl;
    cout << "Quedaron " << cartGrises << " Carteras Grises" << endl;

    return 0;
}
