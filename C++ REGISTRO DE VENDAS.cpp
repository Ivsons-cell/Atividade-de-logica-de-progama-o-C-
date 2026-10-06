#include <stdio.h>

int main() {
    float valor_venda;
    float total_vendido = 0.0;
    float media_vendas;
    int i;

    for(i = 1; i <= 5; i++) {
        printf("Digite o valor da venda %d: R$ ", i);
        scanf("%f", &valor_venda);

        total_vendido += valor_venda;
    }

    media_vendas = total_vendido / 5;

    printf("\n--- Resumo de Vendas ---\n");
    printf("Total vendido: R$ %.2f\n", total_vendido);
    printf("Média das vendas: R$ %.2f\n", media_vendas);

    return 0;
}
