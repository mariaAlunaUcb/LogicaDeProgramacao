#include <stdio.h>
#include <math.h>

int main(){
	
	float peso, altura, IMC;
	
	printf("Escreva seu peso: ");
	scanf("%f", &peso);
	
	printf("Escreva sua altura: ");
	scanf("%f", &altura);
	
	IMC = peso / pow(altura, 2);

     if(IMC < 18.5){
     	
     	printf("Voce esta abaixo do peso");
     	
	 } else if(IMC >= 18.5 && IMC <= 25){
	 	
	 	printf("Voce esta com um peso normal");
	 	
	 } else if(IMC >= 25 && IMC <= 30){
	 	
	 	printf("Voce esta acima do peso");
	 	
	 } else{
	 	
	 	printf("Voce esta obeso");
	 }
}
