#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float precoPorLitro;
	float quantidadeLitro;
	float valor;
	
	printf("Digite o preço por litro de combustível : ");
	scanf("%f", &precoPorLitro);
	
	printf("Digite a quantidade de liros: ");
	scanf("%f", &quantidadeLitro);
	
	valor = precoPorLitro * quantidadeLitro;
	
	system("cls");
	if(quantidadeLitro < 20){
		
		printf("Ops! Você não possui desconto.\n");
		printf("Valor final = R$ %.2f\n", valor);
		
	} else if( quantidadeLitro >= 20 && quantidadeLitro <= 40 ){
		printf("Você possui 3%% de desconto!\n");
		printf("Valor final = R$ %.2f\n", valor * 0.97);
		printf("Valor sem desconto = R$ %.2f\n", valor);
		
	} else if( quantidadeLitro > 40 ){
		printf("Você possui 5%% de desconto!\n");
		printf("Valor final = R$ %.2f\n", valor * 0.95);
		printf("Valor sem desconto = R$ %.2f\n", valor);
	}
}

