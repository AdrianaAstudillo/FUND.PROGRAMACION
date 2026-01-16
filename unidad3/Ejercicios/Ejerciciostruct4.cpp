#include<iostream>
#include<string>

using namespace std;
struct Producto {
    char codigo[3];
    string nombre;
    int cantidad;
    float precio;
};
void mostrarProducto(Producto p){
    cout<<"------------------------"<<endl;
    cout<<"Codigo: "<<p.codigo<<endl;
    cout<<"Nombre: "<<p.nombre<<endl;
    cout<<"Cantidad: "<<p.cantidad<<endl;
    cout<<"Precio: "<<p.precio<<endl;
}
float valor (Producto p){
    return p.cantidad * p.precio;
}
float sumarTotal(Producto productos[], int cantidad) {
    float suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += valor(productos[i]);
    }
    return suma;
}
int main(){
    int cantidad;
    cout<<"Ingrese la cantidad de productos: ";
    cin>>cantidad;
    Producto productos [cantidad];
    for(int i =0;i<cantidad;i++){
        cout<<"\nProducto "<< i+1 <<endl;
        cout<<"Codigo: ";
        cin>> productos[i].codigo;
        cout<<"Nombre: ";
        cin>> productos[i].nombre;
        cout<<"Cantidad: ";
        cin>> productos[i].cantidad;
        cout<<"Precio: ";
        cin>> productos[i].precio;
    }
    cout<<"\n\tListado de productos\n";
    cout<<"------------------------"<<endl;
    for(int i=0; i<cantidad;i++){
        cout<<"\nProducto "<< i+1 <<endl;
        mostrarProducto(productos[i]);
        cout<<"Precio producto: $ ";
        cout<<valor(productos[i])<<endl;
    }
     cout<<"\n-------------------"<<endl;
    cout<<"Total: $ " << sumarTotal(productos, cantidad) << endl;
    cout<<"----------------------"<<endl;

return 0;
}
