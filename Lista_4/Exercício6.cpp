#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n[10];
	int i;
	int soma = 0;
	
	for(i = 0; i < 10; i++){
		printf("Escreva o %dº número: ", i);
		scanf("%d", &n);
		
		if(n[i] % 2 == 0){
			soma ++;
		}
	}
	
	 printf("Soma = %d", soma);
}
