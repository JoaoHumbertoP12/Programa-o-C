#include <stdio.h>

int main() {

    int numero, i;
    int option;

 do {
        printf("Menu:\n");
        printf("1. Calcular a tabuada\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("Digite um número para calcularmos a tabuada... \n");
    scanf("%d", &numero);

    for(i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d \n", i, numero, i * numero);
    }
                break;
            case 2:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 2);
    


    return 0;



}


   
   