#include <stdio.h>
#include <locale.h>

#define MAX_PRODUTOS 3

struct Produto {
    int codigo;
    char nome[50];
    float preco;
};

int main() {
    setlocale(LC_ALL,"");
    
    struct Produto produtos[MAX_PRODUTOS];
    
    printf("--- Cadastro de Produtos ---\n\n");
    
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        printf("Produto %d:\n", i + 1);
        
        printf("Digite o código: ");
        scanf("%d", &produtos[i].codigo);
        
        printf("Digite o nome: ");
        scanf(" %[^\n]s", produtos[i].nome); 
        
        printf("Digite o preço: R$ ");
        scanf("%f", &produtos[i].preco);
        
        printf("\n");
    }
    
    printf("\n--- Produtos Cadastrados ---\n");
    
   
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        printf("Produto %d: Código = %d | Nome = %s | Preço = R$ %.2f\n", 
               i + 1, produtos[i].codigo, produtos[i].nome, produtos[i].preco);
    }
    
    return 0;
}
