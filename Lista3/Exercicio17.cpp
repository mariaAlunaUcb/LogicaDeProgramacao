#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    float compra, final;
    float desconto;
    
    printf("Qual o valor da sua compra? ");
    scanf("%f", &compra);
    
    if(compra <= 100){
    	printf("\nPercentual de desconto: não há desconto");
    	printf("\nValor final = %.2f", compra);
    	
	}else if(compra > 101 && compra <= 500){
		desconto = compra * 0.05;
		final = compra - desconto;
		
		printf("\nPercentual de desconto: 5%%");
		printf("\nValor original: %.2f", compra);
		printf("\nValor com desconto : %.2f", final);
		
	}else if(compra > 500){
		desconto = compra * 0.10;
		final = compra - desconto;
		
		printf("\nPercentual de desconto: 10%%");
		printf("\nValor original: %.2f", compra);
		printf("\nValor com desconto : %.2f", final);
	}
    
    
	return 0;
}
