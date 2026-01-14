#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct Producto {
    char codigo[100];
    string nombre;
    int cantidad;
    float precio;
};

void mostrar_datos(Producto p){
    cout<<"Nombre: "<<p.nombre<<endl;
    cout<<"Codigo: "<<p.codigo<<endl;
    cout<<"Cantidad: "<<p.cantidad<<endl;
    cout<<"Precio: "<<p.precio<<endl;
}
float multiplicar_valor(Producto p){
    return p.cantidad*p.precio;
}
int main(){
    Producto producto1;
    cout<<"Ingrese los datos (producto 1)"<<endl;
    cout<<"Ingrese el nombre: ";
    cin>>producto1.nombre;
    cout<<"Ingrese el Codigo: ";
    cin>>producto1.codigo;
    cout<<"Ingrese la Cantidad: ";
    cin>>producto1.cantidad;
    cout<<"Ingrese el precio: ";
    cin>>producto1.precio;
    cout<<"-----------------"<<endl;
    Producto producto2;
    cout<<"Ingrese los datos (producto 2)"<<endl;
    cout<<"Ingrese el nombre :";
    cin>>producto2.nombre;
    cout<<"Ingrese el Codigo: ";
    cin>>producto2.codigo;
    cout<<"Ingrese la Cantidad: ";
    cin>>producto2.cantidad;
    cout<<"Ingrese el precio: ";
    cin>>producto2.precio;
    cout<<"-----------------"<<endl;
    cout<<"Datos (producto 1):$"<<endl;
    mostrar_datos(producto1);
    cout<<"-----------------"<<endl;
    cout<<"Precio producto 1: $ ";
    cout<<multiplicar_valor(producto1)<<endl;
    cout<<"Datos (producto 2):"<<endl;
    mostrar_datos(producto2);
    cout<<"Precio producto 2: $";
    cout<<multiplicar_valor(producto2)<<endl;

return 0;
}
