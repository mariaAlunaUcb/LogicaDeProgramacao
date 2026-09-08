#include <stdio.h>

int main(){
	
	int n;
	printf("Escreva um numero: ");
	scanf("%d", &n);
	
	if(n > 0){
		
		printf("O dobro de %d e %d", n, n*2);
		
	} else {
		
		printf("O triplo de %d e %d", n, n* 3);
	}
	
	return 0;
}
