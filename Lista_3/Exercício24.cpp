#include <stdio.h>

int main(){
	int i = 1, tabuada, res;
	
	printf("Escolha uma tabuada:");
	scanf("%d", &tabuada);
	
    while( i <= 10){
    	printf("\n%d x %d = %d", tabuada, i, res );
    	i++;
    	res = i * tabuada;
	}
	
}
