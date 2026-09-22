#include <stdio.h>

int main(){
	
	char nome[30];
	int i = 1, quantidade;
	float preco, total, acumulo;
	
	while(i != 0){
		
		
		printf("Escreva o nome do produto: ");
		scanf("%s", &nome);
		
		printf("Escreva o preço unitario: ");
		scanf("%f", &preco);
		
		printf("Escreva a quantidade do produto: ");
		scanf("%d", &quantidade);
		
		total = preco * quantidade;
		
		printf("Total = %.2f reais", total);
	    printf("\n");
	    printf("\n");
		i++;
		acumulo += total;
		
		
	}
	
	while(i <= 0){
		printf("Valor final = %.2f", acumulo);
	}
	
}
