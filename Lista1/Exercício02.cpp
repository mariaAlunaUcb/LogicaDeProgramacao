#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3, media;
	
	printf("Escreva sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("Escreva sua segunda nota: ");
	scanf("%f", &n2);
	
	printf("Escreva sua terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3)/3;
		
	printf("Sua média final e : %.2f ", media);
	
	return 0;
	

}
