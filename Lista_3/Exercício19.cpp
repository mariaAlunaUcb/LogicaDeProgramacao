#include <stdio.h>
#include <locale.h>



int main(){ 
   setlocale(LC_ALL, "Portuguese");
   float peso, altura, IMC;
   
   printf("Digite seu peso em gramas: ");
   scanf("%f", &peso);
   
   printf("Digite sua altura em centímetros: ");
   scanf("%f", &altura);
   
   IMC = peso / (altura * altura);
   
   if( IMC < 18.5){
   	printf("Classificado como: ABAIXO DO PESO");
   	
   }else if( IMC >= 18.5 && peso <= 24.9){
   	printf("Classificado como: PESO ADEQUADO");

   } else if(IMC >= 25 && IMC <= 29.9){
   	printf("Classificado como: SOBREPESO");
   	
   } else if(IMC > 30){
   	printf("Classificado como: OBESIDADE");
   }
   
   
   return 0;	
}
