#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Producto {
    char codigo[10];
    string nombre;
    int cantidad;
    float precio[3]; // 0: pequeño, 1: normal, 2: jumbo
// Constructor
    Producto() {
        cantidad = 0;
        for (int i = 0; i < 3; i++) {
            precio[i] = 0;
        }
    }
};

void mostrarProducto(const Producto& pr) {
    cout << "------------------------" << endl;
    string tamanios[3] = {"Pequeño", "Normal", "Jumbo"};

    cout << "Codigo: " << pr.codigo << endl;
    cout << "Nombre: " << pr.nombre << endl;
    cout << "Cantidad: " << pr.cantidad << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Precio " << tamanios[i] << ": " << pr.precio[i] << endl;
    }
}

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;

    vector<Producto> productos(cantidad); // constructor se ejecuta aquí

    for (int i = 0; i < cantidad; i++) {
        cout << "\nProducto " << i + 1 << endl;
        cout << "Codigo: ";
        cin >> productos[i].codigo;
        cout << "Nombre: ";
        cin >> productos[i].nombre;
        cout << "Cantidad: ";
        cin >> productos[i].cantidad;
        cout << "Ingrese precios (Pequeño, Normal, Jumbo)\n";
        for (int j = 0; j < 3; j++) {
            cin >> productos[i].precio[j];
        }
    }

    cout << "\n\tListado de productos\n";

    for (int i = 0; i < cantidad; i++) {
        cout << "\nProducto " << i + 1 << endl;
        mostrarProducto(productos[i]);
    }

    return 0;
}
