#include <stdio.h>

int main(){
    int nota1, nota2, nota3; // aqui como geralmente são decimais seria melhor usar float e não colocar a quest, mas se for pra rodar int e float, melhor ter o quest. 
    float media;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Digite a sua primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%d", &nota2);
    
    printf("Digite a sua terceira nota: \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3; // float ali é o quest pra conversão explicita explicita

    printf("A média é: %.2f", media);

    return 0;
}