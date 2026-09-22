#include <stdlib.h>
#include <locale.h>

int main(){ 
   setlocale(LC_ALL, "Portuguese");
   
   float n1, n2, media;
   
   printf("Escreva sua primeira nota: ");
   scanf("%f", &n1);
   
   printf("Escreva a sua segunda nota: ");
   scanf("%f", &n2);
   
   
   media = (n1 + n2)/2;
   printf("\nNOTA FINAL = %.2f", media);
 
   if(media >= 7){
   	printf("\nSITUA플O = APROVADO.");
   	
   } else if(media >= 5 && media <= 7 ){
   	printf("\nSITUA플O = RECUPERA플O.");
   	
   } else if( media < 5){
   	printf("\nSITUA플O = REPROVADO.");
   }
   
   return 0;	
}

