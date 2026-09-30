#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n[3], maior;
	int i;
	
	for(i = 0; i < 3; i++ ){
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &n[i]);
	}
	
	maior = n[0];
	
	for(i = 0; i < 3; i++){
		if(n[i] > maior){
			maior = n[i];
		}
	}
	
	printf("O maior é %d", maior);
    
	return 0;
}
