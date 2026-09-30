#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf("%d é par.", n);
		
	} else{
		printf("%d é impar.", n);
		}	
	return 0;
	
}
