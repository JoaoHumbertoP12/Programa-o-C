#include <stdio.h> // Biblioteca padrão de entrada e saída em C. Necessária para usar printf e scanf.

int main(){


    // ================== VARIÁVEIS DA CARTA 1 ==================
    char estado1;                 // Estado (A-H) - Armazenado como caractere único
    char codigo1[4];              // Código da carta (ex: A01) - string = (array de caracteres)
    char cidade1[35];             // Nome da cidade - string 
    unsigned long int populacao1; // População - número inteiro 
    float area1;                  // Área em km² - número decimal
    float pib1;                   // PIB - número decimal
    int pontosturisticos1;        // Número de pontos turísticos - número inteiro

    // NOVAS VARIÁVEIS PARA OS CÁLCULOS DO NÍVEL AVENTUREIRO
    float densidadepopulacional1;
    float pibpercapita1;

    // NOVO: Variável para o Super Poder.
    float superpoder1; 
    
    // ================== VARIÁVEIS DA CARTA 2 ==================
    char estado2;                
    char codigo2[4];             
    char cidade2[35];            
    unsigned long int populacao2; // MUDANÇA: Usando unsigned long int para a população
    float area2;                 
    float pib2;                  
    int pontosturisticos2;     
    
    // NOVAS VARIÁVEIS PARA OS CÁLCULOS DO NÍVEL AVENTUREIRO
    float densidadepopulacional2;
    float pibpercapita2;

    // NOVO: Variável para o Super Poder.
    float superpoder2; 
 
    // ================== VARIÁVEIS PARA OS RESULTADOS DAS COMPARAÇÕES ==================
    // Estas variáveis guardarão 1 (se a Carta 1 vencer) ou 0 (se a Carta 2 vencer).
    int vitoriapopulacao;
    int vitoriaarea;
    int vitoriapib;
    int vitoriapontosturisticos;
    int vitoriadensidade;
    int vitoriapibpercapita;
    int vitoriasuperpoder;


    // ================== CADASTRO DA CARTA 1 ==================
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado selecionando uma letra de A à H: ");
    scanf(" %c", &estado1); // " %c" o espaço antes de %c tem a finalizade de ignorar qualquer ENTER anterior

    printf("Digite o código da carta seguindo a estrutura da letra anterior e um número (ex: A01): ");
    scanf(" %s", codigo1); // %s vai ler a string sem espaços, nesse caso não usamos o & por se tratar de uma String

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Durante alguns estudos aprendi que %[^\n] lê até encontrar ENTER e assim permite nomes com uso de espaço.

    printf("Digite a População: ");
    scanf("%lu", &populacao1); // %d: Imprime um inteiro no formato decimal.

    printf("Digite a Área (km², ex: 1234.56): ");
    scanf("%f", &area1); // %f Imprime um número de ponto flutuante no formato padrão.

    printf("Digite o PIB (Em Bilhões, ex: 12.3): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    // ================== CÁLCULOS DA CARTA 1 (NÍVEL AVENTUREIRO) ==================
    
    densidadepopulacional1 = (float)populacao1 / area1; // Calcula a densidade: habitantes por km².
    pibpercapita1 = (pib1 * 1000000000.0) / populacao1; // Calcula o PIB por pessoa. Multiplicamos por 1 bilhão para ter o valor em reais.
      
    // CÁLCULO DO SUPER PODER: somando todos os atributos numéricos. (NÍVEL MESTRE)
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibpercapita1 + (1.0f / densidadepopulacional1); // Note a conversão de tipo (casting) de populacao1 e pontosturisticos1 para float antes da soma.


    // ================== CADASTRO DA CARTA 2 ==================
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado selecionando uma letra de A à H: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta seguindo a estrutura da letra anterior e um número (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População: "); // MUDANÇA: Usando %lu para ler um unsigned long int.
    scanf("%lu", &populacao2);

    printf("Digite a Área (km², ex: 1234.56): ");
    scanf("%f", &area2);

    printf("Digite o PIB (Em Bilhões, ex: 12.3): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // ================== CÁLCULOS DA CARTA 2 (NÍVEL AVENTUREIRO) ==================
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibpercapita2 + (1.0f / densidadepopulacional2);

    // ================== COMPARAÇÕES COM OPERADORES RELACIONAIS ==================
    // Aqui, armazenamos o resultado (1 para verdadeiro, 0 para falso) de cada comparação.
    vitoriapopulacao = populacao1 > populacao2;
    vitoriaarea = area1 > area2;
    vitoriapib = pib1 > pib2;
    vitoriapontosturisticos = pontosturisticos1 > pontosturisticos2;
    vitoriadensidade = densidadepopulacional1 < densidadepopulacional2; // Regra especial: menor vence!
    vitoriapibpercapita = pibpercapita1 > pibpercapita2;
    vitoriasuperpoder = superpoder1 > superpoder2;

    // ================== EXIBINDO DADOS DA CARTA 1 ==================
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);  // %.2f - imprime float com duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    
    // Novas informações: (NÍVEL AVENTUREIRO)
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    
    // Novas informações: (NÍVEL MESTRE)
    printf("Super Poder: %.2f\n\n", superpoder1);


    // ================== EXIBINDO DADOS DA CARTA 2 ==================
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    // Novas informações: (NÍVEL AVENTUREIRO)
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    
    // Novas informações: (NÍVEL MESTRE)
    printf("Super Poder: %.2f\n\n", superpoder2);


      // ================== EXIBINDO RESULTADOS DAS COMPARAÇÕES ==================
    // Imprimimos o resultado numérico (1 ou 0) da vitória da Carta 1.
    printf("===== RESULTADO DA BATALHA =====\n");
    printf("(1 significa que a Carta 1 venceu, 0 que a Carta 2 venceu)\n");
    printf("Resultado População: %d\n", vitoriapopulacao);
    printf("Resultado Área: %d\n", vitoriaarea);
    printf("Resultado PIB: %d\n", vitoriapib);
    printf("Resultado Pontos Turísticos: %d\n", vitoriapontosturisticos);
    printf("Resultado Densidade Populacional: %d\n", vitoriadensidade);
    printf("Resultado PIB per Capita: %d\n", vitoriapibpercapita);
    printf("Resultado Super Poder: %d\n", vitoriasuperpoder);

    return 0;  // Finaliza o programa com sucesso
    
}