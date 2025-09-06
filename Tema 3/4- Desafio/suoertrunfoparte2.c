#include <stdio.h> // Biblioteca padrão para entrada e saída de dados.

int main() {
    // ================== DADOS PRÉ-DEFINIDOS DAS CARTAS ==================
    // Para este desafio, os dados são fixos no código, sem scanf.

    // --- CARTA 1: São Paulo ---
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28; // Em bilhões
    int pontosturisticos1 = 50;
    
    // --- CARTA 2: Rio de Janeiro ---
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50; // Em bilhões
    int pontosturisticos2 = 30;

    // --- Variáveis para os cálculos ---
    float densidadepopulacional1, pibpercapita1;
    float densidadepopulacional2, pibpercapita2;

    // ================== CÁLCULOS (reaproveitados do nível anterior) ==================
    // Mesmo com dados fixos, os cálculos continuam sendo necessários.
    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / populacao1;
    
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;
    
    // ================== LÓGICA DE COMPARAÇÃO (O FOCO DO DESAFIO) ==================
    // Vou escolher a POPULAÇÃO como o atributo para a batalha, conforme o exemplo.

    // 1. Exibir o cabeçalho e os dados que serão comparados
    printf("Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    // 2. Usar if/else para determinar e imprimir o resultado
    // A estrutura if/else permite que o programa "decida" qual bloco de código executar.
    
    if (populacao1 > populacao2) {
        // Este bloco só é executado se a população da Carta 1 for MAIOR.
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } 
    else if (populacao2 > populacao1) {
        // Este bloco só é executado se a população da Carta 2 for MAIOR.
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } 

    return 0; // Finaliza o programa
}