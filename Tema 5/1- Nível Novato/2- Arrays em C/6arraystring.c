#include <stdio.h>
 
int main() {
    char *nomes[] = {"Alice", "Bob", "Carol", "Julia", "João Humberto", "Pedro"};
    int i;
    for(i = 0; i < 6; i++) {
        printf("%s\n", nomes[i]);
    }
    return 0;
}