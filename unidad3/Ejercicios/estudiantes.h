#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

#include<iostream>
#include "representantes.h"
using namespace std;
struct Estudiante {
    int id;
    string nombre;
    string cedRepresentante;
};
void ingresar_estudiantes(Estudiante est[],int cantEst, Representante rep[],int cantRep){
for(int i=0; i<cantEst; i++){
    string cedula;
    cout<<"\n Estudiante " <<i+1<<": "<<endl;
    cout<<"Id  Estudiante: " ;
    cin>> est[i].id;
    cout<<"Nombre: " ;
    cin>> est[i].nombre;
    do{
        cout<<"Cedula del representante: ";
        cin>>cedula;
        if(buscarRepresentante(rep,cantRep,cedula)==-1){
            cout<<"Cedula no valida.Intente nuevamente!"<<endl;
        }
    }while(buscarRepresentante(rep,cantRep,cedula)==-1);
     est[i].cedRepresentante = cedula;
}
}
void mostrar_registro(Estudiante est[],int cantEst, Representante rep[],int cantRep){
    cout<<"\t\n========REGISTRO ESTUDIANTE========="<<endl;
    for(int i=0;i<cantEst;i++){
        int index;
        cout<<"Id  Estudiante: " <<est[i].id<<endl;
        cout<<"Nombre estudiante: " <<est[i].nombre<<endl;
        index= buscarRepresentante(rep,cantRep, est[i].cedRepresentante);
        cout << "Representante : "<<rep[index].nombre<<endl;
        cout << "Cedula : "<<rep[index].cedula<<endl;
        cout << "Telefono : "<<rep[index].telefono<<endl;


    }
}
#endif // ESTUDIANTES_H



