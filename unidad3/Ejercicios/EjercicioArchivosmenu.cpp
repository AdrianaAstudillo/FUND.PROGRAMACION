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

    void mostrar_archivo() {
    ifstream archivo("estudiante.txt");

    if (archivo.fail()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }
    cout << "\nLista de estudiante\n";
    while (archivo >> id >> nombre >> promedio) {
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Promedio: " << promedio << endl;
        cout << "--------------------------\n";
    }
    archivo.close();
}

};
int mostrar_menu(){
    int menu;
    cout<<"Opciones del menu"<<endl;
    cout<<"1. Ingresar Datos"<<endl;
    cout<<"2.Mostrar datos"<<endl;
    cout<<"3.Salir"<<endl;
    cout<<"Seleccione la opciona ejecutar: ";
    cin>>menu;
    return menu;
}
int main (){
    Estudiante est;
    int n;
    int menu;
    char continuar;
    do{
        menu =mostrar_menu();
        switch(menu){
        case 1:
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

          break;
        case 2:
        est.mostrar_archivo();
            break;

        default:
            cout<<"Opcion no disponible"<<endl;
        }
          cout<<"Desea ejecutar nuevamente el programa (s)?";
          cin>>continuar;
    }while(tolower(continuar) =='s');
    cout<<"Adios!!";
return 0;
}
