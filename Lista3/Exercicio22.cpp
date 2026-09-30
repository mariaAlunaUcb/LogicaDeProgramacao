#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i;
    
	for(i = 10; i >= 0; i--){
		printf("número : %d\n", i);
	}
	printf("Fim da contagem!");

	
	return 0;
}
