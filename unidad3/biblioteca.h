#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
using namespace std;

class Libro {
private:
    string codigo;
    string titulo;
    string autor;
    int stock;
    float precio;

public:
    // Constructor con ingreso por teclado
    Libro() {
        cout << "Codigo: ";
        cin >> codigo;
        cout << "Titulo: ";
        cin >> titulo;
        cout << "Autor: ";
        cin >> autor;
        cout << "Stock: ";
        cin >> stock;
        cout << "Precio: ";
        cin >> precio;
    }

    void mostrar() const {
        cout << "Codigo: " << codigo << endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Stock: " << stock << endl;
        cout << "Precio: " << precio << endl;
    }

    float total() const {
        return stock * precio;
    }
};

#endif
