#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	
	printf("Digite a base do retângulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do retângulo: ");
	scanf("%f", &altura);
	
	area = base * altura;
	printf("\nAREA = %.2f", area);
	
	
	return 0;
}
