#include <stdio.h>
#include <string.h>

int main(){
	
	float altura, pesoM, pesoF;
	char sexo;
	
	printf("Escreva sua altura em metros: ");
	scanf("%f", &altura);
	
	printf("Escreva F se for mulher e M se for homem: ");
	getchar();
	sexo = getchar();
	
	if(sexo == 'm' || sexo == 'M') {
		
		pesoM = (altura * 72.7) - 58;
		printf("Peso ideal = %.2f", pesoM );
		
	} else if(sexo == 'f' || sexo == 'F' ){
		
		pesoF = (altura * 62.1) - 44.7;
		printf("Peso ideal = %.2f", pesoF);
	}
	
	return 0;
}
