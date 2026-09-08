#include <stdio.h>

int main(){
	
	int n;
	printf("Escreva um numero: ");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		
		printf("A soma de %d com 5 = %d", n, n + 5);
		
	} else {
		 
		printf("A soma de %d com 8 = %d", n, n + 8);
		
	}
	
	return 0;
}
