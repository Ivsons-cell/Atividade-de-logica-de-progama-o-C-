#include <stdio.h>

int main() {
    int funcionando = 0;
    int defeito = 0;
    int status;

    for (int i = 1; i <= 10; i++) {
        
		while (1) {
            printf("Digite o estado do computador %d (1 = Funcionando / 0 = Com Defeito): ", i);
            scanf("%d", &status);

            if (status == 1) {
                funcionando++;
                break; 
            } else if (status == 0) {
                defeito++;
                break; 
            } else {
                printf("Valor invalido! Por favor, digite apenas 0 ou 1.\n\n");
            }
        }
    }

    printf("\n--- Resultado Final ---\n");
    printf("computadores funcionando:%d\n", funcionando);
    printf("computadores com defeito :%d\n", defeito);

    return 0;
}
