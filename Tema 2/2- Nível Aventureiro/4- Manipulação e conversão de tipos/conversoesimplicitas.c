#include <stdio.h>

int main () {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);

    return 0;

}   // se essa conversão acontece ao contratio, tipo de float pra int, pode quebrar o código, por que vamos perder dados. 