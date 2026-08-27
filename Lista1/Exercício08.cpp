#include <stdio.h>
#include <stdlib.h>

int main(){
	float valorDepositado, taxaDeJuros, valorRendimento, valorFinal;
	
	printf("Digite o valor depositado: ");
	scanf("%f", &valorDepositado);
	
	printf("Digite o valor de taxa de juros: ");
	scanf("%f", &taxaDeJuros);
	
	valorRendimento = valorDepositado * taxaDeJuros;
	valorFinal = valorRendimento + valorDepositado;
	
	printf("Valor de rendimento = R$ %.2f\n", valorRendimento);
	printf("Valor final = R$ %.2f\n", valorFinal);
	
	return 0;
	
}
