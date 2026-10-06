#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int senha;
	
	printf("digite uma senha numerica: ");
	scanf("%d,",&senha);
	
	while (senha != 1234) {
		printf("senha incorreta.\n");
				printf("digite senha novamente: ");
				scanf("%d",&senha);
				

	}
	printf("acesso permitido.\n");
	return 0;
}
