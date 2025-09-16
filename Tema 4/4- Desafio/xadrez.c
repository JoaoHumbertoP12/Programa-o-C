#include <stdio.h>

// ================== PROTÓTIPOS DAS FUNÇÕES ==================
// Declaramos as funções aqui para que a função main possa encontrá-las.
void moverTorreRecursivo(int passosRestantes);
void moverBispoRecursivo(int passosRestantes);
void moverRainhaRecursivo(int passosRestantes);

int main() {
    // ================== CONSTANTES DE MOVIMENTO ==================
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;
    const int movimentosCavaloCima = 2;
    const int movimentosCavaloDireita = 1;
    
    // =================================================================
    // PEÇA 1: TORRE (usando Recursividade)
    // =================================================================
    printf("--- Movimento da Torre (Recursivo: 5 casas para a direita) ---\n");
    moverTorreRecursivo(movimentosTorre);
    
    printf("\n");

    // =================================================================
    // PEÇA 2: BISPO (usando Recursividade e Loops Aninhados)
    // =================================================================
    printf("--- Movimento do Bispo (Recursivo: 5 casas na diagonal) ---\n");
    moverBispoRecursivo(movimentosBispo);

    printf("\n--- Movimento do Bispo (Loops Aninhados: 5 casas na diagonal) ---\n");
    // O loop externo controla o movimento vertical (linhas)
    for (int y = 1; y <= movimentosBispo; y++) {
        // O loop interno controla o movimento horizontal (colunas)
        for (int x = 1; x <= movimentosBispo; x++) {
            // A condição 'if (x == y)' garante que o movimento seja na diagonal
            if (x == y) {
                printf("Passo %d: Cima, Direita\n", y);
            }
        }
    }
    
    printf("\n");

    // =================================================================
    // PEÇA 3: RAINHA (usando Recursividade)
    // =================================================================
    printf("--- Movimento da Rainha (Recursivo: 8 casas para a esquerda) ---\n");
    moverRainhaRecursivo(movimentosRainha);

    printf("\n");

    // =================================================================
    // PEÇA 4: CAVALO (usando Loops Complexos Aninhados)
    // =================================================================
    printf("--- Movimento do Cavalo (Complexo: 2 para cima, 1 para a direita) ---\n");
    // O loop externo controla o eixo principal do movimento (vertical).
    for (int passoVertical = 1; passoVertical <= movimentosCavaloCima; passoVertical++) {
        printf("Cima\n");
        
        // Loop interno para a lógica do movimento perpendicular.
        for (int i = 0; i < 1; i++) {
            // Se NÃO for o último passo vertical, pula para a próxima iteração do loop de fora.
            if (passoVertical != movimentosCavaloCima) {
                continue; 
            }
            // Se for o último passo vertical, executa o movimento para a direita.
            printf("Direita\n");
        }
    }
    
    return 0;
}

// ================== IMPLEMENTAÇÃO DAS FUNÇÕES ==================

// Função para mover a Torre de forma recursiva.
// A cada chamada, imprime um passo e chama a si mesma com um passo a menos.
void moverTorreRecursivo(int passosRestantes) {
    if (passosRestantes <= 0) {
        return; // Condição de parada: para quando não há mais passos.
    }
    printf("Direita\n");
    moverTorreRecursivo(passosRestantes - 1); // Chamada recursiva.
}

// Função para mover o Bispo de forma recursiva.
void moverBispoRecursivo(int passosRestantes) {
    if (passosRestantes <= 0) {
        return; // Condição de parada.
    }
    printf("Cima, Direita\n");
    moverBispoRecursivo(passosRestantes - 1); // Chamada recursiva.
}

// Função para mover a Rainha de forma recursiva.
void moverRainhaRecursivo(int passosRestantes) {
    if (passosRestantes <= 0) {
        return; // Condição de parada.
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(passosRestantes - 1); // Chamada recursiva.
}