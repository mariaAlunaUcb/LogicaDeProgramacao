#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");
   float km, litro, consumo;
   
   printf("Escreva a distância percorrida em km: ");
   scanf("%f", &km);
   
   printf("Escreva a quantidade de combustível utilizada em litros: ");
   scanf("%f", &litro);
   
   consumo = km / litro;
   
   printf("CONSUMO MÉDIO DO VEÍCULO = %.2f km/l", consumo);
   
   return 0;	
}
