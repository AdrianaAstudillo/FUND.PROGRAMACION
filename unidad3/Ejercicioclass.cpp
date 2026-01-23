#include <iostream>
#include "biblioteca.h"
#include "biblioteca.h"

using namespace std;
int main() {
    int n;
    cout << "Ingrese la cantidad de Libros a registrar: ";
    cin >> n;
    Libro libros[n];
    for (int i=0; i<n; i++){
        cout<<"\n Libro "<<i+1<<endl;
        libros[i].ingresar(n);
    }
    cout<<"\n Listado de Libros\n";
    cout<<"=========================\n";
    for (int i =0;i<n;i++){
        cout<<"\n Libro "<<i+1<<endl;
        libros[i].mostrarLibro();
        float total = libros[i].calcularValorStock(libros,n);
    }
    return 0;
}

