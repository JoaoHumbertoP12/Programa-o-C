#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes Incremento: %d\n", numero1); //numero1 = numero1 + 1; para Operador de Atribuição seria numero1 += 1;
    numero1++;
    printf("Após Incremento: %d\n", numero1);

    numero1--;
    printf("Após Decremento: %d\n", numero1); //numero1 = numero1 - 1; para Operador de Atribuição seria numero1 -= 1;

    printf("Antes Incremento: %d\n", numero1); //numero1 = numero1 + 1; para Operador de Atribuição seria numero1 += 1;

    numero1--;
    printf("Após Decremento: %d\n", numero1); //numero1 = numero1 - 1; para Operador de Atribuição seria numero1 -= 1;

    resultado = numero1++;
    printf("Após Pós-incremento - Número 1: %d - resultado: %d\n", numero1, resultado); // Pós-incremento: resultado = numero1; numero++;

    resultado = ++numero1;
    printf("Após Pré-incremento - Número 1: %d - resultado: %d\n", numero1, resultado); 

    resultado = numero1--;
    printf("Após Pós-decremento - Número 1: %d - resultado: %d\n", numero1, resultado); 

    resultado = --numero1;
    printf("Após Pré-decremento - Número 1: %d - resultado: %d\n", numero1, resultado); 
 
    return 0;

}