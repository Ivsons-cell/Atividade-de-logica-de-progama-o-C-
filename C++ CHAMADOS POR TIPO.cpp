#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int opcaoMenu;
    int codigoChamado;
    int tipoChamado;

    printf("--- MENU: SISTEMA DE CHAMADOS ---\n");
    printf("1. Cadastrar Chamado\n");
    printf("2. Sair\n");
    printf("Escolha uma opçao: ");
    scanf("%d", &opcaoMenu);

    switch(opcaoMenu) {
        case 1:
            printf("\n--- CADASTRO DE CHAMADO ---\n");
            
            printf("Digite o codigo do chamado: ");
            scanf("%d", &codigoChamado);

            printf("\nEscolha o tipo de chamado:\n");
            printf("1. Software\n");
            printf("2. Hardware\n");
            printf("3. Rede\n");
            printf("Opçao: ");
            scanf("%d", &tipoChamado);

            switch(tipoChamado) {
                case 1:
                    printf("\n[Chamado %d] Tipo: Software | Prioridade: Normal\n", codigoChamado);
                    break;
                case 2:
                    printf("\n[Chamado %d] Tipo: Hardware | Prioridade: Alta\n", codigoChamado);
                    break;
                case 3:
                    if(codigoChamado == 105) {
                        printf("\n[Chamado %d] Tipo: Rede | Prioridade: URGENTE\n", codigoChamado);
                    } else {
                        printf("\n[Chamado %d] Tipo: Rede | Prioridade: Alta\n", codigoChamado);
                    }
                    break;
                default:
                    printf("\nTipo de chamado invalido!\n");
                    break;
            }
            break;

        case 2:
            printf("Saindo do sistema...\n");
            break;

        default:
            printf("Opçao de menu invalida!\n");
            break;
    }

    return 0;
}
