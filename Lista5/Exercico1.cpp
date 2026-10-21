#include <stdio.h>
#include <stdlib.h>

float maior(float n1, float n2){
	
	if(n1 > n2){
		system("cls");
		printf("------Resultado------\n");
		return  printf("%.2f e maior que %.2f", n1, n2);
		
	} else if(n2 > n1){
		system("cls");
		printf("------Resultado------\n");
		return printf("%.2f e maior que %.2f", n2, n1);
		
	}
}

int main(){
	float n1, n2;
	
	printf("------Entrada------\n");
	printf("Digite um numero: ");
	scanf("%f", &n1);
	
	printf("Digite outro numero: ");
	scanf("%f", &n2);
	
	maior(n1, n2);
}