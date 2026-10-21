#include <stdio.h>
#include <math.h>

float esfera(float raio ){
	float volume;
	float pi = 3.1414;
	
	volume = (4.0/3.0) * pi * pow(raio, 3);
	return printf("\nVolume = %.2f", volume);
}

int main(){
	float raio;
	printf("Digite o valor do raio da esfera: ");
	scanf("%f", &raio);
	
	esfera(raio);
}