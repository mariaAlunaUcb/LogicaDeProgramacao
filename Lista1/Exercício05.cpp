#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario, percentualDeAumento, novoSalario;
	
	printf("Escreva seu salario atual: ");
	scanf("%f", &salario);
	
	printf("Escreva o percentual de aumento :");
	scanf("%f", &percentualDeAumento);
	
	novoSalario = (salario * percentualDeAumento) + salario;
	
	printf("Seu novo salario e: R$ %.2f", novoSalario);
	
	return 0;
	
}
