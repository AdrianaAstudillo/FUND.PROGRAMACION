#ifndef ARCHIVOS_H
#define ARCHIVOS_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include "Estructuras.h"

using namespace std;

void guardarCalificaciones(const Estudiante est[], int n, const Docente& doc, const Materia& mat) {

    ofstream archivo("calificaciones.txt");

    archivo << "REPORTE DE CALIFICACIONES\n";
    archivo << "Materia: " << mat.nombre << endl;
    archivo << "NRC: " << mat.nrc << endl << endl;

    for (int i = 0; i < n; i++) {
        archivo << est[i].nombre << " "
                << est[i].apellido << " - "
                << fixed << setprecision(2)
                << est[i].promedio << endl;
    }

    archivo.close();
}

void guardarOrdenamiento(const Estudiante est[], int n,
                          const Docente& doc,
                          const Materia& mat,
                          const char* algoritmo) {

    ofstream archivo("ordenamiento.dat", ios::binary);

    archivo.write((char*)&mat, sizeof(Materia));
    archivo.write((char*)&doc, sizeof(Docente));
    archivo.write((char*)&n, sizeof(int));
    archivo.write((char*)est, n * sizeof(Estudiante));

    archivo.close();
}

void recuperarOrdenamiento() {

    ifstream archivo("ordenamiento.dat", ios::binary);

    Materia mat;
    Docente doc;
    int n;

    archivo.read((char*)&mat, sizeof(Materia));
    archivo.read((char*)&doc, sizeof(Docente));
    archivo.read((char*)&n, sizeof(int));

    Estudiante* est = new Estudiante[n];
    archivo.read((char*)est, n * sizeof(Estudiante));

    for (int i = 0; i < n; i++) {
        cout << est[i].nombre << " "
             << est[i].apellido << " - "
             << est[i].promedio << endl;
    }

    delete[] est;
    archivo.close();
}
void guardarBusqueda(const Estudiante est[], int n) {
    if (n == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    float minPromedio, maxPromedio;
    int tipoBusqueda;

    cout << "Ingrese promedio minimo: ";
    cin >> minPromedio;
    cout << "Ingrese promedio maximo: ";
    cin >> maxPromedio;

    cout << "Seleccione algoritmo de busqueda:\n";
    cout << "1. Secuencial\n2. Binaria (requiere lista ordenada)\n";
    cout << "Elija: ";
    cin >> tipoBusqueda;

    ofstream archivo("busqueda.txt");
    if (!archivo.is_open()) {
        cout << "Error al abrir archivo de busqueda.\n";
        return;
    }

    archivo << "RESULTADOS DE LA BUSQUEDA POR PROMEDIO\n";
    archivo << "Rango: " << minPromedio << " - " << maxPromedio << "\n\n";

    bool encontrado = false;

    if (tipoBusqueda == 1) {
        for (int i = 0; i < n; i++) {
            if (est[i].promedio >= minPromedio && est[i].promedio <= maxPromedio) {
                archivo << est[i].nombre << " " << est[i].apellido
                        << " - Promedio: " << fixed << setprecision(2)
                        << est[i].promedio << endl;
                encontrado = true;
            }
        }
    } else if (tipoBusqueda == 2) {
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (est[mid].promedio < minPromedio)
                left = mid + 1;
            else if (est[mid].promedio > maxPromedio)
                right = mid - 1;
            else {
                int i = mid;
                while (i >= 0 && est[i].promedio >= minPromedio)
                    i--;
                i++;
                while (i < n && est[i].promedio <= maxPromedio) {
                    archivo << est[i].nombre << " " << est[i].apellido
                            << " - Promedio: " << fixed << setprecision(2)
                            << est[i].promedio << endl;
                    i++;
                    encontrado = true;
                }
                break;
            }
        }
    } else {
        cout << "Opcion de busqueda invalida.\n";
    }

    if (!encontrado)
        archivo << "No se encontraron estudiantes en el rango especificado.\n";

    archivo.close();
    cout << "Busqueda completada. Resultados guardados en busqueda.txt\n";
}


#endif // ARCHIVOS_H_INCLUDED
