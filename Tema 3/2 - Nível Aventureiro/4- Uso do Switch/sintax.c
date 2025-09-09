#include <stdio.h>

int main(){
    int variavel;

    printf("Digite um valor\n");
    scanf("%d", &variavel);

switch (variavel) {
  case 1: // Código a ser executado se variavel == valor1
    printf("Código a ser executado se variavel == 1\n ");  
  break;
  case 2: // Código a ser executado se variavel == valor2
    printf("Código a ser executado se variavel == 2\n ");  
  break;
  case 3: // Código a ser executado se variavel == valor2
    printf("Código a ser executado se variavel == 3\n ");  

  // Você pode adicionar quantos casos forem necessários

  default: // Código a ser executado se nenhum dos casos acima for verdadeiro

    printf("Código a ser executado se a variavel não for 1, 2 ou 3\n ");  
}



}