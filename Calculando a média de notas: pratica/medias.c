#include <stdio.h>

int main (){
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("-Nome do Aluno: %s\n-Matrícula: %d\n", nome, matricula);
    printf("-Idade do Aluno: %d\n-Altura do Aluno: %.2f\n", idade, altura);

    return 0;

}