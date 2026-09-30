#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, pi = 3.14, area;
	
	printf("Digite o raio do círculo: ");
	scanf("%f", &raio);
	
	area = pi * pow(raio, 2);
	
	printf("\nAREA = %.2f", area);
	
	
	return 0;
}
