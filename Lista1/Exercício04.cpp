#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario, aumento, novoSalario;
	
	printf("Escreva seu salario: ");
	scanf("%f", &salario);
	
	aumento = salario * 0.25;
	novoSalario = salario + aumento;
	
	printf("Parabens, seu novo salario agora e: R$ %.2f", novoSalario );
	
	return 0;
}
