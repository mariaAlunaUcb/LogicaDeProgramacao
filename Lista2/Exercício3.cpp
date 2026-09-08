#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero;
	printf("Escreva um numero: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		
		printf("%d e um numero par", numero);
		
	} else {
		
		printf("%d e um numero impar", numero);
	}
	
	return 0;
}

