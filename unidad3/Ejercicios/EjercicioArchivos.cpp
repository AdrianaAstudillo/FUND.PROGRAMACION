#include <iostream>
#include <fstream>
using namespace std;
struct Estudiante {
    int id;
    char nombre [30];
    float promedio;

    void guardarEnArchivo(Estudiante e){
        ofstream archivo ("estudiante.txt",ios::app);

        if(archivo.fail()){
            cout<<"Error al abrir el Archivo."<<endl;
            return;
        }
        archivo<<e.id<<" "
                <<e.nombre<<" "
                <<e.promedio<<endl;
        archivo.close();
    }
};
int main (){
    Estudiante est;
    int n;
     cout<<"Cuantos estudiante desea ingresar? ";
     cin>>n;

     for(int i=0;i<n;i++){
        cout <<"\nEstudiante "<<i+1<<endl;
        cout<<"Ingrese id:";
        cin>>est.id;
        cout<<"\nIngrese nombre:";
        cin>>est.nombre;
        cout<<"\nIngrese promedio:";
        cin>>est.promedio;
        est.guardarEnArchivo(est);
     }
     cout<<"\ndatos guardados correctamente"<<endl;
return 0;
}
