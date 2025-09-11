#include <stdio.h> // Usaremos apenas a biblioteca padrão.

int main() {
    // ================== DADOS PRÉ-DEFINIDOS DAS CARTAS ==================
    // --- CARTA 1: São Paulo ---
    char estado1[] = "SP";
    char cidade1[] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // Em bilhões
    int pontosturisticos1 = 50;
    
    // --- CARTA 2: Rio de Janeiro ---
    char estado2[] = "RJ";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // Em bilhões
    int pontosturisticos2 = 30;

    // --- Variáveis para os cálculos ---
    float densidade_populacional1, pib_per_capita1;
    float densidade_populacional2, pib_per_capita2;

    // --- Variáveis para as escolhas e valores ---
    int opcao1, opcao2;
    double valor_attr1_c1, valor_attr2_c1, soma_c1;
    double valor_attr1_c2, valor_attr2_c2, soma_c2;
    // Esta técnica de 'char*' para apontar para um texto não precisa de bibliotecas extras.
    char *nome_attr1, *nome_attr2;

    // ================== CÁLCULOS INICIAIS ==================
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;
    
    // ================== MENU - ESCOLHA DO ATRIBUTO 1 ==================
    printf("--- SUPER TRUNFO - BATALHA FINAL ---\n");
    printf("Jogador, escolha o PRIMEIRO atributo para a batalha:\n");
    printf("[1] População\n[2] Área\n[3] PIB\n[4] Número de Pontos Turísticos\n[5] Densidade Demográfica\n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &opcao1);

    if (opcao1 < 1 || opcao1 > 5) {
        printf("Erro: Opção inválida!\n");
        return 1;
    }

    // ================== MENU DINÂMICO - ESCOLHA DO ATRIBUTO 2 ==================
    printf("\nAgora, escolha o SEGUNDO atributo (diferente do primeiro):\n");
    if (opcao1 != 1) { printf("[1] População\n"); }
    if (opcao1 != 2) { printf("[2] Área\n"); }
    if (opcao1 != 3) { printf("[3] PIB\n"); }
    if (opcao1 != 4) { printf("[4] Número de Pontos Turísticos\n"); }
    if (opcao1 != 5) { printf("[5] Densidade Demográfica\n"); }
    printf("\nDigite sua escolha: ");
    scanf("%d", &opcao2);

    if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
        printf("Erro: Opção inválida ou igual à primeira!\n");
        return 1;
    }

    // ================== RECUPERANDO VALORES E NOMES DOS ATRIBUTOS ==================
    switch (opcao1) {
        case 1: valor_attr1_c1 = populacao1; valor_attr1_c2 = populacao2; nome_attr1 = "População"; break;
        case 2: valor_attr1_c1 = area1; valor_attr1_c2 = area2; nome_attr1 = "Área"; break;
        case 3: valor_attr1_c1 = pib1; valor_attr1_c2 = pib2; nome_attr1 = "PIB"; break;
        case 4: valor_attr1_c1 = pontosturisticos1; valor_attr1_c2 = pontosturisticos2; nome_attr1 = "Pontos Turísticos"; break;
        case 5: valor_attr1_c1 = densidade_populacional1; valor_attr1_c2 = densidade_populacional2; nome_attr1 = "Densidade"; break;
    }
    switch (opcao2) {
        case 1: valor_attr2_c1 = populacao1; valor_attr2_c2 = populacao2; nome_attr2 = "População"; break;
        case 2: valor_attr2_c1 = area1; valor_attr2_c2 = area2; nome_attr2 = "Área"; break;
        case 3: valor_attr2_c1 = pib1; valor_attr2_c2 = pib2; nome_attr2 = "PIB"; break;
        case 4: valor_attr2_c1 = pontosturisticos1; valor_attr2_c2 = pontosturisticos2; nome_attr2 = "Pontos Turísticos"; break;
        case 5: valor_attr2_c1 = densidade_populacional1; valor_attr2_c2 = densidade_populacional2; nome_attr2 = "Densidade"; break;
    }
    
    // ================== CÁLCULO DA SOMA E EXIBIÇÃO FINAL ==================
    soma_c1 = valor_attr1_c1 + valor_attr2_c1;
    soma_c2 = valor_attr1_c2 + valor_attr2_c2;

    printf("\n---------- RESULTADO DA RODADA ----------\n");
    printf("Atributos escolhidos: %s e %s\n\n", nome_attr1, nome_attr2);

    printf("--- CARTA 1: %s (%s) ---\n", cidade1, estado1);
    printf("Valor (%s): %.2f\n", nome_attr1, valor_attr1_c1);
    printf("Valor (%s): %.2f\n", nome_attr2, valor_attr2_c1);
    printf("SOMA TOTAL: %.2f\n\n", soma_c1);

    printf("--- CARTA 2: %s (%s) ---\n", cidade2, estado2);
    printf("Valor (%s): %.2f\n", nome_attr1, valor_attr1_c2);
    printf("Valor (%s): %.2f\n", nome_attr2, valor_attr2_c2);
    printf("SOMA TOTAL: %.2f\n\n", soma_c2);
    
    // ================== DECISÃO DO VENCEDOR ==================
    if (soma_c1 == soma_c2) {
        printf("Resultado: EMPATE!\n");
    } else {
        // Operador Ternário para decidir o nome do vencedor
        char* nome_vencedor = (soma_c1 > soma_c2) ? cidade1 : cidade2;
        printf("Resultado: A carta vencedora é a de %s!\n", nome_vencedor);
    }
    
    return 0;
}