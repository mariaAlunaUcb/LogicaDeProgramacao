#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i;
    int limite;
	float media, soma = 0;
    
    printf("Digite quantos alunos tem na sua sala: ");
    scanf("%d", &limite);
    
    float nota[limite];
    
    for(i = 0; i < limite; i++){
    	printf("Escreva a nota do %dº aluno: ", i + 1);
    	scanf("%f", &nota[i]);
    	
    	soma += nota[i];
	}
	
	media = soma / limite;
	printf("\nMedia geral = %.2f", media);
	
	
    return 0;
}
