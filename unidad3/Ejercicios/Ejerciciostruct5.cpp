#include<iostream>
#include<string>

using namespace std;
struct Producto {
    char codigo;
    string nombre;
    int cantidad;
    float precio;
    Producto(){
    }
    Producto(char c, string n, int cant, float p){
    codigo=c;
    nombre=n;
    cantidad=cant;
    precio=p;
    }
    void mostrarProducto(){
    cout<<"------------------------"<<endl;
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Cantidad: "<<cantidad<<endl;
    cout<<"Precio: "<<precio<<endl;
    }
};
int main() {
    char codigo;
    string nombre;
    int cant,cantidad;
    float precio;
    cout<<"Ingrese la cantidad de productos: ";
    cin>>cantidad;
     Producto* productos = new Producto[cantidad];
    for(int i =0;i<cantidad;i++){
        cout<<"\nProducto "<< i+1 <<endl;
        cout<<"Codigo: ";
        cin>> codigo;
        cout<<"Nombre: ";
        cin>> nombre;
        cout<<"Cantidad: ";
        cin>> cantidad;
        cout<<"Precio: ";
        cin>> precio;
        productos[i]= Producto(codigo,nombre, cantidad, precio);
    }
    cout<<"\n\tListado de productos\n";
    cout<<"------------------------"<<endl;
    for(int i=0; i<cantidad;i++){
        cout<<"\nProducto "<< i+1 <<endl;
        productos[i].mostrarProducto();
    }
    delete[] productos;
return 0;
}
