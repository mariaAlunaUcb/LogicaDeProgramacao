#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, soma;
	
	printf("Escreva um número: ");
	scanf("%d", &n1);

	printf("Escreva um outro número: ");
	scanf("%d", &n2);
	
	system("cls");
	soma = n1 + n2;
	printf("SOMA = %d", soma);
	
	return 0;
	
	
}
