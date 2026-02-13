#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <cstring>
#include <cctype>
using namespace std;

bool validarCedula(const char ced[]) {
    if (strlen(ced) != 10)
        return false;
    for (int i = 0; i < 10; i++) {
        if (!isdigit(ced[i]))
            return false;
    }
    return true;
}


bool validarNombre(const char nombre[]) {
    int contador = 0;
    for (int i = 0; nombre[i] != '\0'; i++) {
        if (nombre[i] != ' ')
            contador++;
    }
    return contador >= 5;
}

bool validarNota(float nota) {
    return nota >= 0 && nota <= 20;
}

bool validarCorreo(const char correo[]) {
    bool arroba = false, punto = false;

    for (int i = 0; correo[i] != '\0'; i++) {
        if (correo[i] == '@') arroba = true;
        if (correo[i] == '.' && arroba) punto = true;
    }

    return arroba && punto;
}

bool validarNRCUnico(const char nuevo[], const char anterior[]) {
    if (anterior[0] == '\0')
        return true;

    return strcmp(nuevo, anterior) != 0;
}

#endif// VALIDACIONES_H_INCLUDED
