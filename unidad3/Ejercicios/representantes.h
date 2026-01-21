#ifndef REPRESENTANTES_H
#define REPRESENTANTES_H
#include <iostream>
#include <string>
using namespace std;
struct Representante {
    string cedula;
    string nombre;
    string telefono;

    Representante (){
        cedula = "";
        nombre="";
        telefono="";
    }
    Representante (string ced, string nom,string fono){
        cedula=ced;
        nombre=nom;
        telefono=fono;
    }
};
void ingresar_representante(Representante rep[], int n){
    for(int i=0;i<n;i++){
        string cedula, nombre, telefono;
        cout<< "\n Representante "<<i+1<<": "<<endl;
        cout<< "Cedula : ";
        cin>>cedula;
        cout<< "Nombre : ";
        cin>>nombre;
        cout<< "Telefono : ";
        cin>>telefono;
        rep [i] = Representante (cedula,nombre,telefono);
    }
}
//busqueda lineal ()
int buscarRepresentante (Representante rep[], int n, string ced){
     for(int i = 0; i < n; i++){
        if(rep[i].cedula == ced){
            return i;
        }
    }
    return -1;
}

#endif // REPRESENTANTES_H
