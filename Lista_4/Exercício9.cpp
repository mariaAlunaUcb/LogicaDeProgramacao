#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
    
    int i;
    int vetor[6];
    
    for(i=0; i<6; i++){
    	printf("Escreva o %dº valor par: ", i+1);
    	scanf("%d", &vetor[i]);
	}
	
	for(i=5; i>=0; i--){
		if(vetor[i] % 2 == 0){
			printf("\n%dº número par: %d",i +1, vetor[i]);
			
		} else{
			printf("\nOps, você escreveu algum valor impar...");
		}
	
	}
	
	return 0;
}
