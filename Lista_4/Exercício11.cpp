#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    
    float n[10];
    int negativos = 0;
    float somaPosi = 0;
    int i;
    
    for(i=0; i<10; i++){
    	printf("Escreva o %dº número real: ", i+1);
    	scanf("%f", &n[i]);
	}
	
	for(i=0; i<10; i++){
		if(n[i] < 0){
			negativos++;
		}
		
		if(n[i] > 0){
			somaPosi = somaPosi + n[i];
			
		}
	}
	
	printf("\nSoma dos positivos =  %.2f", somaPosi);
	printf("\nQuantidade de negativos = %d", negativos);
	return 0;
}
