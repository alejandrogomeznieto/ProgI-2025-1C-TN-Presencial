#include <iostream>
#include <ctime>
using namespace std;

// FUNCIONES JUEGO
void comenzarJuego();
void mostrarUltimoGanador();

/// MENU
void iniciarMenu();
int mostrarOpciones();
void analizarOpciones(int opcion);

int main()
{
    //iniciarMenu();

    srand(time(NULL)); // Iniciar una sola vez

    int numeroSecreto;
    int numeroUsuario;

    int vIntentos[2]{};
    string nombresJugadores[2];

    for(int turnoJug = 1; turnoJug <= 2; turnoJug++)
    {
        bool gameOver = false;

        numeroSecreto = rand() % 100 + 1; // Genero un numero random entre 1 a 100

        // cout << numeroSecreto << endl;

        cout << "Ingrese su Nombre: ";
        cin.ignore();
        getline(cin, nombresJugadores[turnoJug-1]);


        //cout << "Turno Jugador: " << nombresJugadores[turnoJug-1] << endl;

        do
        {
            vIntentos[turnoJug-1]++;
            cout << "Ingrese numero " << nombresJugadores[turnoJug-1] << ": ";
            cin >> numeroUsuario;

            if(numeroUsuario > numeroSecreto)
            {
                cout << "Te pasaste." << endl;
            }
            else if(numeroUsuario < numeroSecreto)
            {
                cout << "Te falta." << endl;
            }
            else
            {
                cout << "Adivinaste!!!" << endl;
                gameOver = true;
            }
        }
        while(!gameOver);

        cout << "Lo hiciste en " << vIntentos[turnoJug-1] << " intentos." << endl;
    }

    if(vIntentos[0] > vIntentos[1])
    {
        cout << "Gano el Jugador "<< nombresJugadores[1] <<". Con " << vIntentos[1] << " intentos." << endl;
    }
    else if(vIntentos[0] < vIntentos[1])
    {
        cout << "Gano el Jugador "<< nombresJugadores[0] <<". Con " << vIntentos[0] << " intentos." << endl;
    }
    else
    {
        cout << "Empataron." << endl;
    }

    return 0;
}

void iniciarMenu()
{
    int opcion;

    do
    {
        opcion = mostrarOpciones();
        analizarOpciones(opcion);
    }
    while(opcion != 0);
}

int mostrarOpciones()
{
    int opcion;
    system("cls");

    // Menu de opciones
    cout << "-----MENÚ----- " << endl;
    cout << "1. JUGAR" << endl;
    cout << "2. ULTIMO GANADOR" << endl;
    cout << "0. SALIR" << endl;
    cout << "-------------- " << endl;
    cout << "Ingrese una opción: ";
    cin >> opcion;
    cout << endl << endl;

    return opcion;

}

void analizarOpciones(int opcion)
{
    // Limpiar pantalla
    system("cls");

    switch(opcion)
    {
    case 1:
        comenzarJuego();
        break;
    case 2:
        mostrarUltimoGanador();
        break;
    case 0:
        cout << "Gracias por jugar" << endl;
        break;
    default:
        cout << "La opción ingresada fue incorrecta" << endl;
        break;
    }

    // Pausa
    system("pause");
}


// Funcion que se encarga de comenzarJuego
void comenzarJuego()
{

}

// Funcion que s encarga de mostrarUltimoGanador
void mostrarUltimoGanador()
{


}
