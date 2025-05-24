/*
Una escuela registra las notas finales de todos sus alumnos. Por cada alumno registra el siguiente dato:

- NroCurso (1-20)
- Nota

La carga de registros corta con un ingreso de número de curso igual a 0.
Los registros no se encuentra ordenados ni agrupados.

Se nos pide:
- Listar la cantidad de alumnos por cada uno de los cursos.

*/

#include <iostream>
using namespace std;

int main()
{
    int nroCurso, nota;
    //int contCurso1 = 0, contCurso2 = 0, contCurso3 = 0;
    int vContAlumnos[20] = {};

     cout << "Nro. Curso: ";
    cin >> nroCurso;
    cout << "Nota: ";
    cin >> nota;

    while(nroCurso != 0)
    {
        /*switch(nroCurso)
        {
        case 1:
            //contCurso1++;
            vContAlumnos[0]++;
            break;
        case 2:
            //contCurso2++;
            vContAlumnos[1]++;
            break;
        case 3:
            //contCurso3++;
            vContAlumnos[2]++;
            break;
        }*/

        vContAlumnos[nroCurso - 1]++;

        cout << "Nro. Curso: ";
        cin >> nroCurso;
        cout << "Nota: ";
        cin >> nota;
    }

    /*cout << "Curso 1: " << vContAlumnos[0] << " alumnos." << endl;
    cout << "Curso 2: " << vContAlumnos[1] << " alumnos." << endl;
    cout << "Curso 3: " << vContAlumnos[2] << " alumnos." << endl;*/

    for(int i = 0; i < 20; i++)
    {
        cout << "Curso " << i + 1 << ": " << vContAlumnos[i] << " alumnos." << endl;
    }

    return 0;
}
