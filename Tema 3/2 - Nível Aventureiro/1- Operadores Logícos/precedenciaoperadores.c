#include <stdio.h>

int main() {
  int a = 5;
  int b = -10;
  int c = 1;
 
  if (a > 0 && b < 0 || c == 0) {
    printf("A condição é verdadeira\n");
  } else {
    printf("A condição é falsa\n");
  }

  return 0;
}


// Lógica de execução do código
// 1- Passo: Vai conferir se A > 0, nesse caso o retorno é verdadeiro. 
// 2- Passo: Vai conferir se A < 0, nesse caso o retorno é verdadeiro. 
// 3- Passo: Vai conferir se Verdadeiro && Verdadeiro, nesse caso o retorno é verdadeiro. 
// 4- Passo: Vai conferir se Verdadeiro || c == 0 
// 5- Passo: Vai conferir se Verdadeiro || Falso, nesse caso o retorno é verdadeiro. 