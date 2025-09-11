#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numerojogador, numerocomputador, resultado;
    char tipocomparacao;

    // Gerar Número Aleatório
    srand(time(0));
    numerocomputador = rand() % 100 + 1; // número entre 1 e 100

    // Início do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("T. Igual\n");

    printf("Escolha a comparação; ");
    scanf("%c", &tipocomparacao);

    printf("Digite seu Número entre 1 e 100; ");
    scanf("%d", &numerojogador);

    // Exibir Número do computador
    printf("O número do Computador é: %d\n", numerocomputador);

    switch (tipocomparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior!\n");
        resultado = numerojogador > numerocomputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor!\n");
        resultado = numerojogador < numerocomputador ? 1 : 0;
        break;
    case 'T':
    case 't':
        printf("Você escolheu a opção igual!\n");
        resultado = numerojogador == numerocomputador ? 1 : 0;
        break;
    
    default: printf("Opção de jogo inválida!!\n");
        break;
    }
    if (resultado == 1)
    {
        printf("Você Venceu!\n");
    
    } else {
        printf("Você Perdeu!!\n");
    }

}