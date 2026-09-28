#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float n[10];
	int i;
	float q[10];
	
	for(i = 0; i < 10; i++){
		printf("Escreva o %d° número: ", i + 1);
		scanf("%f", &n[i]);
		
		q[i] = pow(n[i], 2);
	}
	
	for(i = 0; i < 10; i++){
		printf("\n%.2f² = %.2f ", n[i], q[i]);
	}
	
	return 0;
}
