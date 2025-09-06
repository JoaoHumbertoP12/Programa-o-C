#include <stdio.h>

int main() {
    int x = 5;
    float y = 5.0;
    char c = 'a'; // quando usado o char com a letra a letra vai ter um numero inteiro correspondido pela tabela ASCII

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c); 
    printf("O Valor ASCII de %c é %d: \n", c, c);
    return 0;
}