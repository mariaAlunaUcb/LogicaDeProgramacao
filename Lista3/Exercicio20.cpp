#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma, subtracao, multiplicacao, divisao;
	int op;
	
	printf("Digite um número: ");
	scanf("%f", &n1);
	
	printf("Digite outro número: ");
	scanf("%f", &n2);
	
	system("cls");
	
	printf("\nDigite a operação desejada: ");
	printf("\n1- Soma");
	printf("\n2- Subtração");
	printf("\n3- Multiplicação");
	printf("\n4- Divisão");
	printf("\nEscolha uma opção: ");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			soma = n1 + n2;
			printf("\nSoma: %.2f + %.2f = %.2f ", n1, n2, soma);
		break;
		
		case 2: 
		   subtracao = n1 - n2;
		   printf("\nSubtração: %.2f - %.2f = %.2f ", n1, n2, subtracao);
		break;
		
		case 3: 
		   multiplicacao = n1 * n2;
		   printf("\nMultiplicação: %.2f * %.2f = %.2f ", n1, n2, multiplicacao);
		break;
		
		case 4: 
		   divisao = n1 / n2;
		   printf("\nDivisão: %.2f / %.2f = %.2f ", n1, n2, divisao);
		break;
	
		
	}
	
	
	


	
	return 0;
}
