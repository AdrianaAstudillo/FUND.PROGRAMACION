#include <cctype>
#include <cstdio>
#include<conio.h>
int main (){
    int num1,num2,num3;
    char menu;
printf("\t Menu de ejercicios en C++\n");
printf("a. Break y continue\n");
printf("b. Diagrama 1\n");
printf("c. Diagrama 2\n");
printf("Seleccione una opcion: ");
menu = getch();
putchar(menu);
printf("\n");
switch(tolower(menu)){
    case 'a':
        printf("Break continue\n");
        printf("break\n");
        for(int cont=1; cont<=20; cont+=2){
            printf("- %d",cont);
        if (cont == 7);
        }
        printf("Continue \n");
        for(int cont=1; cont<=20; cont+=2){
        if (cont >=5 && cont <=9);
            continue;
            printf("- %d",cont);
        }
        break;
    case 'b':
        printf("Ingrese el primer numero a comparar: ");
        scanf ("%d",num1 );
        printf("Ingrese el segundo numero a comparar: ");
        scanf ("%d",num2 );
        printf("Ingrese el tercer numero a comparar: ");
        scanf ("%d",num3 );
        if (num1>num2 && num1>num3){
                printf("El primer numero es el mayor");
        }else{
            if (num2>num1 &&num2>num3){
                printf("El segundo numero es el mayor");
                }else{
                    if (num3>num1 && num3> num2){
                            printf("El tercer numero es el mayor");
                    }
        }
        }




        break;
    default:
        printf("Ejercicio no disponible");

}
return 0;
}
