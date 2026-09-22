#include <stdio.h>

int main(){

   float nota;
   int i;
   
   for( i = 1; i <= 10; i++ ){
   	printf("Digite a nota do aluno %d: ", i);
   	scanf("%f", &nota);
   	
   	if(nota >= 7){
   		printf("Aprovado!\n");

	   }else{
	   	printf("Reprovado!\n");
	   }
	
   }
      return 0;
}
