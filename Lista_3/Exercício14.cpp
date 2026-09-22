#include <stdio.h>
#include <locale.h>

int main(){ 
   setlocale(LC_ALL, "Portuguese");
   int n1, n2;
   
   printf("Escreva um número : ");
   scanf("%d", &n1);
   
   printf("Escreva um outro número : ");
   scanf("%d", &n2);
   
  if( n1 > n2){
  	printf("%d é maior que %d.", n1, n2);
  	
  } else if(n1 < n2){
  	printf("%d é maior que %d.", n2, n1);
  	
  }else{
  	printf("Estes números são iguais.");
  }
   return 0;	
}
