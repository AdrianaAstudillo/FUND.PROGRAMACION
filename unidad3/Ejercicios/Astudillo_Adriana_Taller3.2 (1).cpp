#include <iostream>
#include <string>

using namespace std;

struct Producto {
    char codigo[3];
    string nombre;
    int cantidad;
    float precio[3]; // 0: Pequeño, 1: Normal, 2: Jumbo

    Producto(){
    }
      Producto(char c[3], string n, int cant, float p[3]) {
        for (int i = 0; i < 3; i++) {
            codigo[i] = c[i];
            precio[i] = p[i];
        }
            nombre = n;
            cantidad = cant;
    }
};

void mostrarProducto(Producto pr) {
    cout << "------------------------" << endl;
    string tamanios[3] = {"Pequeio", "Normal", "Jumbo"};
    cout << "Codigo: " << pr.codigo << endl;
    cout << "Nombre: " << pr.nombre << endl;
    cout << "Cantidad: " << pr.cantidad << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Precio " << tamanios[i] << ": " << pr.precio[i] << endl;
    }
}

int main() {
    int cantidad,n;
    float total = 0;
    int produc, tamanio, canti;
    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;
    Producto* productos = new Producto[cantidad];

    for (int i = 0; i < cantidad; i++) {
        char codigo[3];
        string nombre;
        int cant;
        float precios[3];

        cout << "\nProducto " << i + 1 << endl;
        cout << "Codigo: ";
        cin >> codigo;
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Cantidad: ";
        cin >> cant;
        cout << "Ingrese precios (Pequenio, Normal, Jumbo):\n";
        for (int j = 0; j < 3; j++) {
            cin >> precios[j];
        }
        productos[i] = Producto(codigo, nombre, cant, precios);
    }

    cout << "\n\tListado de productos\n";
    for (int i = 0; i < cantidad; i++) {
        cout << "\nProducto " << i + 1 << endl;
        mostrarProducto(productos[i]);
    }

    cout << "\nIngrese cantidad de productos a comprar: ";
    cin >> n;
    while (n <= 0 ||n>3 ) {
        cout << "Ingrese una cantidad valida: ";
        cin >> n;
    }
    for (int i = 0; i < n; i++) {
        cout << "\nSeleccion " << i + 1 << endl;
        cout << "Ingrese el producto (1 - " << cantidad << "): ";
        cin >> produc;
        while (produc < 1 || produc > cantidad) {
            cout << "Ingrese un producto valido: ";
            cin >> produc;
        }
        cout << "Seleccione tamanio (1:Pequenio, 2:Normal, 3:Jumbo): ";
        cin >> tamanio;
        while (tamanio < 1 || tamanio > 3) {
            cout << "Ingrese un tamanio valido: ";
            cin >> tamanio;
        }
        cout << "Ingrese la cantidad a comprar: ";
        cin >> canti;
        while (canti <= 0 || canti > productos[produc - 1].cantidad) {
            cout << "Ingrese una cantidad valida: ";
            cin >> canti;
        }

        float subtotal = productos[produc - 1].precio[tamanio - 1] * canti;
        total += subtotal;

        productos[produc - 1].cantidad -= canti;

        cout << "Subtotal: $" << subtotal << endl;
}

    cout << "\nTotal a pagar: $" << total << endl;

    return 0;
}

