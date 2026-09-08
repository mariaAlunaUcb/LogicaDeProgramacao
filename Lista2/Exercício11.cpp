#include <stdio.h>

int main(){
	
	float preco;
	int codigoDePagamento;
	
	printf("Escreva preco do produto: ");
	scanf("%f", &preco);
	
	printf("Escreva forma de pagamento.\nSendo 1 para dinheiro ou cheque a vista\n2 para cartao de credito\n3 para parcelas em ate duas vezes sem juros\nE 4 para parcelas em ate duas vezes com juros. ");
	scanf("%d", &codigoDePagamento);
	
	if(codigoDePagamento == 1){
		
		printf("Valor final = %.2f\n Voce pagou a vista.", preco*0.9);
		
	} else if(codigoDePagamento == 2){
		
		printf("Valor final = %.2f\n Voce pagou no cartao.", preco*0.85);
		
	} else if(codigoDePagamento == 3){
		
		printf("Valor final = %.2f\n Voce parcelou em duas vezes sem juros", preco);
		
	} else {
		
		printf("Valor final = %.2f\n Voce parcelou em duas vezes com juros", preco*1.1);
    }   
    
    return 0;
}
