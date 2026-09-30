#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i;
    
	for(i = 1; i <= 100; i++){
		if(i % 2 == 0){
			printf("\nPar = %d", i);
		}
    }

	
	return 0;
}
