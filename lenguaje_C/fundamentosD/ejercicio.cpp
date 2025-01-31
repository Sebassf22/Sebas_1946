#include <stdio.h> 
#include "factorial.h"
int main(){

    int num, resultado;

    printf("Ingrese un numero para calcular el factorial: ");
    scanf("%d", &num);

    resultado = calcularFactorial (num);

    if (resultado == -1){
        printf("El factorial de un numero negativo no esta definido.\n");   
    }else {
        printf("El factorial de %d es: %d\n", num, resultado);
    }

return 0;
