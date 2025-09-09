#include <stdio.h>

int main() {
  int idade = 20;
  float altura = 1.75;

  if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n");
  } else {
    printf("Você não atende aos critérios\n");
  }

  return 0;
}

// Lógica de execução do código
// 1- Passo: Vai conferir se idade é maior que 18, nesse caso o retorno é verdadeiro. 
// 2- Passo: Vai conferir se idade é menor que 30, nesse caso o retorno é verdadeiro. 
// 3- Passo: Vai conferir se Verdadeiro && Altura > 1.70
// 4- Passo: Vai conferir se Verdadeiro && Verdadeiro, o retorno é verdadeiro para operações em && que tem os atributos verdadeiros. 