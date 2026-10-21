#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int op1(float valor){
	float valorFinal;
	
	valorFinal = valor - (valor * 0.10);
	
	system("cls");
	printf("-------RESULTADO----");
	printf("Opcao escolida ");
	
	
}

void imprimirOpcoes(){
	
	int op;
	system("cls");
	printf("----Escolha uma das opcoes-----");
	printf("\n1- A vista com 10%% de desconto");
	printf("\n2- Em duas vezes com preco original");
	printf("\n3- 3 ate 10 vezes com 3%% de juros ao mes\nSomente para compras acima de R$ 100.00");
	printf("\n\nSolicite opcao desejada: ");
	scanf("%d", &op);
	
	switch(op){
		
		case 1:
			printf("Opcao escolhida : 1- A vista com 10%% de desconto");
			op1()
			getchar();
			getchar();
			break;
			
		case 2: 
		    printf("Opcao escolhida : 2- Em duas vezes com preco original");
			getchar();
			getchar();
			break;
			
		case 3:
		    printf("Opcao escolhida : 3- 3 ate 10 vezes com 3%% de juros ao mes\nSomente para compras acima de R$ 100.00");
			getchar();
			getchar();
			break;
	}
	
}
int main(){
	float valor;
		
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    
    printf("Salvando valor...");
    sleep(1.2);
    
    imprimirOpcoes();
    
    system("cls");
    
    
	
}