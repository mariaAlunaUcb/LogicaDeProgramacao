#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int i;
	int vetor[10];
	int maior, menor;
	
	for(i = 0; i < 10; i++){
		printf("Escreva o %dº número: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	maior = vetor[0];
	menor = vetor[0];
	
	for(i = 0; i < 10; i++){
		
		if(vetor[i] > maior){
			maior = vetor[i];
		}
		
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	
	printf("\n---Resultado---");
	printf("\nMaior = %d", maior);
	printf("\nMenor = %d", menor);
	
	return 0;
}
