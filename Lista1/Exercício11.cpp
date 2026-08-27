#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float numero, Nquadrado, NCubo, NraizQuadrada, NraizCubica;
    
    printf("Escreva um valor: ");
    scanf("%f", &numero);
    
    Nquadrado = pow(numero, 2.0);
    NCubo = pow(numero, 3.0);
    NraizQuadrada = sqrt(numero);
    NraizCubica = cbrt(numero);
    
    printf("O ao quadrado = %.2f\n", Nquadrado);
    printf("O valor ao cuboo = %.2f\n", NCubo);
    printf("O valor da raiz quadrada = %.2f\n", NraizQuadrada);
    printf("O valor da raiz cubica = %.2f\n", NraizCubica);
	return 0;
	
}
