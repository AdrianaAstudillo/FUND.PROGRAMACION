#include <iostream>
#include "Biblioteca.h"

using namespace std;

int main() {
    int opcion;
    int n;
    Libro* libros = nullptr;
    bool datosIngresados = false;

    do {
        cout << "\nMENU\n";
        cout << "1. Ingresar libros\n";
        cout << "2. Mostrar libros\n";
        cout << "3. Mostrar valor total del stock\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Cantidad de libros: ";
            cin >> n;

            libros = new Libro[n];  // llama al constructor
            datosIngresados = true;
            break;

        case 2:
            if (!datosIngresados) {
                cout << "Primero debe ingresar los datos.\n";
            } else {
                for (int i = 0; i < n; i++) {
                    cout << "\nLibro " << i + 1 << endl;
                    libros[i].mostrar();
                }
            }
            break;

        case 3:
            if (!datosIngresados) {
                cout << "Primero debe ingresar los datos.\n";
            } else {
                float totalStock =


