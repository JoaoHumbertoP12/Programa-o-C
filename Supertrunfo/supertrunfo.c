#include <stdio.h> // Biblioteca padrão de entrada e saída em C. Necessária para usar printf e scanf.

int main(){


    // ================== VARIÁVEIS DA CARTA 1 ==================
    char estado1;             // Estado (A-H) - Armazenado como caractere único
    char codigo1[4];         // Código da carta (ex: A01) - string = (array de caracteres)
    char cidade1[35];         // Nome da cidade - string 
    int populacao1;           // População - número inteiro
    float area1;              // Área em km² - número decimal
    float pib1;               // PIB - número decimal
    int pontosturisticos1;    // Número de pontos turísticos - número inteiro

    
    // ================== VARIÁVEIS DA CARTA 1 ==================
    char estado2;                
    char codigo2[4];             
    char cidade2[35];            
    int populacao2;              
    float area2;                 
    float pib2;                  
    int pontosturisticos2;      


    // ================== CADASTRO DA CARTA 1 ==================
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado selecionando uma letra de A à H: ");
    scanf(" %c", &estado1); // " %c" o espaço antes de %c tem a finalizade de ignorar qualquer ENTER anterior

    printf("Digite o código da carta seguindo a estrutura da letra anterior e um número (ex: A01): ");
    scanf(" %s", codigo1); // %s vai ler a string sem espaços, nesse caso não usamos o & por se tratar de uma String

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Durante alguns estudos aprendi que %[^\n] lê até encontrar ENTER e assim permite nomes com uso de espaço.

    printf("Digite a População: ");
    scanf("%d", &populacao1); // %d: Imprime um inteiro no formato decimal.

    printf("Digite a Área (km², ex: 1234.56): ");
    scanf("%f", &area1); // %f Imprime um número de ponto flutuante no formato padrão.

    printf("Digite o PIB (Em Bilhões, ex: 12.3): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);


    // ================== CADASTRO DA CARTA 2 ==================
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado selecionando uma letra de A à H: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta seguindo a estrutura da letra anterior e um número (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (km², ex: 1234.56): ");
    scanf("%f", &area2);

    printf("Digite o PIB (Em Bilhões, ex: 12.3): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);


    // ================== EXIBINDO DADOS DA CARTA 1 ==================
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);  // %.2f - imprime float com duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);


    // ================== EXIBINDO DADOS DA CARTA 2 ==================
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;  // Finaliza o programa com sucesso


}