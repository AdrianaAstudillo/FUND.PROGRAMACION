#include <iostream>
using namespace std;

template <typename codigo, typename origen, typename destino, typename peso, typename costo>

struct Producto {
    string Codigo = 0; // ERROR: 0 es int, string requiere ""
    string Origen = "vacio";
    string Destino = "vacio";
    float Peso = 0;
    int costo = 0;
};

struct Producto { // ERROR: Estructura repetida
    string codigo = c; // ERROR: 'c' no está definida
    string origen = o; // ERROR: 'o' no está definida
    string destino = d; // ERROR: 'd' no está definida
    float peso = p;    // ERROR: 'p' no está definida
    int costo = t;     // ERROR: 't' no está definida

    void mostrar() {
        cout << "Codigo: " << codigo << endl;
        cout << "Origen: " << origen << endl;
        cout << "Destino: " << destino << endl;
        cout << "Peso: " << peso << endl;
        cout << "Costo: " << costo << endl;
    }

    float valor_envio() {
        return costo * peso;
    }

    void ingresar() {
        cout << "Ingrese los datos del envio" << endl;
        cout << "Codigo: " << codigo << endl; // ERROR: Esto no guarda datos
        cout << "Origen: " << origen << endl;
        cout << "Destino: " << destino << endl;
        cout << "Peso: " << peso << endl;
        cout << "Costo: " << costo << endl;
    }
};

// --- SEGUNDA IMAGEN (Función Main) ---

int main() {
    // ERROR: La sintaxis de instanciación es incorrecta
    Producto producto1 (string, string, string, float, int) <<
    ('0001', 'Quito', 'Ambato', 5.5, 3);
    // ERROR: Uso de comillas simples '' para texto
    // ERROR: El operador << no se usa para asignar valores a un objeto

    Producto producto2 (string, string, string, float, int) <<
    ('0002', 'Quito', 'Ambato', 6.50, 3);

    Producto producto3 (string, string, string, float, int) <<
    ('0003', 'Quito', 'Ambato', , ); // ERROR: Valores vacíos

    return 0;
}
