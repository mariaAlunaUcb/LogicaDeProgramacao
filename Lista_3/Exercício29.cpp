#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int senha = 1;
	
	printf("Digite senha: ");
	scanf("%d", &senha);
	
	while(senha != 1234){
		system("cls");
		printf("\nSenha incorreta! tente novamente...\n");
	    printf("Digite senha: ");
		scanf("%d", &senha);
	}
    
    while(senha <= 1234){
    	printf("Senha aceita!");
    	senha ++;
	}
  
}
