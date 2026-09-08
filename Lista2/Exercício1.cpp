#include <stdio.h>

int main(){
	
	int a, b, c, somaAB;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	printf("Digite mais um numero: ");
	scanf("%d", &b);
	
	printf("Digite um ultimo numero: ");
	scanf("%d", &c);
	
	somaAB = a + b;
	
	if(somaAB < c ) {
		printf("A soma entre a e b e menor que c");
	} 
	
	
}
