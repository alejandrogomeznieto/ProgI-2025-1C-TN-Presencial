/*
Se dispone de una lista de 10 grupos de números enteros separados entre ellos por ceros. Se pide determinar e informar:

a) Informar el promedio de cada grupo. Se informa 1 resultado por cada grupo.
b) Determinar e informar el valor mínimo de todos los grupos, indicando en qué grupo se encontró y su posición relativa en el mismo. Se informan 3 resultados al final.
c) El mayor de los promedios y a que grupo pertenecía. Se informan 2 resultados al final.

*/

/*
11
62
43
32
0
53
86
23
0
96
90
0
89
25
15
0
29
95
79
57
13
0
10
3
52
0
31
63
37
0
56
97
1
38
0
30
62
5
23
0
76
77
20
0

*/

#include <iostream>
using namespace std;

int main()
{
    int nro, conPromedioGrupo, acuPromedioGrupo;
    float promGrupo;

    int minGrupo, posGrupo, posRelativa;
    bool esPrimerIngreso = true;

    float promMaximo;
    int promMaximoGrupo;
    bool esPrimerPromedio = true;


        // Inicializamos cosas del Lote total

    for(int i = 0; i < 10; i++) // GRUPOS
    {

        // Inicializamos cosas de grupos
        conPromedioGrupo = 0;
        acuPromedioGrupo = 0;

        cout << "Ingrese un número: ";
        cin >> nro;

        while(nro != 0) // INGRESOS
        {
            //Procesamos los datos

            //PUNTO A
            conPromedioGrupo++;
            acuPromedioGrupo += nro;

            //PUNTO B
            if(esPrimerIngreso || nro < minGrupo)
            {
                esPrimerIngreso = false;
                minGrupo = nro;
                posGrupo = i + 1;
                posRelativa = conPromedioGrupo;
            }

            cout << "Ingrese un número: ";
            cin >> nro;
        }

        // Mostramos cosas de grupos
        promGrupo = (float)acuPromedioGrupo / conPromedioGrupo;

        // PUNTO C
        if(esPrimerPromedio || promGrupo > promMaximo)
        {
            esPrimerPromedio = false;
            promMaximo = promGrupo;
            promMaximoGrupo = i + 1;
        }

        cout << endl << "El promedio del grupo fue de " << promGrupo << endl << endl;
    }

    // Mostramos cosas del Lote total
    cout << endl << "-------------------------" << endl;
    cout << "El menor valor fue " << minGrupo;
    cout << " en el grupo " << posGrupo;
    cout << " en la posición relativa " << posRelativa << endl;
    cout << "El promedio máximo del grupo " << promMaximoGrupo << " fue de " << promMaximo << endl;

    return 0;
}
