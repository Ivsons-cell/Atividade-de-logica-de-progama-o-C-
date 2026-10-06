#include <stdio.h>

int main() {
    int numero;

    while (1) {
        printf("Digite um numero (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Saindo do programa...\n");
            break; 
        }

        printf("Voce digitou o numero: %d\n\n", numero);
    }

    return 0;
}
