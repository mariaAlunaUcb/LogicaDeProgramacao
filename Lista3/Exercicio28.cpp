#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    int i;
    int n[10], maior, menor;
    
    for(i = 0; i < 10; i++){
    	printf("Digite o %dº número: ", i+1);
    	scanf("%d", &n[i]);
	}
	
	maior = n[0];
	menor = n[0];
	
	for(i = 0; i < 10; i++){
		if(n[i] > maior){
			maior = n[i];
		}
		
		if(n[i] < menor){
			menor = n[i];
		}
	}
	
	printf("\n\nMaior número: %d", maior);
	printf("\nMenor número: %d", menor);
	
    return 0;
}
