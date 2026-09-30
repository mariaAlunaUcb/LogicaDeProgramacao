#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade = 0;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Maior de idade.");
		
	}else{
		printf("Menor de idade.");
	}

	
	return 0;
}
