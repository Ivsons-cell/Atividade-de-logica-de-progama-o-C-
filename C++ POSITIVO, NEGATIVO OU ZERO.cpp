#include <stdio.h>

int main() {
    int i, num;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº numero inteiro: ", i);
        scanf("%d", &num);

        if (num > 0) {
            printf("O numero %d e POSITIVO.\n\n", num);
        } else if (num < 0) {
            printf("O numero %d e NEGATIVO.\n\n", num);
        } else {
            printf("O numero e ZERO.\n\n");
        }
    }

    return 0;
}
