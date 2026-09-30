#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i;
    int n, res;
    
    printf("Digite qual tabuada deseja realizar : ");
    scanf("%d", &n);
    
    
	for(i = 1; i <= 10; i++){
	  res = i * n;
	  printf("\n%d x %d = %d", i, n, res);
	}


	
	return 0;
}
