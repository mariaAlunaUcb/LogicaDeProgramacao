#include <stdio.h>
#include <locale.h>

int main(){ 
   setlocale(LC_ALL, "Portuguese");
   int numero;
   
   printf("Escreva um número inteiro qualquer: ");
   scanf("%d", &numero);
   
   if( numero > 0){
     printf("Este número é positivo");
     
   } else if( numero < 0) {
   	 printf("Este número é negativo");
   	 
   } else {
   	 printf("Este número é zero");
   }
   return 0;	
}
