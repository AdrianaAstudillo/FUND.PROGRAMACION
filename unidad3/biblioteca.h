#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include<iostream>
using namespace std;
class Libro {
    private:
        string codigo;
        string titulo;
        string autor;
        int stock;
        float precio;
public:
    void ingresar(int n){

        cout<< "codigo : ";
        cin>>codigo;
        cout<< "Titulo : ";
        cin>>titulo;
        cout<< "Autor : ";
        cin>>autor;
        cout<< "Stock : ";
        cin>>stock;
        cout<< "Precio : ";
        cin>>precio;
    }
void mostrarLibro ()const{
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Stock: "<<stock<<endl;
    cout<<"Precio: "<<precio<<endl;

}
float calcularValorStock (Libro libros[], int n){
    float total =0;
    for (int i=0 ;i<n;i++){
        total+= libros[i].stock*libros[i].precio;
    }
    return total;
}

};
#endif // BIBLIOTECA_H
