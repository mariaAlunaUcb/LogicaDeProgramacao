#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n[8];
	int i;
	int x, y;
	int soma;
	
	for(i = 0; i < 8; i ++){
		printf("Digite %dº número: ", i+1);
		scanf("%d", &n[i]);
	}
	
	printf("Digite uma posição do vetor: ");
	scanf("%d", &y);
	
	printf("Digite outra posição do vetor: ");
	scanf("%d", &x);
	
	soma = n[y] + n[x];
	
	printf("Y(%d) X(%d) Soma = %d", n[y], n[x], soma);
}
