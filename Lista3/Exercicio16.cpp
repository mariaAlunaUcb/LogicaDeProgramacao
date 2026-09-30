#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;
    
    printf("Digite sua 1º nota: ");
    scanf("%f", &nota1);
    
    printf("Digite sua 2º nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2)/2;

//Aprovado, recuperacao e reprovado  
    if(media >= 7){
    	printf("Parabéns! Você foi aprovado.\nMedia = %.2f", media);

	}else if(media >= 5 && media <= 7){
		printf("Você está de recuperação...\nMedia = %.2f", media);
		
	}else if(media < 5){
		printf("Você está reprovado...\nMedia = %.2f", media);
	}
    
	return 0;
}
