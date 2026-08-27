#include <stdio.h>
#include <stdlib.h>

int main(){
	float salarioBase, salarioReceber, gratificacao, imposto;
	
	printf("Digite seu salario atual: ");
	scanf("%f", &salarioBase);
	
	gratificacao = 50;
	imposto = salarioBase * 0.1;
	
	salarioReceber = salarioBase + gratificacao - imposto;
	
	printf("Seu salario final e = R$ %.2f\n", salarioReceber);
	printf("Gratificacao adicionada = R$ %.2f\n", gratificacao);
	printf("Imposto retirado = R$ %.2f\n", imposto);
	
	
	return 0;
	
}
