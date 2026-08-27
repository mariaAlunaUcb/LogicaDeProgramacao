#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float n1, n2, elevado;
    
    printf("Digite o valor de um numero: ");
    scanf("%f", &n1);
    
    printf("Digite o valor de outro numero: ");
    scanf("%f", &n2);
    
    if(n1 > 0 && n2 > 0){
    	
    	elevado = pow(n1, n2);
    	
    	system("cls");
    	printf("O valor de %.2f\nlevado a %.2f\ne = %.2f\n", n1, n2, elevado);
    	
	} else {
		
		system("cls");
		printf("Os numeros precisam ser maiores que 0!");
	}
	
	return 0;
	
}
