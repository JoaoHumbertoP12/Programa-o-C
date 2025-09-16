#include <stdio.h>
 
// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1 ; a ordem altera o resultado, se eu colocar o printf pra baixo ele inverte a contagem. 
    }
}
 
int main() {
    int numero = 500;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}