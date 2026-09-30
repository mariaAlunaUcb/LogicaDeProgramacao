#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, soma;
	
	printf("Escreva um número: ");
	scanf("%d", &n1);

	printf("Escreva outro número: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	system("cls");
	
	printf("SOMA : %d + %d = %d", n1, n2, soma);
	return 0;
}
