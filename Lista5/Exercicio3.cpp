#include <stdio.h>

float celsius( float f){
	float c;
    c = f - 32.0 * (5.0/9.0);
    return printf("A temperatura em celcius e: %.2f", c);
	
}

int main(){
	float f;
	
	printf("Digite a temepratura em fahrenheit: ");
	scanf("%f", &f);
	
	celsius(f);
}

