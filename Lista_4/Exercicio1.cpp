#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int A[6] = {1, 0, 5, -2, -5,  7};
	int soma;
	int i;
	
	soma = A[0] + A[1] + A[5];

	printf("Soma = %d", soma);
	printf("\n");
	
	A[4] = 100;
	
	for(i = 0; i < 6; i++){
		printf("\n Vetor %d = %d", i, A[i]);
	}
	
	return 0;
}
