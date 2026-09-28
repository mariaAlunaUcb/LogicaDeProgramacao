#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	
	int vetor[10];
	int i;
	int maior; 
	int posicao;

//Para ler
	for(i=0; i<10; i++){
		printf("Escreva o %dº número: ", i + 1);
		scanf("%d", &vetor[i]);
	}
 
    maior = vetor[0];
    posicao = 0;

//Para achar a posição e o maior
    for(i=0; i<10; i++){
    	if(vetor[i] > maior){
    		maior = vetor[i];
    		posicao = i + 1;
		}
	}
	
	system("cls");

//Para apresentar tudo
	printf("Todos: ");
	
	for(i=0; i<10; i++){
		printf("Vetor da posição %d = %d\n", i + 1, vetor[i]);
	}
	
	printf("\n");
	printf("\nMaior = %d", maior );
	printf("\nPosição = %d", posicao);
	
	
	return 0;
}
