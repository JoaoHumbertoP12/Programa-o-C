#include <stdio.h>
 
int main() {
    int idade = 25;
    float altura = 1.81;
    double saldoBancario = 23489.98;
    char inicial = 'J';
    char nome[20] = "João Humberto";
    char Nome[21] = "Allana";
 
    printf("Idade do João é: %d anos\n", idade);
    printf("Altura do João é: %.2f metros\n", altura);
    printf("Saldo Bancário do João é: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome do João é: %c\n", inicial);
    printf("Nome: %s\n", nome);
    printf("Nome da esposa do João: %s\n", Nome);
 
    return 0;
}