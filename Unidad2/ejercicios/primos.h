#ifndef  PRIMOS_H
#define PRIMOS_H
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
            return 0;
    }
}
#endif
