#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void ejercicio1();
void ejercicio2();
void ejercicio3();// valid es t, score es >=50 sino mostrar advertencia

//edad<18: usuario menor de edad
//nombre tenga 3 letras pedir que se vuelva a ingreasr

int main() {
    int menu;
    char continuar;
    do {
        cout << "\nMENU EJERCICIOS\n";
        cout << "1. Ejercicio 1\n";
        cout << "2. Ejercicio 2\n";
        cout << "3. Ejercicio 3\n";
        cout << "Seleccione una opcion: ";
        cin >> menu;
        switch(menu) {
            case 1:
                ejercicio1();
                break;
            case 2:
                ejercicio2();
                break;
            case 3:
                ejercicio3();
                break;
            default:
                cout << "Opcion invalida.\n";
        }
        cout << "\nDeseas ejecutar nuevamente el programa? (s): ";
        cin >> continuar;
        cin.ignore();
    } while (tolower(continuar) == 's');

    cout << "Fin del programa.\n";
    return 0;
}

void ejercicio1() {
    char buffer[200];
    char name[100];
    float p1;
    int p2;
    double p3,promedio;
    int datos;
    do {
        cout << "\nIngrese la cadena con el formato:\n";
        cout << "Name:#########;P1=##.###;P2=-###;P3=###.########\n";
        cin.getline(buffer, 200);
        datos = sscanf(buffer,"Name:%99[^;];P1=%f;P2=%d;P3=%lf",name, &p1, &p2, &p3);
        if (datos != 4) {
            printf("ERROR: Formato incorrecto. Intente nuevamente.\n");
        }
    } while (datos != 4);

    // Conversiones
    // implícita:int a float
    float resultado1=p1+p2;
    //explicita:float a double
    double resultado2=static_cast<double>(resultado1);
    promedio=(resultado1+resultado2)/3;
    printf("\nDatos ingresados:\n");
    printf("Name: %s\tP1: %.3f\tP2: %d\tP3: %.4f\tPromedio: %.4f\n",
           name, p1, p2, p3, promedio);
}
void ejercicio2() {

    char texto[100];
    char textoNew[100];
    int k = 0;
    int vocales = 0, consonantes = 0, digitos = 0, especiales = 0;
    int sumaDigitos = 0;
    cout << "\nIngrese un texto completo:\n";
    cin.getline(texto, 100);
    int i = 0;
    char c = texto[i];
    while (c != '\0') {
        putchar(c);
        if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||
            c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            vocales++;
            textoNew[k++] = '*';
        }
        else if ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') )
        {
            consonantes++;
            char invertido = c;
            if (c >= 'a' && c <= 'z')
                invertido = c - 32;
            else if (c >= 'A' && c <= 'Z')
                invertido = c + 32;
            textoNew[k++] = invertido;
        }
        else if (c >= '0' && c <= '9')
        {
            digitos++;
            sumaDigitos += (c - '0');
        }
        else
        {
            especiales++;
        }
        i++;
        c = texto[i];
    }

    textoNew[k] = '\0';

    printf("\n\nResultados:\n");
    printf("Vocales: %d\tConsonantes: %d\tDigitos: %d\tEspeciales: %d\n",vocales, consonantes, digitos, especiales);
    printf("Suma de los digitos = %d\n", sumaDigitos);
    printf("Cadena reconstruida: %s\n", textoNew);
}
void ejercicio3() {

    cin.ignore();
    char buffer[150];
    char nombre[30];
    int edad;
    float score;
    char validFlag;
    int datos;
do{
    printf("Ingrese la cadena con el formato:\n");
    printf("USER=<nombre>;AGE=<edad>;SCORE=<decimal>;VALID=<T|F>\n");
    cin.getline(buffer, 150);
    datos = sscanf(buffer,"USER=%29[^;];AGE=%d;SCORE=%f;VALID=%c",nombre, &edad, &score, &validFlag);

    // Error sintactico
    if (datos != 4) {
        printf("Error sintactico:\n");
        printf("\tFormato invalido.\n");
        printf("\tDebe ser: USER=<nombre>;AGE=<edad>;SCORE=<decimal>;VALID=<T|F>\n");
        return;
    }

    // Nombre vacio
    if (nombre[0] == '\0' ) {
        printf("Error semantico:\n");
        printf("\tEl nombre no puede estar vacio\n");
        return;
    }
    //Edad fuera de rango
    if (edad < 0 || edad > 120) {
        printf("Error semantico:\n");
        printf("\tEdad fuera de rango (0-120)\n");
        return;
    }
    if (edad <18){
        printf("Usuario menor de edad\t");
    }
    //error Score
    if (score < 0.0 || score > 100.0) {
        printf("Error semantico:\n");
        printf("\tScore fuera de rango (0.0 - 100.0)\n");
        return;
    }
    // error validflag

    if (validFlag != 'T' && validFlag != 'F') {
        printf("Error semantico:\n");
        printf("\tVALID debe ser 'T' o 'F'\n");
        return;
    }
}while(nombre[2] == '\0');
    // Conversión explícita
    int scoreEntero = static_cast<int>(score);

    printf("\nDatos:\n");
    printf("Nombre:\t%s\n", nombre);
    printf("Edad:\t%d\n", edad);
    printf("Score:\t%.2f\n", score);
    printf("Score entero:\t%d\n", scoreEntero);
    printf("ValidFlag:\t%c\n", validFlag);

    if (validFlag == 'T')
        printf("\nRegistro valido\n");
    else
        printf("\nRegistro invalido\n");
if (validFlag = 'T' && score<=50){
       printf("\nAdvertencia!! score debe ser >=50\n");
        return;
    }
}


// error sintactico
   //USER=MariaAGE=19;SCORE=87.55;VALID=T
   //Falta el ';' después de Maria

//error semantico
   //USER=Maria;AGE=150;SCORE=87.55;VALID=T
   //La edad 150 está fuera del rango permitido (0–120)

//error tiempo de ejecucion
//ejm valido
//USER=Maria;AGE=19;SCORE=87.55;VALID=T
