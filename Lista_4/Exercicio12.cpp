#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    
    int i;
    float n[5];
    float maior, menor, media, soma;
    
    for(i=0; i<5; i++){
    	printf("Escreva o %dº número: ", i+1);
    	scanf("%f", &n[i]);
    	
    	soma += n[i];
    	
	}
	
	media = soma/ i;
	
	maior = n[0];
	menor = n[0];
	
	for(i=0; i<5; i++){
		
		if(n[i] > maior){
			maior = n[i];
		}
		
		if(n[i] < menor){
			menor = n[i];
		}
		
	}
	
//Valores lidos
    
    for(i=0; i<5; i++){
    	printf("\n%dº número: %.2f", i + 1, n[i]);
	}
    
    printf("\n");
    printf("\nMaior = %.2f", maior);
    printf("\nMenor = %.2f", menor);
    printf("\nMedia = %.2f", media);
	return 0;
}
