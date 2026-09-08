#include <stdio.h>

int main(){
	
	int v1, v2;
	
	printf("Escreva 0 para falso e 1 para verdadeiro: ");
	scanf("%d", &v1);
	
	printf("Escreva 0 para falso e 1 para verdadeiro de novo: ");
	scanf("%d", &v2);
	
	if(v1 == 0 && v2 == 0){
		
		printf("Resultado = ambos falsos");
		
	} else if( v1 == 1 && v2 == 1){
		
		printf("Resultado = ambos verdadeiros");
		
	} else if(v1 == 1 && v2 == 0) {
		
		printf("Resultado = falso");
		
	} else {
		
		printf("Resultado = falso");
	}
	
	return 0;
	
}
