#include <iostream>
#include <cctype>
using namespace std;
int mostrar_menu(){
    int menu;
    cout<<"Opciones del menu"<<endl;
    cout<<"1. Arreglo base"<<endl;
    cout<<"2.Mayor/Menor"<<endl;
    cout<<"3.Pares/impares"<<endl;
    cout<<"4.Aleatorios"<<endl;
    cout<<"5.Matriz"<<endl;
    cout<<"6.Multidimencional"<<endl;
    cout<<"Seleccione la opciona ejecutar: ";
    cin>>menu;
    return menu;
}
void imprimir(int arrays[],int tam){
    for (int i=0;i<tam;i++){
        cout<<" valor"<<i+1<<": "<<arrays[i];
    }
}
int *mayores(int arrays[],int tam){
    int *resultados=new int[2];
    int mayor= arrays[0];
    int menor= arrays[0];
    for (int i=0;i<tam;i++){
        if (arrays[i]>mayor)
            mayor=arrays[i];
       if (arrays[i]<menor)
            menor=arrays[i];
    }
    resultados[0]= mayor;
    resultados[1]= menor;
    return resultados;

    }
const int MAX = 100;
void mostrar_Matriz(int datos[][MAX], int fila, int columna) {
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            cout << "Index [" << i << "][" << j << "] = " << datos[i][j] << endl;
        }
    }
}
int main(){
    int menu,tamanio=0;int fila;int columna;
    char continuar;
    int *valores,*results;
    do{
            menu =mostrar_menu();
        switch(menu){
        case 1:{
            cout<<"n\ Arreglo simple"<<endl;
            cout<<"Ingresa el tamanio del arreglo"<<endl;
            cin>>tamanio;
            int numeros[tamanio];
            for (int i=0;i<tamanio;i++){
            cout<<"Ingrese el valor "<<i+1<<":"<<endl;
            cin>>numeros[i];
            }
            //llamar/invocar la funcion
            //void imprimir(int arrays[],int tam)
            imprimir(numeros,tamanio);
            }break;
        case 2:
            cout<<"n\ Valor mayor menor"<<endl;
            cout<<"Ingresa el tamaño del arreglo: ";
            cin >>tamanio;
            valores=new int [tamanio];
            for (int i=0;i<tamanio;i++){
            cout<<"Ingrese el valor"<<i+1<<":";
            cin>>valores[i];
            }
            imprimir(valores,tamanio);
            results=mayores(valores,tamanio);
            cout<<"valor mayor"<<results[0]<<"\nValor Menor: "<<results[1]<< endl;
            break;
        case 5:{
            do{
                cout<<"n\ Matriz"<<endl;
                cout<<"Ingresa el numero de filas"<<endl;
                cin>>fila;
                cout<<"Ingresa el numero de columnas"<<endl;
                cin>>columna;
            }while(fila<=0 && columna <=0);
            int datos [fila][columna];
            for (int i=0;i<fila;i++){
                for (int j=0;j<columna;j++){
                cout<<"Index"<<", Valor: ";
                cin>>datos [i][j];
                }
            }
            //mostrarMatriz(datos, fila, columna);
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
