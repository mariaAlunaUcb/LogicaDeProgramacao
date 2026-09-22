#include <stdio.h>
#include <locale.h>

int main(){ 
   setlocale(LC_ALL, "Portuguese");
   int n1, n2, n3;
   
   printf("Escreva um número : ");
   scanf("%d", &n1);
   
   printf("Escreva um outro número : ");
   scanf("%d", &n2);
   
   printf("Escreva um outro número : ");
   scanf("%d", &n3);
   

   if(n1 > n2 && n1 > n3){ // Se n1 for o maior
   	printf("%d é o maior", n1);
   	
   } if(n2 > n1 && n2 > n3){ // Se n2 for o maior
   	printf("%d é o maior", n2);
   	
   } else if(n3 > n1 && n3 > n2){
   	printf("%d é o maior", n3);
   	
   } else {
   	printf("São todos iguais.");
   }
   
   return 0;	
}
