#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float peso, IMC, altura;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
    printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	IMC = peso / (pow(altura, 2));
	
	if(IMC < 18.5){
		printf("Abaixo do peso.");
		
	}else if(IMC >= 18.5 && IMC <= 24.9){
		printf("Peso adequado.");
		
	}else if(IMC >= 25.0 && IMC <= 29.9){
		printf("Sobrepeso.");
		
	}else if(IMC > 30.0){
		printf("Obesidade.");
	}
	
	
	


	
	return 0;
}
