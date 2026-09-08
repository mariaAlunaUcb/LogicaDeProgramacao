#include <stdio.h>

int main() {
	int a, b, soma, multiplicacao;
	
	printf("Escreva um numero: ");
	scanf("%d", &a);
	
	printf("Escreva outro numero: ");
	scanf("%d", &b);
	
	if( a == b){
		
	    soma = a + b;
	    printf("Soma = %d", soma);
	    
	} else{
		
		multiplicacao = a * b;
		printf("Multiplicacao = %d", multiplicacao);
	}
	
	return 0;
}
