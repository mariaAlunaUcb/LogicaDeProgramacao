#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, numero, maior;
	
	printf("Digite 1 numero: ");
	scanf("%d", &maior);
	
	for(i =1; i < 10; i++){
		printf("Digite o %d ª numero: ", i + 1);
		scanf("%d", &numero);
		
		if(numero > maior){
			maior = numero;
		}
	}
	printf("O maior número é %d", maior);
	
}
