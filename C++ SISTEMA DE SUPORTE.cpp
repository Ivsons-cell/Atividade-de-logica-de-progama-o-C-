#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao = -1;
    
   
    int total_chamados = 0;
    int qtd_software = 0;
    int qtd_hardware = 0;
    int qtd_rede = 0;
    int qtd_urgente = 0;
    
    
    int codigo, tipo, prioridade;

    while (opcao != 0) {
        
        printf("\n========================\n");
        printf("    SISTEMA DE SUPORTE\n");
        printf("========================\n");
        printf("1 - Registrar chamado\n");
        printf("2 - Relatorio\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("\n--- REGISTRAR CHAMADO ---\n");
                printf("Digite o codigo do chamado: ");
                scanf("%d", &codigo);
                
        
                do {
                    printf("Selecione o Tipo (1-Software, 2-Hardware, 3-Rede): ");
                    scanf("%d", &tipo);
                    if (tipo < 1 || tipo > 3) {
                        printf("Opcao invalida! Tente novamente.\n");
                    }
                } while (tipo < 1 || tipo > 3);
                
                do {
                    printf("Selecione a Prioridade (1-Urgente, 2-Prioritario, 3-Normal): ");
                    scanf("%d", &prioridade);
                    if (prioridade < 1 || prioridade > 3) {
                        printf("Opcao invalida! Tente novamente.\n");
                    }
                } while (prioridade < 1 || prioridade > 3);
                
                total_chamados++;
                
                if (tipo == 1) qtd_software++;
                else if (tipo == 2) qtd_hardware++;
                else if (tipo == 3) qtd_rede++;
                
                if (prioridade == 1) qtd_urgente++;
                
                printf("\nChamado %d registrado com sucesso!\n", codigo);
                break;
                
            case 2:
                printf("\n========================\n");
                printf("  RELATORIO DE CHAMADOS\n");
                printf("========================\n");
                printf("Total de chamados registrados: %d\n", total_chamados);
                printf("Chamados de Software: %d\n", qtd_software);
                printf("Chamados de Hardware: %d\n", qtd_hardware);
                printf("Chamados de Rede: %d\n", qtd_rede);
                printf("Chamados Urgentes: %d\n", qtd_urgente);
                printf("========================\n");
                break;
                
            case 0:
                printf("\nSaindo do sistema... Ate logo!\n");
                break;
                
            default:
                printf("\nOpcao invalida! Escolha uma opcao do menu.\n");
        }
    }

    return 0;
}
