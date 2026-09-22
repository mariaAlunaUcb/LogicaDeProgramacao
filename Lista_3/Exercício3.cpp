#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, soma, subtracao, multiplicacao, divisao;
	
	printf("Escreva um número: ");
	scanf("%d", &n1);
	
	printf("Escreva um outro número: ");
	scanf("%d", &n2);
	
	system("cls");
	soma = n1 + n2;
	subtracao = n1 - n2;
	multiplicacao = n1 * n2;
	divisao = n1 / n2;
     
    printf("---Resultado Final ---");
	printf("\nSOMA = %d", soma);
	printf("\nSUBTRAÇÃO = %d", subtracao);
	printf("\nMUTIPLICAÇÃO = %d", multiplicacao);
    printf("\nDIVISÃO = %d", divisao);
	
	return 0;
	
}
