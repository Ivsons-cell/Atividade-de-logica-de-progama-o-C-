#include <stdio.h>
#include <string.h>

#define TOTAL_ESTUDANTES 3

struct Estudante {
    char nome[50];
    float nota;
};

int main() {
    struct Estudante estudantes[TOTAL_ESTUDANTES];

    for (int i = 0; i < TOTAL_ESTUDANTES; i++){
        printf("Digite o nome do %dº estudante: ", i + 1);
        scanf(" %[^\n]", estudantes[i].nome);
        
        printf("Digite a nota registrada de %s: ", estudantes[i].nome);
        scanf("%f", &estudantes[i].nota);
        printf("\n");
    }

    printf("--- RESULTADOS DOS ESTUDANTES ---\n");
    for (int i = 0; i < TOTAL_ESTUDANTES; i++) {
        printf("Estudante: %s\n", estudantes[i].nome);
        printf("Nota registrada: %.2f\n", estudantes[i].nota);

        if (estudantes[i].nota >= 7.0) {
            printf("Situacão: Nota maior ou igual a 7 (Aprovado/Satisfatario)\n");
        } else {
            printf("Situacão: Nota menor que 7 (Abaixo da media)\n");
        }
        printf("----------------------------------\n");
    }

    return 0;
}
