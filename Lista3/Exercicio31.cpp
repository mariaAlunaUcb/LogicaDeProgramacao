#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float quantiLitros, precoLitro, valorFinal, valorBruto, desconto;
    
    printf("----INFORMAÇÕES BÁSICAS----");
    printf("\n\nDigite a quantidade de litros abastecidos: ");
    scanf("%f", &quantiLitros);
    
    printf("Digite o preço do litro: ");
    scanf("%f", &precoLitro);
    
    valorBruto = quantiLitros * precoLitro;
   
    system("cls");
    
    if(quantiLitros < 20){
    	printf("----POSTO DE COMBUSTÍVEL----");
    	printf("\n\nVocê não possui desconto..");
    	printf("\nValor bruto = %.2f", valorBruto);
    	
	}else if(quantiLitros >= 20 && quantiLitros <= 40){
		desconto = 0.03;
		valorFinal = valorBruto - (valorBruto * desconto);
		
		printf("----POSTO DE COMBUSTÍVEL----");
		printf("\n\nVocê possui 3%% de desconto!");
		printf("\nValor bruto = %.2f", valorBruto);
		printf("\nValor final com desconto = %.2f", valorFinal );
		
	}else if(quantiLitros > 40){
		desconto = 0.05;
		valorFinal = valorBruto - (valorBruto * desconto);
		
		printf("----POSTO DE COMBUSTÍVEL----");	
		printf("\n\nVocê possui 5%% de desconto!");
		printf("\nValor bruto = %.2f", valorBruto);
		printf("\nValor final com desconto = %.2f", valorFinal);
	}

    return 0;
}
