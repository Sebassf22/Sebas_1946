#include "factorial.h"
int calcularFactorial(int n){
    if (n < 0){
        return -1;
    }

    int resultado =1;
    for (int i = 1; i <= n; i++){
        resultado *= i;
    }

    return resultado;
}