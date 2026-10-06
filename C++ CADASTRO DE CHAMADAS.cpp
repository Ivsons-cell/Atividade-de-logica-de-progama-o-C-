#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int qtd,i,cod,prioridade;
	
	printf("quantidade de chamados: ");
	scanf("%d",&qtd);
	
	for (i = 1; i <= qtd; i++){
		printf("\n === CHAMADO %d ===\n", i);
		printf("Codigo: ");
		scanf("%d",&cod);
		
		do{
			printf("Prioridade [1-Urgente 2-Prioritario 3-Normal]:");
		
		
			scanf("%d",&prioridade);
			
			if(prioridade , 1 || prioridade > 3){
				printf("Prioridade invalida!\n");
			}
		}while(prioridade < 1 || prioridade > 3);
		
		if(prioridade == 1 ){
			printf("classificação: URGENTE\n");
		}else if(prioridade == 2 ){
			printf("Classificação: Prioritario\n");
		}else{
			printf("Classificação: Normal\n");
        }
	}

printf("\ncadastros finalizados.\n");
return 0;
}



