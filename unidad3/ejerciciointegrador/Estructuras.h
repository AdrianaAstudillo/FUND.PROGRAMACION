#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

using namespace std;

const int MAX_ESTUDIANTES = 100;
const int MAX_NOTAS = 10;

struct Estudiante {
    char apellido[30];
    char nombre[30];
    char correo[50];
    float notas[MAX_NOTAS];
    int numNotas;
    float promedio;
    int edad;
};

struct Docente {
    char nombre[50];
    char cedula[11];
};

struct Materia {
    char nombre[40];
    char nrc[10];
};

#endif// ESTRUCTURAS_H_INCLUDED
