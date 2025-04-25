#include <stdio.h>

int pot(int base, int expoente){
    int i;
    int resultado = 1;
    for (i = 0; i < expoente; i++){
        resultado *= base;
    }

    return resultado;
}