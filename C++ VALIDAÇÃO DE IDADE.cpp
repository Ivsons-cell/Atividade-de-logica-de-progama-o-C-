#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int idade;
	
	do{
		printf("digite uma idade valida: ");
		scanf("%d",idade);
		if(idade < 0){
			printf("idade invalida. \n");
		}
	}while(idade < 0);
	
	printf("idade resistrada: %d",idade);
	
	
	

	return 0;
	
	}

