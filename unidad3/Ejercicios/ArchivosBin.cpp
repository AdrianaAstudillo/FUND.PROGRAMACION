#include <iostream>
#include <fstream>
using namespace std;

struct Estudiante {
    int id;
    char nombre[30];
    float promedio;


    void guardarBinario(Estudiante estudiantes[], int n) {
        ofstream archivo("estudiantesBin.dat", ios::binary);

        if (!archivo.is_open()) {
            cout << "No se pudo abrir el archivo." << endl;
            return;
        }

        for (int i = 0; i < n; i++) {
            archivo.write(reinterpret_cast<char*>(&estudiantes[i]), sizeof(Estudiante));
        }

        archivo.close();
    }

    void leerBinario() {
        Estudiante est;
        ifstream archivo("estudiantesBin.dat", ios::binary);

        if (!archivo.is_open()) {
            cout << "No se pudo abrir el archivo." << endl;
            return;
        }

        cout << "\nDatos leídos del archivo:\n";

        while (archivo.read(reinterpret_cast<char*>(&est), sizeof(Estudiante))) {
            cout << "ID: " << est.id << endl;
            cout << "Nombre: " << est.nombre << endl;
            cout << "Promedio: " << est.promedio << endl;
            cout << "------------------" << endl;
        }
        archivo.close();
    }
};


int main() {
    int opcion;
    int n;
    Estudiante est;

    cout << "MENU\n";
    cout << "1. Guardar estudiantes\n";
    cout << "2. Recuperar estudiantes\n";
    cout << "3. Salir\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            cout << "Ingrese numero de estudiantes: ";
            cin >> n;

            Estudiante estudiantes[n];

            for (int i = 0; i < n; i++) {
                cout << "\nEstudiante " << i + 1 << endl;
                cout << "ID: ";
                cin >> estudiantes[i].id;

                cout << "Nombre: ";
                cin >> estudiantes[i].nombre;

                cout << "Promedio: ";
                cin >> estudiantes[i].promedio;
            }

            est.guardarBinario(estudiantes, n);
            break;
        }

        case 2:
            est.leerBinario();
            break;

        default:
            cout << "Opcion invalida." << endl;
    }
    return 0;
}

