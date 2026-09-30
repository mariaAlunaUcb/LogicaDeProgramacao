#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, soma, sub, multi, div;
	
	printf("Escreva um número: ");
	scanf("%d", &n1);

	printf("Escreva outro número: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	multi = n1 * n2;
	div = n1 / n2;
	
	system("cls");
	
	printf("\nSOMA : %d + %d = %d", n1, n2, soma);
	printf("\nSUBTRAÇÃO : %d - %d = %d", n1, n2, sub);
	printf("\nMULTIPLICAÇÃO : %d * %d = %d", n1, n2, multi);
	printf("\nDIVISÃO : %d / %d = %d", n1, n2, div);
	
	return 0;
}
