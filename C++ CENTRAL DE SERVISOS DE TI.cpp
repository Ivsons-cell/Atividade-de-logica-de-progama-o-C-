#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int opcao_menu = 1;
    int tipo, prioridade;

    int total_atendimentos = 0;
    int qtd_software = 0;
    int qtd_hardware = 0;
    int qtd_rede = 0;
    int qtd_urgente = 0;

    while (opcao_menu != 0) {
        printf("\n=== CENTRAL DE SERVIÇOS DE TI ===\n");
        printf("1 - Registrar Novo Atendimento\n");
        printf("0 - Encerrar Sistema e Exibir Relatório\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao_menu);

        if (opcao_menu == 1) {
            
            do {
                printf("\n--- Selecione o Tipo de Atendimento ---\n");
                printf("1 - Software\n");
                printf("2 - Hardware\n");
                printf("3 - Rede\n");
                printf("Opção: ");
                scanf("%d", &tipo);

                if (tipo < 1 || tipo > 3) {
                    printf("Opção inválida! Tente novamente.\n");
                }
            } while (tipo < 1 || tipo > 3);

            do {
                printf("\n--- Selecione a Prioridade ---\n");
                printf("1 - Urgente\n");
                printf("2 - Prioritário\n");
                printf("3 - Normal\n");
                printf("Opção: ");
                scanf("%d", &prioridade);

                if (prioridade < 1 || prioridade > 3) {
                    printf("Opção inválida! Tente novamente.\n");
                }
            } while (prioridade < 1 || prioridade > 3);

            switch (tipo) {
                case 1:
                    qtd_software++;
                    break;
                case 2:
                    qtd_hardware++;
                    break;
                case 3:
                    qtd_rede++;
                    break;
            }

            if (prioridade == 1) {
                qtd_urgente++;
            }

            total_atendimentos++;
            printf("\n Atendimento registrado com sucesso!\n");

        } else if (opcao_menu != 0) {
            printf("Opção inválida! Digite 1 para registrar ou 0 para sair.\n");
        }
    }

    printf("\n=====================================\n");
    printf("        RELATÓRIO DE FINALIZAÇÃO     \n");
    printf("=====================================\n");
    printf("Quantidade total de atendimentos: %d\n", total_atendimentos);
    printf("-------------------------------------\n");
    printf("Quantidade por tipo:\n");
    printf("  - Software: %d\n", qtd_software);
    printf("  - Hardware: %d\n", qtd_hardware);
    printf("  - Rede:     %d\n", qtd_rede);
    printf("-------------------------------------\n");
    printf("Quantidade de chamados urgentes: %d\n", qtd_urgente);
    printf("=====================================\n");

    return 0;
}
