#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Cadastrar\n");
        printf("2 - Consultar\n");
        printf("3 - Relatorio\n");
        printf("0 - Sair\n");
        printf("=======================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n[Executando] Operacao de Cadastro...\n");
                break;
                
            case 2:
                printf("\n[Executando] Operacao de Consulta...\n");
                break;
                
            case 3:
                printf("\n[Executando] Gerando Relatorio...\n");
                break;
                
            case 0:
                printf("\nSaindo do programa. Ate logo!\n");
                break;
                
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }
        
    } while (opcao != 0); 

    return 0;
}
