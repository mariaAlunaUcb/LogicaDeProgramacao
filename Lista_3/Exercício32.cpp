#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int entrada, saida, tempo;
	float valor;
    
    printf("\n----Sistema de estacionamento----");
    printf("\nRegistre hora de entrada em horas: ");
    scanf("%d", &entrada);
    
    printf("\nRegistre hora de saída em horas: ");
    scanf("%d", &saida);
    
    tempo = saida - entrada;
    valor = ((tempo - 1) * 5) + 10;
    
   printf("Tempo de permanencia : %d horas", tempo);
   printf("Valor = R$ %.2f", valor);
   
}

