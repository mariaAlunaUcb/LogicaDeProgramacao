#include <stdio.h>
#include <math.h>

float cilindro(float altura, float raio){
	float volume;
    float pi = 3.1414;
	volume = pi * pow(raio,2) * altura;
	
	return printf("\nVolume = %.2f", volume);
}

int main(){
	float altura, raio;
	
	printf("Digite a altura do cilindro: ");
	scanf("%f", &altura);
	
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	
	cilindro(altura, raio);
	
	
}