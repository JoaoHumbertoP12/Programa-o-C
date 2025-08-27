#include <stdio.h>
 
int main() {
    int idade;
    float Altura;
    char nome[50];
    char inicial;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite sua Altura: ");
    scanf("%f", &Altura);
    printf("Sua Altura é: %f\n", Altura);

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);
    printf("Seu primeiro nome é: %s\n", nome);

    printf("Digite sua inicial: ");
    scanf(" %c", &inicial);
    printf("Sua inicial é: %c\n", inicial);

    printf("Digite seu nome completo: ");
    scanf(" %[^\n]", nome);  // <-- lê até Enter, incluindo espaços
    printf("Seu nome completo é: %s\n", nome);

    return 0;

}