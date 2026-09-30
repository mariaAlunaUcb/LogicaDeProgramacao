#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char produto[40];
	int quantidade;
	float preco;
	float final;
	
	printf("Digite o nome do produto: ");
	scanf("%s", produto);
	
	printf("Digite a quantidade do produto: ");
	scanf("%d", &quantidade);
	
	printf("Digite o valor do produto: ");
	scanf("%f", &preco);
	
	final = quantidade * preco;
	system("cls");
	
	printf("\n---Resultado final---");
	printf("\n\nProduto: %s", produto);
	printf("\nPreço: %.2f", preco);
	printf("\nQuantidade: %d", quantidade);
	printf("\n\nValor final : %.2f", final);
	
	
	return 0;
}
