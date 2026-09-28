#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
    
    float notas[15], soma, media;
    int i;
    
    for(i = 0; i < 15; i++){
    	printf("Escreva a nota do %dº aluno: ", i+1);
    	scanf("%f", &notas[i]);
    	
    	soma += notas[i];
	}
	
	media = soma / i ;
	
	printf("Media geral = %.2f", media);
	
	return 0;
}
