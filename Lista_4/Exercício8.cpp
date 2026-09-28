#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
    
    int i;
    int vetor[6];
    
    for(i = 0; i < 6; i++){
    	printf("Escreva o %dº número: ", i + 1);
    	scanf("%d", &vetor[i]);
    	
	}
	
	for(i = 5; i >= 0; i--){
		printf("\n%dº número = %d", i, vetor[i]);
	}
	
	return 0;
}
