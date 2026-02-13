#ifndef DATOS_H
#define DATOS_H

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Estructuras.h"
#include "Validaciones.h"

using namespace std;

int calcularEdad(int dia, int mes, int anio) {
    time_t t = time(0);
    tm* ahora = localtime(&t);

    int edad = (ahora->tm_year + 1900) - anio;

    if ((ahora->tm_mon + 1) < mes ||
        ((ahora->tm_mon + 1) == mes && ahora->tm_mday < dia)) {
        edad--;
    }

    return edad;
}

void ingresarNotasRecursivo(float notas[], int i, int total) {
    if (i >= total)
        return;

    float nota;
    cout << "Nota " << i + 1 << ": ";
    cin >> nota;

    while (!validarNota(nota)) {
        cout << "Nota invalida (0-20). Ingrese nuevamente: ";
        cin >> nota;
    }

    notas[i] = nota;

    ingresarNotasRecursivo(notas, i + 1, total);
}

float calcularPromedio(const float notas[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++)
        suma += notas[i];

    if (n == 0) return 0;

    return suma / n;
}

void registrarEstudiantes(Estudiante est[], int n) {

    for (int i = 0; i < n; i++) {

        cin.ignore(1000, '\n');

        cout << "\nApellido: ";
        cin.getline(est[i].apellido, 30);

        cout << "Nombre: ";
        cin.getline(est[i].nombre, 30);

        cout << "Correo: ";
        cin.getline(est[i].correo, 50);

        while (!validarCorreo(est[i].correo)) {
            cout << "Correo invalido. Intente nuevamente: ";
            cin.getline(est[i].correo, 50);
        }

        int d, m, a;
        cout << "Fecha nacimiento (dd mm aaaa): ";
        cin >> d >> m >> a;

        est[i].edad = calcularEdad(d, m, a);
        est[i].numNotas = 0;
        est[i].promedio = 0;
    }
}

void ingresarNotas(Estudiante est[], int n, int numNotas) {

    for (int i = 0; i < n; i++) {

        cout << "\nNotas de " << est[i].nombre << " " << est[i].apellido << endl;

        est[i].numNotas = numNotas;

        ingresarNotasRecursivo(est[i].notas, 0, numNotas);

        est[i].promedio = calcularPromedio(est[i].notas, numNotas);

        cout << "Promedio: " << fixed << setprecision(2) << est[i].promedio << endl;
    }
}

void ordenarPorSeleccion(Estudiante est[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max = i;

        for (int j = i + 1; j < n; j++) {
            if (est[j].promedio > est[max].promedio)
                max = j;
        }

        Estudiante temp = est[i];
        est[i] = est[max];
        est[max] = temp;
    }
}

void ordenarPorIntercambio(Estudiante est[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (est[j].promedio < est[j + 1].promedio) {
                Estudiante temp = est[j];
                est[j] = est[j + 1];
                est[j + 1] = temp;
            }
        }
    }
}

void reporteResumen(const Estudiante est[], int n) {

    float suma = 0;
    int aprob = 0, susp = 0, repro = 0;

    for (int i = 0; i < n; i++) {
        suma += est[i].promedio;

        if (est[i].promedio >= 14)
            aprob++;
        else if (est[i].promedio >= 9)
            susp++;
        else
            repro++;
    }

    cout << "\nPromedio curso: " << fixed << setprecision(2) << suma / n << endl;
    cout << "Aprobados: " << aprob << endl;
    cout << "Suspensos: " << susp << endl;
    cout << "Reprobados: " << repro << endl;
}

#endif// DATOS_H_INCLUDED
