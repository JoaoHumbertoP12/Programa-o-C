#include <stdio.h>

int main() {
    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", (int) numero1 > numero2); // conversão explicita, aplicando o int pra transformar tudo em inteiro, valendo assim tudo o valor de 10. 
    printf("numero1 == numero2: %d\n", (int) numero1 == numero2);

    return 0;
}