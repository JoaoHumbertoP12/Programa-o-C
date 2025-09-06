#include <stdio.h>

int main (){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com número 1: \n");
    scanf("%d", &numero1);
    printf("Entre com número 2: \n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;   // operação soma

    subtracao = numero1 - numero2;   // operação subtração

    multiplicacao = numero1 * numero2;  // operação multiplicação

    divisao = numero1 / numero2;  // operação divisão

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);

    return 0;
}