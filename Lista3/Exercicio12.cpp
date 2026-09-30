#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n > 0){
		printf("%d é positivo.", n);
		
	} else if(n < 0){
		printf("%d é negativo.", n);
		
	}else{
		printf("%d é nulo (Igual a 0).", n);
	}
	return 0;
}
