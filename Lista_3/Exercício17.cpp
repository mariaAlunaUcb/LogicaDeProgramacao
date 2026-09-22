#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



int main(){ 
   setlocale(LC_ALL, "Portuguese");
   
  float compra, desconto5, desconto10;
  
  
  printf("Digite o valor da compra: ");
  scanf("%f", &compra);
  
  system("cls");

  desconto5 = compra * 0.95;
  desconto10 = compra *0.90;
  
  if(compra > 0 && compra <= 100 ){
  	printf("A sua compra não possui oferta de desconto.");
 	
  }else if( compra >100 && compra <= 500){
  
  	printf("\nVocê ganhou 5%% de desconto!");
  	printf("\nValor original: R$ %.2f.", compra);
  	printf("\nValor com desconto: R$ %.2f.", desconto5);
  	
  } else if(compra > 500.00 ){
  	
  	printf("\nVocê ganhou 10%% de desconto!");
  	printf("\nValor original: R$ %.2f.", compra);
  	printf("\nValor com desconto: R$ %.2f.", desconto10);
  	
  }
  
   return 0;	
}
