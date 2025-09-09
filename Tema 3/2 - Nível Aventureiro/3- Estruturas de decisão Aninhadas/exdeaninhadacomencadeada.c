#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0){
        if (numero % 2 == 0) // aninhadas
        {
            printf("Número par\n");
        } else {
            printf("Número ímpar\n");
        }
        printf("positivo\n");
    } else if (numero == 0){ // encadeada
        printf("Número é zero\n");
        }
         else {
            printf("Numero é negativo");
        } 
    }

