#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	
	printf("Digite sua primeiro nota: ");
	scanf("%f", &n1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite sua terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3)/3;
	
	printf("\nMedia final = %.2f", media);
	
	
	return 0;
}
