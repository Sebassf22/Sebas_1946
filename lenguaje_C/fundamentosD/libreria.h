#ifndef FACTORIAL_H
#define FACTORIAL_H
int calcularFactorial(int n);
int calcularFactorial (int n){
    if (n == 0 || n == 1){
        return 1;
    } else {
        return n * calcularFactorial(n-1);
    }
}
#endif