#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int opcao;
    int qtd_software = 0;
    int qtd_hardware = 0;
    int qtd_rede = 0;
    int total_atendimentos = 0;

    printf("--- CONTROLE DE ATENDIMENTO ---\n\n");

    for (int i = 1; i <= 10; i++) {
        printf("Atendimento nº %d\n", i);
        printf("Informe o tipo (1-Software, 2-Hardware, 3-Rede): ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                qtd_software++;
                total_atendimentos++;
                break;
            case 2:
                qtd_hardware++;
                total_atendimentos++;
                break;
            case 3:
                qtd_rede++;
                total_atendimentos++;
                break;
            default:
                printf("Opcao invalida! Este atendimento não sera contabilizado.\n");
                i--; 
                break;
        }
        printf("\n");
    }

    printf("--- RESUMO DOS ATENDIMENTOS ---\n");
    printf("Software: %d\n", qtd_software);
    printf("Hardware: %d\n", qtd_hardware);
    printf("Rede: %d\n", qtd_rede);
    printf("Total de atendimento: %d\n", total_atendimentos);

    return 0;
}
