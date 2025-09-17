#include <stdio.h>
 
int main() {

    int index;

    char * nomeAlunos [3][3] = {
        {"Aluno 1", "Pt: 30", "Mat:90"},
        {"Aluno 2", "Pt: 60", "Mat:60"},
        {"Aluno 3", "Pt: 90", "Mat:30"}
    };

    printf("Digite o número do aluno que deseja ver as notas: \n");
    printf("Para o Aluno João, digite 0 \n");
    printf("Para o Aluno Pedro, digite 1 \n");
    printf("Para o Aluno Lucas, digite 2 \n");

    scanf("%d", &index);

    printf("As notas do %s foram: %s, %s... \n", nomeAlunos[index][0], nomeAlunos[index][1], nomeAlunos[index][2]); 

return 0;

}