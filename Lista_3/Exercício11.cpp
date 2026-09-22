#include <stdio.h>

int main(){ 
   int idade;
   
   printf("Apresente sua idade: ");
   scanf("%d", &idade);
   
   if(idade >= 18){
     printf("RESULTADO = Maior de idade");
     
   } else {
   	 printf("RESULTADO = Menor de idade");
   }
   return 0;	
}
