#include <iostream>
using namespace std;
int mostrar_menu(){
    int menu;
    cout<<"Opciones del menu"<<endl;
    cout<<"1. Ordenar Arreglo"<<endl;
    cout<<"2.Ordenar matriz quemada"<<endl;
    cout<<"Seleccione la opciona ejecutar: ";
    cin>>menu;
    return menu;
}
void ordenar(int arrays[], int size) {
    int mini, aux;

    for (int i = 0; i < size - 1; i++) {
        mini = i;

        for (int j = i + 1; j < size; j++) {
            if (arrays[j] < arrays[mini]) {
                mini = j;
            }
        }
        aux = arrays[i];
        arrays[i] = arrays[mini];
        arrays[mini] = aux;
    }
}

int main() {
    int menu;
    char continuar;

    do{
            menu =mostrar_menu();
        switch(menu){
        case 1:{
            int size = 5;
            cout<<"\n Ingrese 5 numeros para ordenar de menor a mayor: "<<endl;
            int arrays[size];
            for (int i=0;i<size;i++){
                cout<<"Ingrese el valor "<<i+1<<":"<<endl;
                cin>>arrays[i];
            }
        ordenar(arrays, size);

    for (int i = 0; i < size; i++) {
        cout << arrays[i] << " ";
    }

            }break;
        case 2:{

        int matriz[3][3] = {
        {1, 3, 2},
        {4, 6, 8},
        {7, 4, 5}
        };

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
            }
        }

        break;


        default:
            cout<<"Opcion no disponible"<<endl;

        }
          cout<<"Desea ejecutar nuevamente el programa (s)?";
          cin>>continuar;
    }while(tolower(continuar=='s'));
    cout<<"Adios!!";

return 0;
}

