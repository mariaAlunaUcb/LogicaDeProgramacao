#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float area, raio, pi;
    
    printf("Escreva um valor para o raio: ");
    scanf("%f", &raio);
    
    pi = 3.14;
    area = pi * pow(raio, 2.0);
    
    printf("O valor da area e = %.2f\n", area);
	return 0;
	
}
