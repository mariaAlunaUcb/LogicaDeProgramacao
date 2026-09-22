#include <stdio.h>

int main(){

    int i= 1, limite;
    float nota;
    
    printf("Escreva a quantidade de alunos que tem na sala: ");
    scanf("%d", &limite);
    
    while(i < limite){
    	printf("Escreva a do %d aluno: ", i);
    	scanf("%d", &nota);
    	i ++;
	}

    return 0;
}
