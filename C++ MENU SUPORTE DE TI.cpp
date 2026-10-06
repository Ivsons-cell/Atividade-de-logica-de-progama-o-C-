#include <studio>
#include <locale>

int main(){
	setocalo(LC_ALL);
	
	int tiposervico;
	int prioridade
	int clienteativo
	
	printf("====================");
	printf(" sistema de suprote de TI\n");
    printf("====================");
	
		
	printf("\n ---cliente ativo---\n");
	printf("1- sim\n");
	printf("2- não\n");
	printf("opção: ")
    printf("%d",&clienteativo)
		
	printf("\n---------------------\n")
	printf("1- sotware\n");
	printf("2- hardware\n");
	printf("3- rede\n");
    printf("opção: ")
	printf("%d",&tipodeservico);
	
	
	pritf("\nprioridade:\n");
    printf("\n ---cliente ativo---\n");
	printf("1- urgente\n");
	printf("2- prioritario\n");
	printf("normal\n")
	printf("opção: ")
    printf("%d",&prioridade)
    
    if(clienteativo ==1){
    	printf("cliente: ativo\n");
    	
	}else{
	  pritf("cliente inativo\n");  
	  
	}
	  
	
	
	switch (tipoServico) {

case 1:

printf("suporte Software selecionado\n");

break;

case 2:

printf("suprote Hardware selecionado\n");

break;

case 3:

printf("suporte de Rede selecionado\n");

break;

default:

printf("Opcao invalida.\n");

}

if (prioridade == 1){
	printf("urgente\n");
	
	}else if (priodade == 2);
	printf("prioritario\n")
	

