#include <stdio.h>

int main(){
	
	int identificacao;
	float n1, n2, n3, ma, me;
	
	printf("Escreva seu numero de identificacao: ");
	scanf("%d", &identificacao);
	
	printf("Escreva suas notas 1, 2 e 3: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	printf("Escreva a media dos exercicios: ");
	scanf("%f", &me);
	
	ma = (n1 + n2 * 2 + n3 * 3 + me) / 7;
	
	printf("\nNumero de identificacao = %d", identificacao);
	printf("\nNota 1 = %.2f", n1);
	printf("\nNota 2 = %.2f", n2);
	printf("\nNota 3 = %.2f", n3);
	printf("\nMedia dos exercicios = %.2f", me);
	printf("\nMedia de aproveitamento = %.2f", ma);
	
	if(ma >= 90){
		
		printf("\nConceito = A");
		printf("\nSituacao = Aprovado");
		
	}
	else if(ma >= 75){
		
		printf("\nConceito = B");
		printf("\nSituacao = Aprovado");
		
	}
	else if(ma >= 60){
		
		printf("\nConceito = C");
		printf("\nSituacao = Aprovado");
		
	}
	else if(ma >= 40){
		printf("\nConceito = D");
		printf("\nSituacao = Reprovado");
	}
	else{
		
		printf("\nConceito = E");
		printf("\nSituacao = Reprovado");
		
	}
	
	return 0;
}
