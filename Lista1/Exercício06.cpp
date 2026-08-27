#include <stdio.h>
#include <stdlib.h>

int main(){
	float salarioBase, salarioReceber, gratificacao, imposto;
	
	printf("Escreva seu salario: ");
	scanf("%f", &salarioBase);
	
	gratificacao = salarioBase * 0.05;
	imposto = salarioBase * 0.07;
	
	salarioReceber = salarioBase + gratificacao - imposto;
	system("cls");
	printf("Seu salario final e : %.2f.\n gratificacao adicionada = %.2f.\n Imposto retirado = %.2f", salarioReceber, gratificacao, imposto);
	
	return 0;
	
}
