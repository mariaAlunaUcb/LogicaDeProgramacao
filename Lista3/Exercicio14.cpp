#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	printf("Digite outro número: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("%d é maior", n1);
		
	}else{
		printf("%d é maior", n2);
	}
    
	return 0;
}
