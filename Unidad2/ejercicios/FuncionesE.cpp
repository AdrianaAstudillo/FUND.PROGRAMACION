#include <iostream>
#include <locale.h>
#include <cctype>
#include <cstdlib>
//#include <cmath>
#include "factorial.h" // cabecera
#include "factorial.cpp" // cuerpo función
#include "primos.h"
using namespace std;


void mostrar_menu(){
    cout << "\t Menú de opciones" << endl;
    cout << "1. Potencia" << endl;
    cout << "2. Factorial" << endl;
    cout << "3. Número primo" << endl;
    cout << "Seleccione el ejercicio a ejecutar " ;
}
int mostrar_primo(int valor){
    int primo=0;
    if (valor== 1)
        return 0; //no primo
    else if (valor>1){
        for (int i = 1 ; i <=valor; i++){
            if(valor %i==0)
                primo+=1;
        }
        if (primo ==1 or primo ==2)
            return 1; //primo
        else
            repurn 0;
    }
}
float ejecutar_potencia(float valor1, int valor2){
    float resultado = 1;
    //float resultado=Pow(valor1,valo2);
    for (int i = 0; i < valor2; i++){
        resultado *= valor1;
    }
    return resultado;
}

float validar_cero(float num1){
    while(num1 <= 0){
        cout << "Ingrese un valor > 0 : ";
        cin >> num1;
    }
    return num1;
}

int main(){
    setlocale(LC_ALL, "");
    char repetir;
    float num1;
    int menu, num2;
    do{
        mostrar_menu(); //llamando funcion sin retorno
        cin >> menu;
        switch(menu){
        case 1:
             cout << "Ingrese un valor > 0 para la base : ";
             cin >> num1;
             num1 = validar_cero(num1);//llamando funcion con retorno

             cout << "Ingrese un valor para el exponente : ";
             cin >> num2;
             cout << num1 << "^" << num2 << " = " << ejecutar_potencia(num1,num2);

            break;
        case 2:
             cout << "Calculo del Factorial" << endl;
             cout << "Ingrese un valor > 0 para calcular el factorial : ";
             cin >> num1;

             num1 = validar_cero(num1);
             cout << "El factorial de " << num1 << " es "<< mostrar_factorial(num1);

            break;

        case 3:
            cout << "Calculo del Primos" << endl;
            cout << "Ingrese un valor>o para consulta de primos" << endl;
            cin>>num2;

            //num2 es entero
            if(mostrar_primo(num2)==0)
                cout<<num2<<"No es PRIMO"<<endl;
                else
                    cout<<num2<<"Es PRIMO"<<endl;

            break;


        default:
            cout << "\nOpción incorrecta " << endl;
        }

        cout << "\nDeseas ejecutar nuevamente el programa? ";
        cin >> repetir;
        system("cls");

    }while(toupper(repetir) == 'S');

    cout << "\nPrograma finalizado";

    return 0;
}
