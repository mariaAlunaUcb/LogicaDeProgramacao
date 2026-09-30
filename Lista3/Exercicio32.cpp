#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    int entrada, saida, permanencia;
	float valor;
    
    printf("\n------ESTACIONAMENTO------");
    printf("\n\nDigite a hora de entrada: ");
    scanf("%d", &entrada);
    
    printf("Digite a hora de saída: ");
    scanf("%d", &saida);
    
    permanencia = saida - entrada;
    
    if(permanencia <= 1){
    	valor = 10;
    	
	}else{
		valor = 10 + ((permanencia - 1) * 5);
		
	}
	
	system("cls");
	printf("\n----RESULTADO FINAL----");
	printf("\n\nTempo de permanência: %d", permanencia);
	printf("\nValor total: R$%.2f", valor);

    return 0;
}
