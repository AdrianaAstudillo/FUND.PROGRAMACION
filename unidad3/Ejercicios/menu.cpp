#include <iostream>
#include "representantes.h"
#include "estudiantes.h"
using namespace std;

int main() {
    int cantRep, cantEst;
    cout << "Ingrese la cantidad de representantes: ";
    cin >> cantRep;
    Representante rep[cantRep];
    ingresar_representante(rep, cantRep);
    cout << "\nIngrese la cantidad de estudiantes: ";
    cin >> cantEst;
    Estudiante est[cantEst];
    ingresar_estudiantes(est, cantEst, rep, cantRep);
    mostrar_registro(est, cantEst, rep, cantRep);
    return 0;
}

