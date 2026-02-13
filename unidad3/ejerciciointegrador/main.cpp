#include <iostream>
#include <cstring>
#include "Estructuras.h"
#include "Validaciones.h"
#include "Datos.h"
#include "Archivos.h"

using namespace std;

void mostrarMenu() {
    cout << "\n============================================\n";
    cout << " SISTEMA DE GESTION DE CALIFICACIONES\n";
    cout << "============================================\n";
    cout << "1. Registrar Docente\n";
    cout << "2. Registrar Asignatura\n";
    cout << "3. Ingresar Numero de Estudiantes\n";
    cout << "4. Registrar Estudiantes\n";
    cout << "5. Ingresar Notas\n";
    cout << "6. Mostrar Clasificacion\n";
    cout << "7. Guardar Calificaciones\n";
    cout << "8. Ordenar por Promedio\n";
    cout << "9. Mostrar Resumen\n";
    cout << "10. Recuperar Ordenamiento\n";
    cout << "11. Busqueda\n";
    cout << "12. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() {

    Docente docente;
    Materia materia;
    Estudiante estudiantes[MAX_ESTUDIANTES];

    int numEstudiantes = 0;
    int numNotas = 0;

    bool docenteRegistrado = false;
    bool materiaRegistrada = false;
    bool estudiantesRegistrados = false;
    bool notasIngresadas = false;

    materia.nrc[0] = '\0';

    int opcion;

    do {

        mostrarMenu();
        cin >> opcion;
        cin.ignore(1000, '\n');

        switch(opcion) {

        case 1: {

        cout << "Nombre docente: ";
        cin.getline(docente.nombre, 50);

        while (!validarNombre(docente.nombre)) {
            cout << "Minimo 5 caracteres. Intente nuevamente: ";
            cin.getline(docente.nombre, 50);
        }

        while (true) {

            cout << "Cedula (10 digitos): ";
            cin.getline(docente.cedula, 11);
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if (validarCedula(docente.cedula))
                break;
            cout << "Cedula invalida.\n";
        }
        docenteRegistrado = true;
        cout << "Docente registrado correctamente.\n";
        break;
    }
        case 2: {

            if (!docenteRegistrado) {
                cout << "Primero registre el docente.\n";
                break;
            }

            char nrcAnterior[10];
            strcpy(nrcAnterior, materia.nrc);

            cout << "Nombre materia: ";
            cin.getline(materia.nombre, 40);

            cout << "NRC: ";
            cin.getline(materia.nrc, 10);

            while (!validarNRCUnico(materia.nrc, nrcAnterior)) {
                cout << "NRC duplicado. Intente nuevamente: ";
                cin.getline(materia.nrc, 10);
            }

            materiaRegistrada = true;
            break;
        }

        case 3: {

            cout << "Numero de estudiantes: ";
            cin >> numEstudiantes;

            while (numEstudiantes <= 0 || numEstudiantes > MAX_ESTUDIANTES) {
                cout << "Valor invalido. Ingrese nuevamente: ";
                cin >> numEstudiantes;
            }

            cin.ignore(1000, '\n');
            break;
        }

        case 4: {

            if (numEstudiantes == 0) {
                cout << "Primero ingrese el numero de estudiantes.\n";
                break;
            }

            registrarEstudiantes(estudiantes, numEstudiantes);
            estudiantesRegistrados = true;
            break;
        }

        case 5: {

            if (!estudiantesRegistrados) {
                cout << "Primero registre los estudiantes.\n";
                break;
            }

            cout << "Numero de notas por estudiante: ";
            cin >> numNotas;

            while (numNotas <= 0 || numNotas > MAX_NOTAS) {
                cout << "Cantidad invalida. Ingrese nuevamente: ";
                cin >> numNotas;
            }

            ingresarNotas(estudiantes, numEstudiantes, numNotas);
            notasIngresadas = true;

            cin.ignore(1000, '\n');
            break;
        }

        case 6: {

            if (!notasIngresadas) {
                cout << "Primero ingrese notas.\n";
                break;
            }

            for (int i = 0; i < numEstudiantes; i++) {

                cout << estudiantes[i].nombre << " "
                     << estudiantes[i].apellido << " -> ";

                if (estudiantes[i].promedio >= 14)
                    cout << "APROBADO\n";
                else if (estudiantes[i].promedio >= 9)
                    cout << "SUSPENSO\n";
                else
                    cout << "REPROBADO\n";
            }

            break;
        }

        case 7:
            guardarCalificaciones(estudiantes, numEstudiantes, docente, materia);
            break;

        case 8: {

            int tipo;
            cout << "1. Seleccion\n2. Intercambio\nElija: ";
            cin >> tipo;

            if (tipo == 1)
                ordenarPorSeleccion(estudiantes, numEstudiantes);
            else
                ordenarPorIntercambio(estudiantes, numEstudiantes);

            guardarOrdenamiento(estudiantes, numEstudiantes, docente, materia, "Ordenado");

            cin.ignore(1000, '\n');
            break;
        }

        case 9:
            reporteResumen(estudiantes, numEstudiantes);
            break;

        case 10:
            recuperarOrdenamiento();
            break;
        case 11:
        guardarBusqueda(estudiantes, numEstudiantes);
            break;

        case 12:
            cout << "Saliendo del sistema...\n";
            break;

        default:
            cout << "Opcion invalida.\n";
        }

    } while (opcion != 12);

    return 0;
}
