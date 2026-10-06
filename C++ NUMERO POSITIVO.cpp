#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Valor invalido, digite novamente.\n\n");
        }
    } while (numero < 0);

    printf("Voce digitou o numero valido: %d\n", numero);

    return 0;
}
