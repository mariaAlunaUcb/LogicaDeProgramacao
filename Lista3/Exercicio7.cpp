#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float conversao, celsius, fahren;
	
	printf("Digite a temperatura em celsius: ");
	scanf("%f", &celsius);
	
    fahren = (celsius * 9/5) + 32;
    
	printf("\nEm fahrenheit = %.2f", fahren);
	
	
	return 0;
}
