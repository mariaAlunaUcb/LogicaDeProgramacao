#include <stdio.h>
#include <locale.h>

int main(){ 
   setlocale(LC_ALL, "Portuguese");
   int numero;
   
   printf("Escreva um número inteiro qualquer: ");
   scanf("%d", &numero);
   
   if( numero % 2 == 0){
     printf("Este número é par");
     
   } else {
   	 printf("Este número é impar");
   }
   return 0;	
}
