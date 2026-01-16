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

    Producto p1('A',"Mouse",2,15.50f);
    Producto p2('B',"Teclado",3,22.75f);
    p1.mostrar();
    cout << "Total:"<<p1.total()<<endl;
    cout<<"-----------------"<<endl;
    p2.mostrar();
    cout << "Total:"<<p2.total()<<endl;
    return 0;
}
