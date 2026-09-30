#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
  
	float notas[10], aprovacao = 0;
	int i, aprovados= 0, reprovados= 0;
	
	for(i = 0; i < 10; i++){
		printf("Adicione a nota do %dº aluno: ", i+1);
		scanf("%f", &notas[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(notas[i] >= 7){
			printf("\n%dº aluno foi aprovado;", i+1);
			printf("\nNota = %.2f \n", notas[i]);
			aprovados ++;
			
		} else{
	       printf("\n%dº aluno foi reprovado;", i+1);
	       printf("\nNota = %.2f \n", notas[i]);
	       reprovados ++;
		}
			
	}
	
	aprovacao = (aprovados * 100)/10;
	printf("\nPercentual de aprovação: %.2f%%", aprovacao );
	printf("\nQuantidade de reprovados: %d", reprovados);
	
    return 0;
}
