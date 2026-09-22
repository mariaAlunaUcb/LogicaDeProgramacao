#include <stdio.h>
#include <locale.h>



int main(){ 
   setlocale(LC_ALL, "Portuguese");
   int idade;
   
   printf("Digite sua idade: ");
   scanf("%d", &idade);
   
   if(idade >= 0 && idade <= 12){
   	printf("Classificado como: CRIANÇA");
   	
   }else if(idade >= 13 && idade <= 17){
   	printf("Classificado como: ADOLESCENTE");

   } else if(idade >= 18 && idade <= 59){
   	printf("Classificado como: ADULTO");
   	
   } else if(idade >= 60){
   	printf("Classificado como: IDOSO");
   }
   
   
   return 0;	
}
