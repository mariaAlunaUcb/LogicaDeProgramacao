#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    
    int i;
    int n[6];
    
    for(i = 0; i < 6; i++){
    	printf("Escreva o %dº número: ", i + 1);
    	scanf("%d", &n[i]);
	}
	
	system("cls");
	for(i = 0; i < 6; i++){
		
		printf("\n%dº numero: %d ", i + 1, n[i]);
	}
	
	return 0;
}
