#include<iostream>
#include<string>

using namespace std;
struct Producto {
    char codigo;
    string nombre;
    int cantidad;
    float precio;

Producto(char c,string n, int cant, float p){
    codigo=c;
    nombre=n;
    cantidad=cant;
    precio=p;
}
//mostrar datos
void mostrar()const{
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Cantidad: "<<cantidad<<endl;
    cout<<"Precio: "<<precio<<endl;
}
//calcular total
float total()const{
    return cantidad * precio;
}
};
int main(){
    char codigo;
    string nombre;
    int cantidad;
    float precio;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cin.ignore(); // limpiar buffer
    cout << "Ingrese el nombre del producto: ";
    getline(cin, nombre);
    cout << "Ingrese la cantidad: ";
    cin >> cantidad;
    cout << "Ingrese el precio: ";
    cin >> precio;
    Producto p1(codigo, nombre, cantidad, precio);
    cout << "\n--- Datos del producto ---\n";
    p1.mostrar();
    cout << "Total: " << p1.total() << endl;
    return 0;
}

